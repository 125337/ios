// setLastDownloadRequest: @0x2bc60

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setLastDownloadRequest_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastDownloadRequest) = param_3;
  return;
}

