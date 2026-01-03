# -*- coding: utf-8 -*-

import contextlib
import os
import sys
import time


class Timer(object):
    def __init__(self):
        self.start_time = time.time()
        self.start_clock = self._clock()

    def _clock(self):
        times = os.times()
        return times[0] + times[1]

    def __str__(self):
        return "[%.3fs CPU, %.3fs wall-clock]" % (
            self._clock() - self.start_clock,
            time.time() - self.start_time)


@contextlib.contextmanager
def timing(text, block=False):
    timer = Timer()
    if block:
<<<<<<< Updated upstream
        print "%s..." % text
    else:
        print "%s..." % text,
    sys.stdout.flush()
    yield
    if block:
        print "%s: %s" % (text, timer)
    else:
        print timer
=======
        print("%s..." % text)
    else:
        print("%s..." % text,
    sys.stdout.flush())
    yield
    if block:
        print("%s: %s" % (text, timer))
    else:
        print(timer)
>>>>>>> Stashed changes
    sys.stdout.flush()
