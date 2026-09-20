// FUN_0023d6e4 @ 0023d6e4

void FUN_0023d6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_100;
  undefined *local_68 [4];
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = local_38;
  local_40 = param_4;
  FUN_0023fa84();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_0023fa84();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_68[0] = (undefined *)0x0;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_msgWrap);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_68[0];
    local_68[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineDoNotDisturbSupport_026ce118,
               PTR_s_sessionUserNameFromWrap_sessionH_026a0cc0,local_68[0],0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(local_68,0);
  }
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_100 = (undefined *)0x0;
  }
  else {
    local_100 = local_48;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_shouldMuteNotificationsForSessio_026a0cc8,local_100);
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028c92b8)(local_28,local_30,local_38,local_40);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

