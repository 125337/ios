// supportSystemOrientationMask @0x8af14

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCMYBIBScreenRotationHandler::supportSystemOrientationMask(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_48;
  unsigned_long_long local_40;
  undefined *local_28;
  
  bVar1 = true;
  local_28 = (undefined *)_objc_msgSend_maskOfApplicationDelegate(param_1);
  if (local_28 == &DAT_00002710) {
    local_28 = (undefined *)_objc_msgSend_maskOfInfoPlist(0,param_1,local_48);
  }
  else {
    bVar1 = local_28 != (undefined *)0x0;
    if (!bVar1) {
      local_28 = (undefined *)0x1e;
    }
  }
  local_40 = _objc_msgSend_maskOfViewController(param_1,local_48);
  local_40 = (ulong)local_28 & local_40;
  if (((bVar1) && (uVar2 = _WCMYBIBIsIphoneXSeries(), (uVar2 & 1) != 0)) &&
     (((uint)local_40 >> 2 & 1) != 0)) {
    local_40 = local_40 ^ 4;
  }
  return local_40;
}

