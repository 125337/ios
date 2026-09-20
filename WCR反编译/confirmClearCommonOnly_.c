// confirmClearCommonOnly: @ 01fb5414

/* Function Stack Size: 0x18 bytes */

void WCRefineWeAppRecordCleaner::confirmClearCommonOnly_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = &cf_WAAppItemManager;
  FUN_01fb46ec();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_WADatabaseMgr;
  local_30 = pcVar2;
  FUN_01fb46ec();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  if ((local_30 == (cfstringStruct *)0x0) && (pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__z_U_gRNS_u);
  }
  else {
    pcVar2 = local_30;
    FUN_01fb55e0(local_30,pcVar3);
    FUN_01fb4ce0(local_30);
    FUN_01fb5248();
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fe8__u_z_Snzz);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__nzz);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

