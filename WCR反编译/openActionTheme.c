// openActionTheme @ 01fc21c0

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::openActionTheme(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionThemeName_026ca130);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_openThemeNamed__026ca050);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

