// setStatusBarHeightInset: @0xc50cc

/* Function Stack Size: 0x18 bytes */

void WCMTOCropToolbar::setStatusBarHeightInset_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_statusBarHeightInset) = param_3;
  _objc_msgSend_setNeedsLayout(param_1);
  return;
}

