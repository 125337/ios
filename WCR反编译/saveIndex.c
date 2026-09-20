// saveIndex @ 0107f388

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonStore::saveIndex(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ID local_80;
  ID local_70;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pinnedMutable_026ae270);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_packOrderMutable_026ae278);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_itemOrderMutable_026ae258);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_remarksMutable_026ae280);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadUngroupedNameIfNeeded_026ae288);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadAllChipHiddenIfNeeded_026ae290);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pinnedMutable_026ae270);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar2;
  if (IVar2 == 0) {
    local_70 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,&cf_pinned);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_packOrderMutable_026ae278);
  _objc_retainAutoreleasedReturnValue();
  local_80 = IVar2;
  if (IVar2 == 0) {
    local_80 = *(ID *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,&cf_packOrder);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  lVar3 = DAT_028e3268;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3268,PTR_s_count_0269cfe0);
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = DAT_028e3268;
    local_58 = PTR___NSConcreteGlobalBlock_02578658;
    local_50 = 0xd0800000;
    local_4c = 0;
    local_48 = FUN_0107f93c;
    local_40 = &DAT_02584e30;
    local_30 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_58);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (puVar1 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,&cf_itemOrder);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  lVar3 = DAT_028e3270;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3270,PTR_s_count_0269cfe0);
  if (lVar3 != 0) {
    lVar3 = DAT_028e3270;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3270,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,lVar3,&cf_remarks);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  lVar3 = DAT_028e3280;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3280,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_028e3280,&cf_ungroupedName);
  }
  lVar3 = DAT_028e3288;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3288,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_028e3288,&cf_allName);
  }
  if ((DAT_028e3291 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_allChipHidden);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((DAT_028e3292 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_ungroupedChipHidden);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_indexPath_026ae250);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_writeToFile_atomically__0269f928,IVar2,1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

