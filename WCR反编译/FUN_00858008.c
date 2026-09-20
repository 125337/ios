// FUN_00858008 @ 00858008

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_00858008(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  long local_38;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar2 = local_30;
  if ((local_30 != 0) && (local_38 != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      dVar3 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar4 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      _CGRectGetMinX(param_1,param_2);
      local_21 = false;
      if (((10.0 <= dVar3) && (local_21 = false, dVar3 <= 30.0)) && (local_21 = false, 8.0 <= dVar4)
         ) {
        uVar5 = 0x4044000000000000;
        local_21 = false;
        if (dVar4 <= 40.0) {
          dVar3 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
          _CGRectGetWidth(dVar3,uVar5,param_3,param_4);
          local_21 = dVar3 - 50.0 <= param_1;
        }
      }
      goto LAB_00858320;
    }
  }
  local_21 = false;
LAB_00858320:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

