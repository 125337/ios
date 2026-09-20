// configurePKCLetsGo @ 01d81f54

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::configurePKCLetsGo(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  ID local_58;
  undefined *local_50 [3];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pkcLetsGoVC_026af568);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = puVar2;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    puVar4 = PTR_WCRefineHelper_026ce000;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar5 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__gMn__);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01d82220;
      local_68 = &DAT_02583a90;
      (*(code *)PTR__objc_retain_02578638)();
      IVar1 = local_28;
      local_60 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_eMn_,puVar3,&cf_Sm,0,
                 &cf_eS,&local_80,puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_60,0);
      goto LAB_01d821b4;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_showFloatingCaptureButton_prompt_026c4c08,&cf_pkcLetsGoVC,
             &cf_Let_sGo_PKC);
LAB_01d821b4:
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

