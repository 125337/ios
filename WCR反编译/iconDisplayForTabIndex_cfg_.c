// iconDisplayForTabIndex:cfg: @ 019b73b8

/* Function Stack Size: 0x20 bytes */

ID WCRefineFloatingTabBarButtonActionViewController::iconDisplayForTabIndex_cfg_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  undefined8 local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_storedIconForTabIndex_cfg__026ba978,local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf__;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__n_;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

