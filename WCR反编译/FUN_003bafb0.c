// FUN_003bafb0 @ 003bafb0

void FUN_003bafb0(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar3 = local_20;
  local_28 = param_1;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  local_30 = lVar3;
  FUN_003bb180(uVar4,lVar3);
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_O9eYl1Y_);
  }
  else {
    FUN_003694c4(*(undefined8 *)(param_1 + 0x20));
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    FUN_003b7208(uVar7,uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    FUN_00368c14(*(undefined8 *)(param_1 + 0x28),&cf_homeLongPressRemark);
    puVar2 = PTR_WCRefineHelper_026ce000;
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = &cf__O9eYl;
    if (lVar3 == 0) {
      pcVar1 = &cf__nzzYl;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

