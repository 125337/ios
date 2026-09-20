// FUN_002d77c4 @ 002d77c4

/* WARNING: Removing unreachable block (ram,0x002d8230) */

void FUN_002d77c4(undefined8 param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_1bc;
  uint local_114;
  ulong local_100;
  uint local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  byte local_80;
  byte local_7b;
  byte local_7a;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  long local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_29 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_51 = 0;
  local_bc = 1;
  if (local_28 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_bc = (uint)puVar3 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_bc & 1) == 0) {
    uVar4 = local_28;
    FUN_002b7bc4();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_100 = uVar4;
    if (uVar4 == 0) {
      local_100 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabBar_0269e518);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_100;
    }
    local_69 = uVar4 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_100;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_79 = 0;
    local_114 = 1;
    if (local_60 != 0) {
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_114 = (uint)uVar4 ^ 1;
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_114 & 1) == 0) {
      uVar4 = local_60;
      FUN_002d47d8();
      if ((uVar4 & 1) == 0) {
        uVar4 = local_60;
        FUN_002d4db4();
        if ((uVar4 & 1) == 0) {
          FUN_002d9114(local_60,1);
          local_7a = 0;
          uVar4 = local_60;
          _objc_getAssociatedObject(local_60,&DAT_028c9807);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar5 & 1) != 0) {
            _objc_setAssociatedObject(local_60,&DAT_028c9807,0,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_60,PTR_s_setAlpha__026ca860);
            FUN_002b7768(local_60,0,&cf_reveal_clearLegacyMiniTaskHidden);
          }
          uVar4 = local_60;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_reveal___);
          _objc_retainAutoreleasedReturnValue();
          FUN_002d4e8c(uVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar4 = local_60;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_reveal_pre___);
          _objc_retainAutoreleasedReturnValue();
          FUN_002b7184(uVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isHidden_026ca768);
          if ((uVar4 & 1) == 0) {
            uVar4 = local_60;
            FUN_002b83f8();
            local_1bc = 0;
            if ((uVar4 & 1) != 0) {
              uVar4 = local_60;
              FUN_002c73bc();
              local_1bc = (uint)uVar4;
            }
            uVar4 = local_60;
            local_7b = (byte)local_1bc & 1;
            if ((local_1bc & 1) == 0) {
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_reveal_immediate___);
              _objc_retainAutoreleasedReturnValue();
              FUN_002c007c(uVar4);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3ff0000000000000,local_60,PTR_s_setAlpha__026ca860);
              FUN_002bb194(local_60,local_28,local_29 & 1);
              uVar4 = local_60;
              uVar5 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndex_0269e580);
              FUN_002a1a50(uVar4,uVar5,local_29 & 1);
              FUN_002d9298();
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(0,local_60,PTR_s_setAlpha__026ca860);
              FUN_002d9298();
            }
          }
          else {
            FUN_002d9298();
          }
          puVar3 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_60;
          local_b8 = PTR___NSConcreteStackBlock_02578660;
          local_b0 = 0xc2000000;
          local_ac = 0;
          local_a8 = FUN_002d9774;
          local_a0 = &DAT_0257a0f0;
          (*(code *)PTR__objc_retain_02578638)();
          lVar1 = local_38;
          local_98 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = local_28;
          local_90 = lVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = uVar4;
          local_80 = local_29 & 1;
          _dispatch_async(puVar3,&local_b8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_98,0);
          local_58 = 0;
          FUN_002d9114(local_60,0);
          if ((local_7a & 1) != 0) {
            _objc_exception_rethrow();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x2d8220);
            (*pcVar2)();
          }
          local_58 = 0;
        }
        else {
          FUN_002b7184(local_60,&cf_reveal_skip_reentrant);
          local_58 = 1;
        }
      }
      else {
        local_58 = 1;
      }
    }
    else {
      local_58 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_58 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

