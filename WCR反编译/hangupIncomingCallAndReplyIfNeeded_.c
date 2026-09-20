// hangupIncomingCallAndReplyIfNeeded: @ 00f28154

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineDoNotDisturbSupport::hangupIncomingCallAndReplyIfNeeded_
          (WCRefineDoNotDisturbSupport *this,ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  double in_d0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  bool local_69;
  ulong local_68;
  bool local_59;
  ulong local_58;
  bool local_49;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((((uVar1 == 0) ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,DAT_028e2c90),
       (uVar1 & 1) == 0)) || (3.0 <= in_d0 - DAT_028e2cc0)) &&
     (((uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar1 == 0 ||
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,DAT_028e2c88),
       (uVar1 & 1) == 0)) || (2.0 <= in_d0 - DAT_028e2cd0)))) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      local_48 = local_88;
    }
    local_49 = uVar1 != 0;
    _objc_storeStrong(&DAT_028e2c88,local_88);
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    uVar1 = local_30;
    DAT_028e2cd0 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_90 = 0;
    }
    else {
      local_90 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      local_58 = local_90;
    }
    local_59 = uVar1 != 0;
    _objc_storeStrong(&DAT_028e2c98,local_90);
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    DAT_028e2cb8 = 0;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hangupCurrentIncomingCall_026abea0);
    if ((IVar3 & 1) != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        local_98 = 0;
      }
      else {
        local_98 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
        local_68 = local_98;
      }
      local_69 = uVar1 != 0;
      _objc_storeStrong(&DAT_028e2c90,local_98);
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      DAT_028e2cc0 = in_d0;
      _objc_storeStrong(&DAT_028e2c88,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

