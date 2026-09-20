// preferredStatusBarStyle @ 01762590

/* Function Stack Size: 0x10 bytes */

long_long ThemeProRedeemViewController::preferredStatusBarStyle(ID param_1,SEL param_2)

{
  ID IVar1;
  ulong local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_18 = (ulong)(IVar1 == 2);
  return local_18;
}

