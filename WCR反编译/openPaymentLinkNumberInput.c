// openPaymentLinkNumberInput @ 01a38418

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openPaymentLinkNumberInput(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  ID local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_paymentLinkNumberSummary_026bc018);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isEqualToString__0269ccc8,&cf__gn_);
  if ((IVar1 & 1) != 0) {
    _objc_storeStrong(&local_30,&::cf___);
  }
  IVar1 = local_30;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01a385dc;
  local_50 = &DAT_0258ae80;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4058000000000000,puVar2,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf_6e>k_S,
             &cf_kX_e6e>kc_g>__SOY,IVar1,&local_68);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_28);
  return;
}

