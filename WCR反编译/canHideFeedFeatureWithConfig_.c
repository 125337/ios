// canHideFeedFeatureWithConfig: @ 01c8d4bc

/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRefinePluginFeatureManagementViewController::canHideFeedFeatureWithConfig_
          (WCRefinePluginFeatureManagementViewController *this,ID param_1,SEL param_2,ID param_3)

{
  double in_d0;
  double dVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sponsorTotalAmountMasked_026a7e58);
  dVar1 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_sponsorUserQualificationYuan_026ad048);
  _objc_storeStrong(&local_28,0);
  return (uint)(dVar1 <= in_d0);
}

