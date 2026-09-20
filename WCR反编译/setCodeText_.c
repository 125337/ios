// setCodeText: @ 01768978

/* Function Stack Size: 0x18 bytes */

void ThemeProRedeemViewController::setCodeText_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_codeField_026b3630);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_redeemButtonTapped_026b32e0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

