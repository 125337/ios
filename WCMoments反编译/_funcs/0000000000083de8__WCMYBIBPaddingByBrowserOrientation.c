// _WCMYBIBPaddingByBrowserOrientation @0x83de8

undefined1  [16] _WCMYBIBPaddingByBrowserOrientation(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  ulong local_98;
  uint local_7c;
  undefined8 local_78;
  ulong local_30;
  
  local_30 = *(ulong *)PTR__UIEdgeInsetsZero_001100b0;
  uVar1 = _WCMYBIBIsIphoneXSeries();
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_78);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar3 = _objc_msgSend_statusBarOrientation(uVar2,local_78);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _UIDeviceOrientationIsLandscape(param_1);
    if ((uVar1 & 1) == 0) {
      if (param_1 + -1 == 0) {
        local_30 = _WCMYBIBStatusbarHeight(0);
        if (lVar3 == 1) {
          _WCMYBIBSafeAreaBottomHeight(0);
        }
      }
      else {
        _WCMYBIBStatusbarHeight(param_1 + -1);
        if (lVar3 == 1) {
          local_98 = _WCMYBIBSafeAreaBottomHeight(0);
        }
        else {
          local_98 = 0;
        }
        local_30 = local_98;
      }
      uVar1 = _UIDeviceOrientationIsLandscape(lVar3);
      if ((uVar1 & 1) != 0) {
        _WCMYBIBSafeAreaBottomHeight();
      }
    }
    else {
      local_7c = 0;
      if (param_1 != lVar3) {
        local_7c = _UIDeviceOrientationIsLandscape(lVar3);
      }
      if (param_1 != lVar3) {
        if ((local_7c & 1) != 0) {
          local_30 = _WCMYBIBSafeAreaBottomHeight();
        }
      }
      else {
        _WCMYBIBSafeAreaBottomHeight();
        local_30 = 0;
      }
      _WCMYBIBSafeAreaBottomHeight();
      _WCMYBIBStatusbarHeight();
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_30;
  return auVar4;
}

