// FUN_006b2660 @ 006b2660

void FUN_006b2660(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  FUN_006a7dbc();
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,
             PTR_s_shouldPlayMessageHapticForUserna_026a6828,local_18);
  if (((ulong)puVar1 & 1) != 0) {
    _CFAbsoluteTimeGetCurrent();
    uVar2 = DAT_028cc040;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc040,PTR_s_length_0269cca0);
    if (((uVar2 == 0) ||
        (uVar2 = DAT_028cc040,
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc040,PTR_s_isEqualToString__0269ccc8,local_18)
        , (uVar2 & 1) == 0)) || (1.2 <= param_1 - DAT_028cc048)) {
      uVar3 = local_18;
      DAT_028cc048 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
      uVar2 = DAT_028cc040;
      DAT_028cc040 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_playIncomingMessageHaptic_026a6830)
      ;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,
             PTR_s_sendYuanbaoAssistIfNeededForUser_026a6838,local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

