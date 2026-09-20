// FUN_00250500 @ 00250500

void FUN_00250500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_nextAutoGroupName_026a1068);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  FUN_00257bf8(&cf_e_R_,&cf_eQTyTR_Svc9eT,puVar1,0x14,local_18,
               PTR_s_WCRefine_handleCreateGroupFromHe_026a0ea8,1);
  _objc_storeStrong(&local_28,0);
  return;
}

