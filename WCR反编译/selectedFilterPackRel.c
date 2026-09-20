// selectedFilterPackRel @ 01087db8

/* WARNING: Removing unreachable block (ram,0x01088020) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineLocalEmoticonStore::selectedFilterPackRel(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) ||
     (puVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf___all__),
     ((ulong)puVar1 & 1) != 0)) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fallbackFilterPackRel_026ae350);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = pcVar3;
  }
  else {
    puVar1 = local_30;
    FUN_01085b64();
    if (((ulong)puVar1 & 1) == 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_absolutePathFromRelative__026ae2c0,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_40 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fallbackFilterPackRel_026ae350);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_18 = pcVar3;
      _objc_storeStrong(&local_40,0);
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_showsUngroupedChip_026a3ae8);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_fallbackFilterPackRel_026ae350);
        _objc_retainAutoreleasedReturnValue();
        local_34 = 1;
        local_18 = pcVar3;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___ungrouped__;
        local_34 = 1;
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

