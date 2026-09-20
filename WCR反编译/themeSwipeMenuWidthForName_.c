// themeSwipeMenuWidthForName: @ 01fbf230

/* Function Stack Size: 0x18 bytes */

double WCRefineWechatThemeManagerViewController::themeSwipeMenuWidthForName_
                 (ID param_1,SEL param_2,ID param_3)

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
            (local_18,PTR_s_themeSwipeActionSpecsForName__026ca078,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_28,0);
  return (double)IVar2 * 72.0;
}

