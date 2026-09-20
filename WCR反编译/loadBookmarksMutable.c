// loadBookmarksMutable @ 015b3df4

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackStore::loadBookmarksMutable(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_b0;
  undefined *local_a8;
  uint local_a0;
  SEL local_90;
  ID local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = param_2;
  local_88 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  bVar1 = DAT_028e3b20 != (undefined *)0x0;
  if (bVar1) {
    puVar2 = DAT_028e3b20;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3b20,PTR_s_mutableCopy_0269d8a0);
    local_80 = puVar2;
  }
  local_a0 = (uint)bVar1;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  if (local_a0 == 0) {
    IVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_bookmarksFilePath_026b0c90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_a8;
    local_b0 = (undefined *)0x0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar2 & 1) == 0) {
      local_68 = &cf_recents;
      local_48 = *(undefined8 *)PTR____NSArray0___02578280;
      local_60 = &cf_favorites;
      local_40 = *(undefined8 *)PTR____NSArray0___02578280;
      local_58 = &cf_pinned;
      local_70 = &cf_J_Y_eQ;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_pinnedSeeded;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar2 = local_b0;
      local_b0 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar4 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_mutableCopy_0269d8a0);
      puVar2 = local_b0;
      local_b0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_recents);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar7 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,
                   *(undefined8 *)PTR____NSArray0___02578280,&cf_recents);
      }
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_favorites);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar7 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,
                   *(undefined8 *)PTR____NSArray0___02578280,&cf_favorites);
      }
      puVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar7 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar7 & 1) == 0) {
        puVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinnedSeeded);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar4 & 1) == 0) {
          local_78 = &cf_J_Y_eQ;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_78,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_pinned);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_pinnedSeeded);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_setObject_forKeyedSubscript__0269d248,
                     *(undefined8 *)PTR____NSArray0___02578280,&cf_pinned);
        }
      }
    }
    IVar3 = local_88;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar3);
    puVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mutableCopy_0269d8a0);
    puVar2 = DAT_028e3b20;
    DAT_028e3b20 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_sync_exit(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar2;
    local_a0 = 1;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_80;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

