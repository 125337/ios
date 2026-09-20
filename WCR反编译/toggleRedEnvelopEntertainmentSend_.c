// toggleRedEnvelopEntertainmentSend: @ 01a19aac

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::toggleRedEnvelopEntertainmentSend_
               (ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  iVar1 = 0x25e39e0;
  FUN_01a19cf0(&cf_entertainment_red_envelop,1,0x5c70d3a9,local_28);
  if (iVar1 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      _objc_initWeak(auStack_38,local_18);
      puVar3 = PTR_WCRefineHelper_026ce000;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01a1a1d0;
      local_48 = &DAT_025810b0;
      _objc_copyWeak(auStack_40,auStack_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_c_y,&cf_NA,&cf_bwSN,
                 &local_60);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
      local_2c = 0;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

