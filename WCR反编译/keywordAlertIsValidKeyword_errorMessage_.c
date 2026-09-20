// keywordAlertIsValidKeyword:errorMessage: @ 00f9cec4

/* Function Stack Size: 0x20 bytes */

bool WCRefineHelper::keywordAlertIsValidKeyword_errorMessage_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_keywordAlertCanonicalKeyword_err_026acd98,local_28,param_4);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_28,0);
  return (uint)(IVar2 != 0);
}

