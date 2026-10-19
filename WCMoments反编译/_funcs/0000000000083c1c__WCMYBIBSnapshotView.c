// _WCMYBIBSnapshotView @0x83c1c

void _WCMYBIBSnapshotView
               (undefined1 param_1 [16],undefined8 param_2,double param_3,double param_4,
               undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  double local_30;
  double local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  bVar1 = true;
  if (local_20 != 0) {
    local_40 = _objc_msgSend_bounds(local_20,local_c0);
    bVar1 = true;
    local_38 = param_2;
    local_30 = param_3;
    local_28 = param_4;
    if (0.0 < param_3) {
      local_60 = _objc_msgSend_bounds(local_20,local_c0);
      bVar1 = param_4 <= 0.0;
      local_58 = param_2;
      local_50 = param_3;
      local_48 = param_4;
    }
  }
  if (bVar1) {
    local_18 = 0;
    local_64 = 1;
  }
  else {
    local_88 = _objc_msgSend_bounds(local_20,local_c0);
    local_80 = param_2;
    local_78 = param_3;
    local_70 = param_4;
    _objc_msgSend_mainScreen(&_OBJC_CLASS___UIScreen,local_c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_scale(uVar3,local_c0);
    dVar5 = local_70;
    _UIGraphicsBeginImageContextWithOptions(local_78,1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    lVar2 = local_20;
    local_a8 = _objc_msgSend_bounds(local_20,local_c0);
    local_a0 = dVar5;
    local_98 = uVar4;
    local_90 = param_4;
    _objc_msgSend_drawViewHierarchyInRect_afterScreenUpdates_
              (local_a8,dVar5,uVar4,param_4,lVar2,local_c0,0);
    _UIGraphicsGetImageFromCurrentImageContext();
    local_b0 = _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    local_18 = (*(code *)PTR__objc_retain_00110460)(local_b0);
    local_64 = 1;
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

