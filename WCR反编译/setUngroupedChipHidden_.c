// setUngroupedChipHidden: @ 010876b8

/* Function Stack Size: 0x14 bytes */

bool WCRefineLocalEmoticonStore::setUngroupedChipHidden_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_38;
  byte local_29;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_29 = (byte)param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadAllChipHiddenIfNeeded_026ae290);
  if ((local_29 & 1) != 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasUngroupedItems_026a3ae0);
    if ((IVar1 & 1) != 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allChipHidden_026a3de8);
      if ((IVar1 & 1) != 0) {
        local_11 = 0;
        goto LAB_010878ec;
      }
    }
  }
  if ((local_29 & 1) == 0) {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasUngroupedItems_026a3ae0);
    if ((IVar1 & 1) == 0) {
      local_11 = 1;
      goto LAB_010878ec;
    }
  }
  if ((DAT_028e3292 & 1) == (local_29 & 1)) {
    local_11 = 1;
  }
  else {
    DAT_028e3292 = local_29 & 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveIndex_026ae268);
    if ((local_29 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_38;
      FUN_01085b64();
      IVar1 = local_20;
      if (((ulong)puVar2 & 1) != 0) {
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fallbackFilterPackRel_026ae350);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setSelectedFilterPackRel__026a3ac0);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      _objc_storeStrong(&local_38,0);
    }
    FUN_0107ad08();
    local_11 = 1;
  }
LAB_010878ec:
  return (uint)local_11;
}

