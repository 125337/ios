// newRemarkForCandidate:index: @ 018645dc

/* Function Stack Size: 0x20 bytes */

ID WCRefineBatchRemarkViewController::newRemarkForCandidate_index_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_180;
  uint local_15c;
  cfstringStruct *local_148;
  uint local_11c;
  cfstringStruct *local_108;
  cfstringStruct *local_d8;
  cfstringStruct *local_48;
  unsigned_long_long local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf___;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_templateText_026b6ad8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentRemark_026b6a58);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nickName_026af388);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (pcVar3 == (cfstringStruct *)0x0) {
          pcVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userName_0269f7b8);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_d8 = &::cf___;
          }
          _objc_storeStrong(&local_48,local_d8);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        else {
          pcVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_displayName_026ac378);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_48;
          local_48 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
      }
      else {
        pcVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nickName_026af388);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    else {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentRemark_026b6a58);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  else {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_templateText_026b6ad8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_expandedTemplate_candidate_index_026b6b50,pcVar4,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_findText_026b6ab8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_48;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_findText_026b6ab8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_replaceText_026b6ac8);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_108 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,pcVar3,local_108);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_prefixText_026b6a98);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avoidDuplicateAffixes_026b6ae8);
    pcVar2 = local_48;
    local_11c = 1;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_prefixText_026b6a98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasPrefix__0269d320);
      local_11c = (uint)pcVar2 ^ 1;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if ((local_11c & 1) != 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_prefixText_026b6a98);
      _objc_retainAutoreleasedReturnValue();
      if (local_48 == (cfstringStruct *)0x0) {
        local_148 = &::cf___;
      }
      else {
        local_148 = local_48;
      }
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByAppendingString__0269d398,local_148);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_suffixText_026b6aa8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avoidDuplicateAffixes_026b6ae8);
    pcVar2 = local_48;
    local_15c = 1;
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_suffixText_026b6aa8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasSuffix__0269d018);
      local_15c = (uint)pcVar2 ^ 1;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if ((local_15c & 1) != 0) {
      if (local_48 == (cfstringStruct *)0x0) {
        local_180 = &::cf___;
      }
      else {
        local_180 = local_48;
      }
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_suffixText_026b6aa8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = local_180;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  pcVar2 = local_48;
  FUN_01860804();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return (ID)pcVar2;
}

