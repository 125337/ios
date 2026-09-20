// setAllChipHidden: @ 01087478

/* Function Stack Size: 0x14 bytes */

bool WCRefineLocalEmoticonStore::setAllChipHidden_(ID param_1,SEL param_2,bool param_3)

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
  if ((((local_29 & 1) == 0) ||
      (IVar1 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasUngroupedItems_026a3ae0),
      (IVar1 & 1) == 0)) ||
     (IVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ungroupedChipHidden_026a3df0),
     (IVar1 & 1) == 0)) {
    if ((DAT_028e3291 & 1) == (local_29 & 1)) {
      local_11 = 1;
    }
    else {
      DAT_028e3291 = local_29 & 1;
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
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        if ((puVar2 == (undefined *)0x0) ||
           (puVar2 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_isEqualToString__0269ccc8,&cf___all__),
           ((ulong)puVar2 & 1) != 0)) {
          IVar1 = local_20;
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
  }
  else {
    local_11 = 0;
  }
  return (uint)local_11;
}

