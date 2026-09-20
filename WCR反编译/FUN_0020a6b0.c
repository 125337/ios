// FUN_0020a6b0 @ 0020a6b0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0020a6b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    lVar2 = local_28;
    FUN_0021029c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    if (lVar2 == 0) {
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      dVar3 = param_1;
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      if ((dVar3 <= 0.0) ||
         (dVar3 = param_1, uVar4 = param_2, uVar5 = param_3, uVar6 = param_4, _CGRectGetHeight(),
         dVar3 <= 0.0)) {
        local_2c = 1;
      }
      else {
        lVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
        uVar1 = (uint)lVar2;
        FUN_00207ae0(dVar3,uVar4,uVar5,uVar6,param_1,param_2,param_3,param_4);
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (param_1,param_2,param_3,param_4,local_38,PTR_s_setFrame__026ca960);
        }
        local_2c = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

