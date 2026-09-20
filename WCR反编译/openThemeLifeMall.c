// openThemeLifeMall @ 0175da38

/* Function Stack Size: 0x10 bytes */

void ThemeExchangeViewController::openThemeLifeMall(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  _WCRThemeLifeMallWebURL();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_openThemeRecommendURLString_titl_026b4310,IVar1,&cf_L);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

