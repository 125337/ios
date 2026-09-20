// messageWrapFromCell: @ 00f31d0c

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::messageWrapFromCell_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_58 [3];
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_viewModel);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_valueForKey__0269d128,&cf_messageWrap);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = IVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = IVar1;
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

