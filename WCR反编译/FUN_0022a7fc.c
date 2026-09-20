// FUN_0022a7fc @ 0022a7fc

void FUN_0022a7fc(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_100;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined4 local_48;
  ulong local_38;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  local_29 = param_2;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_48 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_48 = 1;
    }
    else {
      uVar1 = local_38;
      FUN_0022b864();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_51 = (byte)uVar1;
      local_69 = 0;
      local_79 = 0;
      if ((uVar1 & 1) == 0) {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_customAvatarContactEnabledIDs_026a09d8)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_100 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_100 = *(undefined **)PTR____NSArray0___02578280;
        }
        local_e8 = local_100;
        local_78 = puVar3;
      }
      else {
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_e0 = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_e0 = *(undefined **)PTR____NSArray0___02578280;
        }
        local_e8 = local_e0;
        local_68 = puVar3;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if ((local_29 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObject__0269d678,local_38);
      }
      else {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsObject__0269cbb8,local_38);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_38);
        }
      }
      if ((local_51 & 1) == 0) {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setCustomAvatarContactEnabledIDs_026a09e8,puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setCustomAvatarGroupEnabledIDs__026a09e0,puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if ((local_29 & 1) == 0) {
        FUN_0022cbf4(local_38);
        FUN_0022d4c4(local_38);
        FUN_0022ca2c(local_38);
      }
      else {
        uVar1 = local_38;
        FUN_0022bbc4();
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar1;
        if (uVar1 != 0) {
          FUN_0022c128(local_38,uVar1);
        }
        FUN_0022ca2c(local_38);
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_60,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

