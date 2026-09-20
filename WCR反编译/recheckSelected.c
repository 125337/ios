// recheckSelected @ 01a00ea4

/* Function Stack Size: 0x10 bytes */

void WCRefineFriendRelationResultListViewController::recheckSelected(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedUserNamesOrNil_026bb5d8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbYhvN);
  }
  else {
    puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR_WCRefineFriendRelationChecker_026ceb00;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = PTR_WCRefineHelper_026ce000;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&::cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQf_PS_MRhKm);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

