// FUN_000915f8 @ 000915f8

void FUN_000915f8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  dword *pdVar3;
  dword *pdVar4;
  undefined *puVar5;
  double dVar6;
  undefined *local_208;
  undefined8 *local_1f0;
  double local_1a0;
  double local_198;
  undefined1 auStack_108 [55];
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  double local_c0;
  double local_b8;
  dword *local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined1 local_51;
  dword *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar2 = local_28;
  FUN_0006cc88();
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    if ((DAT_028c7e78 & 1) == 0) {
      FUN_0006e628();
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    FUN_0006fa28();
    if ((uVar2 & 1) == 0) {
      if (local_48 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeFromSuperview_026ca800);
      }
      FUN_0006faf4(local_28);
      local_38 = 1;
    }
    else {
      pdVar3 = (dword *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pdVar4 = pdVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pdVar4;
      (*(code *)PTR__objc_release_02578630)(pdVar3);
      pdVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_51 = pdVar3 != (dword *)0x0;
      if ((bool)local_51) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        dVar6 = param_3;
        local_80 = param_1;
        local_78 = param_2;
        local_70 = param_3;
        local_68 = param_4;
        local_60 = param_3;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        local_a8 = param_3;
        local_a0 = dVar6;
        local_98 = param_2;
        local_90 = param_1;
        local_88 = param_1;
        if ((0.0 < local_60) && (0.0 < param_1)) {
          FUN_000733f8(local_28);
          pdVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_integerValue_026ca750);
          local_b0 = pdVar3;
          if ((long)pdVar3 < 0) {
            local_b0 = (dword *)0x0;
          }
          if (100 < (long)local_b0) {
            local_b0 = &segment_command_00000020.flags;
          }
          local_b8 = (double)NEON_fminnm(local_60,local_88);
          if ((long)local_b0 < 100) {
            if ((long)local_b0 < 1) {
              local_1a0 = 0.0;
            }
            else {
              local_1a0 = (local_b8 / 2.0) * ((double)(long)local_b0 / 100.0);
            }
            local_198 = local_1a0;
          }
          else {
            local_198 = local_b8 / 2.0;
          }
          local_c0 = local_198;
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_198);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        dVar6 = DAT_028c7f08;
        if (((DAT_028c7f00 & 1) == 0) || (DAT_028c7f08 <= 0.0)) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        else {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(dVar6);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          FUN_00074174();
          if ((uVar2 & 1) == 0) {
            local_1f0 = &DAT_028c7d50;
          }
          else {
            local_1f0 = &DAT_028c7d58;
          }
          local_208 = (undefined *)*local_1f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_d1 = 0;
          bVar1 = local_208 == (undefined *)0x0;
          local_c8 = local_208;
          if (bVar1) {
            local_208 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
            _objc_retainAutoreleasedReturnValue();
            local_d0 = local_208;
          }
          local_d1 = bVar1;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_CGColor_026ca470);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((local_d1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_d0);
          }
          _objc_storeStrong(&local_c8,0);
        }
      }
      else {
        FUN_000701ec(auStack_108);
        uVar2 = 0;
        FUN_0007017c();
        if ((uVar2 & 1) == 0) {
          FUN_0006faf4(local_28);
        }
        else {
          FUN_00070260(local_28);
        }
      }
      uVar2 = local_40;
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar2 & 1) != 0) {
        FUN_00070364(local_40,local_28);
      }
      _objc_storeStrong(&local_50,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

