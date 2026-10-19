// setLastDownloadProgress: @0x2c070

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setLastDownloadProgress_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastDownloadProgress) = param_3;
  return;
}

