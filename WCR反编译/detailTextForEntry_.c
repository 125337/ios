// detailTextForEntry: @ 0198a138

/* Function Stack Size: 0x18 bytes */

ID WCRefineFileManagerViewController::detailTextForEntry_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  uint local_14c;
  cfstringStruct *local_a8;
  ID local_78;
  cfstringStruct *local_70;
  undefined4 local_64;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_41 = (byte)pcVar3;
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  local_58 = (cfstringStruct *)0x0;
  IVar4 = local_30;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSearching_026ba468);
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((IVar4 & 1) == 0) {
    if ((local_41 & 1) == 0) {
      pcVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_0198a97c();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_date);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar7;
      FUN_0198ab0c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_58 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sizeKnown);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_date);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar3;
        FUN_0198ab0c();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      else {
        pcVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_0198a97c();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_date);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar7;
        FUN_0198ab0c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_58;
        local_58 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
    }
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_rel);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_a8 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_58,&cf_S_MRvU_);
    }
    _objc_storeStrong(&local_60,0);
  }
  IVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_protectionMode_026ba310);
  if ((IVar4 & 1) == 0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_protected);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_30;
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSearching_026ba468);
      bVar1 = false;
      local_14c = 0;
      if ((IVar4 & 1) == 0) {
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        local_14c = 0;
        if (pcVar2 != (cfstringStruct *)0x0) {
          local_78 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_favoritePathSet_026ba4a8);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          IVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_14c = (uint)IVar4;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      pcVar2 = local_58;
      if ((local_14c & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar2;
      }
      else {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
      }
      local_64 = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_64 = 1;
      local_28 = pcVar2;
    }
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_protected);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = &cf__Ob;
    if (((ulong)pcVar3 & 1) == 0) {
      local_28 = &cf__gOb;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_64 = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

