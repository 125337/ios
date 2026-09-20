// presentAddPlainTextItem @ 01bae3f0

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryViewController::presentAddPlainTextItem(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01bae56c;
  local_40 = &DAT_02589100;
  _objc_copyWeak(auStack_38,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar1,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_teke_geQ_,&cf_tek_O_NN_,
             &cf__4beQ_e_g_,&::cf___,&local_58);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}

