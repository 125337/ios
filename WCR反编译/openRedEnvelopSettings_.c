// openRedEnvelopSettings: @ 01a197c0

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::openRedEnvelopSettings_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = 0;
  FUN_01138c30(&cf_auto_red_envelop,0);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar3 = PTR_WCRefineRedEnvelopViewController_026cf268;
    _objc_alloc_init();
    IVar4 = local_18;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_c_y,
               &cf_Rb_SRfNS_u,&cf__Y,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

