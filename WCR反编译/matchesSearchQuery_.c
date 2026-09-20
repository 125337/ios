// matchesSearchQuery: @ 01079a44

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonItem::matchesSearchQuery_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  uint local_88;
  uint local_74;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayName_026ac378);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_74 = 0;
    if (IVar4 != 0) {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = (uint)IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((local_74 & 1) == 0) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_remark_026ae1d8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = 0;
      if (IVar4 != 0) {
        IVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_remark_026ae1d8);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = (uint)IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((local_88 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

