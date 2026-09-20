// FUN_011204f0 @ 011204f0

void FUN_011204f0(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_30;
  double local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_2 + 0x28);
  local_20 = param_2;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_shouldSendYuanbaoAssistForUserna_026af0e8,*(undefined8 *)(param_2 + 0x20));
  if (((uVar1 & 1) != 0) &&
     ((_CFAbsoluteTimeGetCurrent(), DAT_028e3560 <= 0.0 || (45.0 <= param_1 - DAT_028e3560)))) {
    uVar1 = *(ulong *)(param_2 + 0x28);
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isYuanbaoFriend_026af098);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_0110d24c();
      _objc_retainAutoreleasedReturnValue();
      local_30 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (lVar3 != 0) {
        DAT_028e3560 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_30,
                   &cf_wxid_wi_1d142z0zdj03);
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

