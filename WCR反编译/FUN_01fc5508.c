// FUN_01fc5508 @ 01fc5508

void FUN_01fc5508(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined *local_70;
  int local_64;
  long local_60;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar2 = *(long *)(param_1 + 0x20);
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_textFields_026ac830);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  lVar3 = local_40;
  local_49 = 0;
  bVar1 = true;
  if (lVar4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf____);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    puVar7 = PTR_s_rangeOfCharacterFromSet__0269db68;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar3 != 0x7fffffffffffffff;
    local_60 = lVar3;
    local_58 = puVar7;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__NTy_NzzbS_TeHeW___);
    local_64 = 1;
  }
  else {
    puVar5 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (((ulong)puVar7 & 1) == 0) {
      local_78 = 0;
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = local_78;
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_78,uVar9);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = PTR_WCRefineHelper_026ce000;
      if (((ulong)puVar7 & 1) == 0) {
        uVar9 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_localizedDescription_0269ced0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(uVar9);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_applyThemeNamed_showToast__026ca038,
                   local_40,1);
      }
      _objc_storeStrong(&local_78,0);
      local_64 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_TT_N_X__W);
      local_64 = 1;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_40,0);
  if (local_64 == 0) {
    local_64 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

