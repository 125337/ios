// exportSelectedTheme @ 01fc5a00

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::exportSelectedTheme(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb_N);
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____zip);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_48 = 0;
    puVar1 = PTR_WCRefineWechatThemeStore_026ce6d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_48,uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_presentFileShareOptionsAtPat_026b65a8,
                 local_40,local_38,local_18,local_40);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

