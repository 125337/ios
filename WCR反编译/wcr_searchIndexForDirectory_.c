// wcr_searchIndexForDirectory: @ 015b7450

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::wcr_searchIndexForDirectory_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ID IVar6;
  ulong uVar7;
  ID local_b0;
  ID local_58 [3];
  ulong local_40;
  uint local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  uVar3 = DAT_028e3ad8;
  if (lVar2 == 0) {
    uVar3 = *(ulong *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = uVar3;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar3);
    uVar4 = DAT_028e3ad8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3ad8,PTR_s_objectForKeyedSubscript__0269d098,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    uVar7 = local_40;
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar7;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      local_34 = 0;
    }
    _objc_sync_exit(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_34 == 0) {
      IVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcr_buildSearchIndexForDirectory_026b0d08,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = DAT_028e3ad8;
      local_58[0] = IVar6;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(uVar3);
      if (local_58[0] == 0) {
        local_b0 = *(ID *)PTR____NSArray0___02578280;
      }
      else {
        local_b0 = local_58[0];
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3ad8,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,local_30);
      uVar7 = DAT_028e3ad8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3ad8,PTR_s_objectForKeyedSubscript__0269d098,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = uVar7;
      _objc_sync_exit(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(local_58,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

