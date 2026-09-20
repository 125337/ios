// FUN_001d0ac4 @ 001d0ac4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001d0ac4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint local_270;
  ulong local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_5);
  uVar2 = (uint)puVar3;
  FUN_001cf94c();
  if (((uVar2 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    uVar2 = (uint)local_28;
    FUN_001d24ac();
    if ((uVar2 & 1) == 0) {
      uVar2 = (uint)local_28;
      FUN_001d60d8();
      if ((uVar2 & 1) == 0) {
        uVar2 = (uint)local_28;
        FUN_001d62d8();
        if ((uVar2 & 1) == 0) {
          uVar2 = (uint)local_28;
          FUN_001d64e0();
          if ((uVar2 & 1) == 0) {
            uVar2 = (uint)local_28;
            FUN_001d2ddc();
            if ((uVar2 & 1) == 0) {
              uVar4 = local_28;
              FUN_001d31ec();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (uVar4 == 0) {
                uVar4 = local_28;
                FUN_001d2fb0();
                _objc_retainAutoreleasedReturnValue();
                local_48 = uVar4;
                if (uVar4 == 0) {
                  FUN_001d1c14();
                  local_270 = 0;
                  if (uVar4 != 0) {
                    uVar7 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_isKindOfClass__0269cd68,uVar4);
                    local_270 = (uint)uVar7;
                  }
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
                  bVar1 = false;
                  if (24.0 <= param_3) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
                    bVar1 = 24.0 <= param_1;
                  }
                  uVar2 = (uint)local_28;
                  FUN_001d3428();
                  if ((((local_270 & 1) != 0) && (bVar1)) && ((uVar2 & 1) != 0)) {
                    FUN_001d9428(local_28);
                    FUN_001d031c(local_28);
                  }
                  local_38 = 0;
                }
                else {
                  pcVar5 = &cf_WCPuzzleImageView;
                  _NSClassFromString();
                  local_50 = pcVar5;
                  if ((pcVar5 == (cfstringStruct *)0x0) ||
                     (uVar4 = local_48,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_48,PTR_s_isKindOfClass__0269cd68,pcVar5), (uVar4 & 1) == 0)) {
                    pcVar5 = &cf_WCImageView;
                    _NSClassFromString();
                    bVar1 = false;
                    local_98 = pcVar5;
                    if (pcVar5 != (cfstringStruct *)0x0) {
                      uVar4 = local_48;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_48,PTR_s_isKindOfClass__0269cd68,pcVar5);
                      bVar1 = false;
                      if ((uVar4 & 1) != 0) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
                        uVar8 = 0x4040000000000000;
                        bVar1 = true;
                        local_b8 = param_1;
                        local_b0 = param_2;
                        local_a8 = param_3;
                        local_a0 = param_4;
                        if (32.0 <= param_3) {
                          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
                          bVar1 = param_1 < 32.0;
                          local_d8 = param_3;
                          local_d0 = uVar8;
                          local_c8 = param_2;
                          local_c0 = param_1;
                        }
                      }
                    }
                    if (bVar1) {
                      local_38 = 1;
                    }
                    else {
                      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_48,PTR_s_setBackgroundColor__026ca888);
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_retainAutorelease();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
                      uVar4 = local_48;
                      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(uVar4);
                      (*(code *)PTR__objc_release_02578630)(puVar6);
                      FUN_001d6d38(local_48);
                      uVar4 = local_48;
                      FUN_001d8c8c();
                      _objc_retainAutoreleasedReturnValue();
                      local_e0 = uVar4;
                      if ((uVar4 != 0) && (FUN_001d2ddc(), (uVar4 & 1) != 0)) {
                        _objc_storeStrong(&local_e0,0);
                      }
                      if (local_e0 == 0) {
                        FUN_001d9428(local_48);
                        FUN_001d031c(local_48);
                      }
                      else {
                        FUN_001d9428(local_e0);
                        FUN_001d031c(local_e0);
                      }
                      FUN_001d7254(local_48);
                      local_38 = 1;
                      _objc_storeStrong(&local_e0,0);
                    }
                  }
                  else {
                    bVar1 = false;
                    if (local_28 != local_48) {
                      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
                      uVar8 = 0x3ff0000000000000;
                      bVar1 = true;
                      local_70 = param_1;
                      local_68 = param_2;
                      local_60 = param_3;
                      local_58 = param_4;
                      if (1.0 <= param_3) {
                        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
                        bVar1 = param_1 < 1.0;
                        local_90 = param_3;
                        local_88 = uVar8;
                        local_80 = param_2;
                        local_78 = param_1;
                      }
                    }
                    if (bVar1) {
                      local_38 = 1;
                    }
                    else {
                      FUN_001d7c3c(local_48);
                      local_38 = 1;
                    }
                  }
                }
                _objc_storeStrong(&local_48,0);
              }
              else {
                FUN_001d72f0(local_28);
                local_38 = 1;
              }
            }
            else {
              FUN_001d6720(local_28);
              uVar4 = local_28;
              FUN_001d6b34();
              _objc_retainAutoreleasedReturnValue();
              local_40 = uVar4;
              if (uVar4 != 0) {
                FUN_001d6d38(uVar4);
                FUN_001d7254(local_40);
              }
              local_38 = 1;
              _objc_storeStrong(&local_40,0);
            }
            goto LAB_001d14d4;
          }
        }
        local_38 = 1;
      }
      else {
        local_38 = 1;
      }
    }
    else {
      local_38 = 1;
    }
  }
LAB_001d14d4:
  _objc_storeStrong(&local_28,0);
  return;
}

