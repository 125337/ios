// FUN_017b790c @ 017b790c

void FUN_017b790c(long param_1)

{
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc0000000;
  local_44 = 0;
  local_40 = FUN_017b7a30;
  local_38 = &DAT_02588f40;
  local_30 = *(undefined8 *)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf__nc_y,
             &cf_nxVbeg5uT,&cf_KbnN,&PTR___NSConcreteGlobalBlock_02588f20,&cf_nx_,&local_50);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}

