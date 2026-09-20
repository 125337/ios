// presentAccessGuideFrom: @ 01606e90

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatMgr::presentAccessGuideFrom_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_accessGuideSampleText_026aa780);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01606fd4;
  local_40 = &DAT_0257a770;
  local_30[0] = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_ceQe_,IVar2,&cf_Y6RNx,
             &local_58,&cf_bwSN,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

