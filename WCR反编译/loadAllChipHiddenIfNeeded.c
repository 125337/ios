// loadAllChipHiddenIfNeeded @ 0107f204

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonStore::loadAllChipHiddenIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  if ((DAT_028e3290 & 1) == 0) {
    DAT_028e3290 = 1;
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_indexPath_026ae250);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_allChipHidden);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    DAT_028e3291 = SUB81(puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_ungroupedChipHidden);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    DAT_028e3292 = SUB81(puVar2,0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

