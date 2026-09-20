// FUN_0156bfac @ 0156bfac

byte FUN_0156bfac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar2 = local_20;
      FUN_01533eb8(local_20,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    local_30 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_nameplateSpecialUserEnabled_026ae830);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setNameplateSpecialUserEnabled__026ae838,1);
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateEnabled_026ae7f8);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNameplateEnabled__026ae840,1);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      puVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nameplateSpecialUserList_026ae848);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_78 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_orderedSetWithArray__026a4b80,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_30);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_30);
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setNameplateSpecialUserList__026ae850);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _CFNotificationCenterGetDarwinNotifyCenter();
      _CFNotificationCenterPostNotification();
      puVar3 = PTR_WCRefineNameplateSpecialUserDetailViewController_026cecd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = puVar3 != (undefined *)0x0;
      local_48 = puVar3;
      if ((bool)local_11) {
        FUN_01556938(puVar3);
      }
      local_24 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

