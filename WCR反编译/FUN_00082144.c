// FUN_00082144 @ 00082144

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00082144(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  undefined *local_180;
  undefined8 *local_168;
  undefined *local_b0;
  undefined *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  undefined4 local_38;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_31 = param_7;
  local_30 = param_6;
  if (local_28 == 0) {
    local_38 = 1;
  }
  else {
    if ((DAT_028c7e78 & 1) == 0) {
      FUN_0006e628();
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    dVar4 = param_3;
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    local_50 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_98 = param_3;
    local_90 = dVar4;
    local_88 = param_2;
    local_80 = param_1;
    local_78 = param_1;
    if ((local_50 <= 0.0) || (param_1 <= 0.0)) {
      local_38 = 1;
    }
    else {
      FUN_000733f8(local_28);
      dVar4 = local_50;
      FUN_00073b4c(local_50,local_78,local_30);
      lVar3 = local_28;
      local_a0 = dVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      if (local_a0 <= 0.0) {
        FUN_00073c54(local_28,1);
      }
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      dVar4 = DAT_028c7f08;
      if ((((local_31 & 1) == 0) || ((DAT_028c7f00 & 1) == 0)) || (DAT_028c7f08 <= 0.0)) {
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      else {
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar4);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        uVar2 = (uint)local_28;
        FUN_00074174();
        if ((uVar2 & 1) == 0) {
          local_168 = &DAT_028c7d50;
        }
        else {
          local_168 = &DAT_028c7d58;
        }
        local_180 = (undefined *)*local_168;
        (*(code *)PTR__objc_retain_02578638)();
        bVar1 = local_180 == (undefined *)0x0;
        local_a8 = local_180;
        if (bVar1) {
          local_b0 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
          _objc_retainAutoreleasedReturnValue();
          local_180 = local_b0;
        }
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_CGColor_026ca470);
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        _objc_storeStrong(&local_a8,0);
      }
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

