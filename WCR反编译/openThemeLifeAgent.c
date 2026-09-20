// openThemeLifeAgent @ 0175daa4

/* Function Stack Size: 0x10 bytes */

void ThemeExchangeViewController::openThemeLifeAgent(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  _WCRThemeLifeAgentWebURL();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_openThemeRecommendURLString_titl_026b4310,IVar1,&cf_eQ_L);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

