// FUN_00072ca4 @ 00072ca4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00072ca4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,byte *param_6,byte param_7)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined *local_1a0;
  byte *local_188;
  undefined8 local_130;
  undefined *local_b8;
  undefined *local_b0;
  double local_a8;
  undefined8 local_a0;
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
  byte *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_31 = param_7;
  local_30 = param_6;
  if (local_28 == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = (uint)local_28;
    _WCRNameplateViewIsProtected();
    if ((uVar2 & 1) == 0) {
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
        if ((*param_6 & 1) == 0) {
          local_130 = 0;
        }
        else {
          local_130 = *(undefined8 *)(param_6 + 8);
        }
        local_a0 = local_130;
        dVar4 = local_50;
        FUN_00073b4c(local_50,local_78,local_130);
        lVar3 = local_28;
        local_a8 = dVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar4);
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if (((*param_6 & 1) != 0) && (local_a8 <= 0.0)) {
          FUN_00073c54(local_28,1);
        }
        lVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar3);
        if ((((local_31 & 1) == 0) || ((param_6[0x10] & 1) == 0)) ||
           (*(double *)(param_6 + 0x18) <= 0.0)) {
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
          uVar5 = *(undefined8 *)(param_6 + 0x18);
          lVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5);
          (*(code *)PTR__objc_release_02578630)(lVar3);
          uVar2 = (uint)local_28;
          FUN_00074174();
          if ((uVar2 & 1) == 0) {
            local_188 = param_6 + 0x20;
          }
          else {
            local_188 = param_6 + 0x28;
          }
          local_1a0 = *(undefined **)local_188;
          (*(code *)PTR__objc_retain_02578638)();
          bVar1 = local_1a0 == (undefined *)0x0;
          local_b0 = local_1a0;
          if (bVar1) {
            local_b8 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
            _objc_retainAutoreleasedReturnValue();
            local_1a0 = local_b8;
          }
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_CGColor_026ca470);
          lVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar3);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          _objc_storeStrong(&local_b0,0);
        }
        local_38 = 0;
      }
    }
    else {
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

