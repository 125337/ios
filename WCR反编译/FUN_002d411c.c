// FUN_002d411c @ 002d411c

void FUN_002d411c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_94;
  uint local_68;
  ulong local_58;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_49 = 0;
  local_68 = 1;
  if (local_28 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = (uint)puVar1 ^ 1;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_68 & 1) == 0) {
    uVar2 = local_28;
    FUN_002b7bc4();
    _objc_retainAutoreleasedReturnValue();
    local_94 = 1;
    local_58 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_94 = (uint)uVar3 ^ 1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if ((local_94 & 1) == 0) {
      uVar2 = local_58;
      FUN_002d47d8();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_58;
        FUN_002d4db4();
        if ((uVar2 & 1) == 0) {
          uVar2 = local_58;
          _objc_getAssociatedObject(local_58,&DAT_028c9807);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar3 & 1) != 0) {
            _objc_setAssociatedObject(local_58,&DAT_028c9807,0,1);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_58,PTR_s_setAlpha__026ca860);
            FUN_002b7768(local_58,0,&cf_prime_clearLegacyMiniTaskHidden);
          }
          FUN_002d4e8c(local_58,local_30);
          uVar2 = local_58;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_prime___);
          _objc_retainAutoreleasedReturnValue();
          FUN_002b7184(uVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar2 = local_58;
          FUN_002b83f8();
          if (((uVar2 & 1) == 0) || (uVar2 = local_58, FUN_002c73bc(), (uVar2 & 1) == 0)) {
            uVar2 = local_58;
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_prime___);
            _objc_retainAutoreleasedReturnValue();
            FUN_002c007c(uVar2);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            FUN_002bb194(local_58,local_28,0);
            uVar2 = local_58;
            uVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndex_0269e580);
            FUN_002a1a50(uVar2,uVar3,0);
            local_50 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(0,local_58,PTR_s_setAlpha__026ca860);
            local_50 = 1;
          }
        }
        else {
          FUN_002b7184(local_58,&cf_prime_skip_revealGuard);
          local_50 = 1;
        }
      }
      else {
        local_50 = 1;
      }
    }
    else {
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_50 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

