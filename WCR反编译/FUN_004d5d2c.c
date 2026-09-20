// FUN_004d5d2c @ 004d5d2c

void FUN_004d5d2c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40 [3];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar4 = local_18;
  FUN_004dc654();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
  }
  else {
    FUN_004d7600();
    uVar3 = local_40[0];
    if ((uVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W8__uR);
    }
    else {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
      FUN_004dc14c(&cf_group,uVar3,uVar4 & 0xffffffff);
      puVar2 = PTR_WCRefineHelper_026ce000;
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
      pcVar1 = &cf___T_umo_O__;
      if ((uVar4 & 1) == 0) {
        pcVar1 = &cf__sQmo_O__;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar1);
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

