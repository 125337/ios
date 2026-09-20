// wcrEditPreset @ 017d135c

/* Function Stack Size: 0x10 bytes */

void WCRefineAISessionSettingsViewController::wcrEditPreset(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_98;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar3 = PTR_WCRefineHelper_026ce000;
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrOptions_026b5098);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_98 = &::cf___;
  }
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_017d1598;
  local_50 = &DAT_02589100;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar3,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_VYBl,
             &cf_vcc_gvl0y_TTVY_N_Yuzz_O_u_uR,&cf_eQ_INN_,local_98,&local_68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (local_30 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}

