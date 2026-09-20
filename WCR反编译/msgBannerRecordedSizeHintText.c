// msgBannerRecordedSizeHintText @ 01b92ce8

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineMessageBannerBeautifyViewController::msgBannerRecordedSizeHintText
          (WCRefineMessageBannerBeautifyViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  double in_d0;
  double dVar3;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_doubleForKey__026a7e60,&cf_WCRefine_msgBanner_lastW);
  dVar3 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_doubleForKey__026a7e60,&cf_WCRefine_msgBanner_lastH);
  if ((in_d0 <= 1.0) || (dVar3 <= 1.0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___gU__jE____HQ6e0R;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__g_g);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

