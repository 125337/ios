// setToken:on: @ 0184cbfc

/* Function Stack Size: 0x1c bytes */

void WCRefineAvatarScaleSceneFilterViewController::setToken_on_
               (ID param_1,SEL param_2,long_long param_3,bool param_4)

{
  ID IVar1;
  
  if ((-1 < (long)param_3) && ((long)param_3 < 6)) {
    if ((param_4 & 1) == 0) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tokens_026b29d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tokens_026b29d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_persist_026b68b8);
  }
  return;
}

