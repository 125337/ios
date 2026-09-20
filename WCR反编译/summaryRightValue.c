// summaryRightValue @ 00f7f974

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationStore::summaryRightValue(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  ID local_50;
  ID local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snapshot_026a25c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_status);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_00f7e630();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_queueFromSnapshot__026aca68,local_40);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40;
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_cursor)
  ;
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_countWithVerdict__026aca98,&cf_suspected);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_countWithVerdict__026aca98,&cf_uncertain);
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_running);
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((IVar3 & 1) == 0) {
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_paused);
    if (((IVar3 & 1) == 0) ||
       (IVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
       pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8, IVar3 == 0)) {
      if ((IVar1 + IVar2 == 0) &&
         (IVar1 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_48,PTR_s_isEqualToString__0269ccc8,&cf_completed), (IVar1 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf__g;
      }
      else {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_u<O);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar4;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&cf__f_P);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_hKm_N);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar4;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

