// hideIncomingCallUIFromHintView:username: @ 00f2612c

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineDoNotDisturbSupport::hideIncomingCallUIFromHintView_username_
          (WCRefineDoNotDisturbSupport *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double in_d0;
  ulong local_98;
  undefined *local_90;
  bool local_61;
  ulong local_60;
  undefined *local_50;
  undefined *local_48;
  double local_40;
  ulong local_38;
  ulong local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_30;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_38;
  local_40 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar2 != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    uVar2 = DAT_028e2c78;
    DAT_028e2c78 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    DAT_028e2ca8 = local_40;
  }
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_90 = &DAT_028e2c80;
    _objc_loadWeakRetained();
    local_50 = local_90;
  }
  else {
    local_90 = local_28;
  }
  FUN_00f26448();
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_90;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  FUN_00f26a48(local_48);
  FUN_00f26c00(local_28);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (((uVar2 == 0) ||
      (uVar2 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,DAT_028e2ca0),
      (uVar2 & 1) == 0)) || (2.0 <= local_40 - DAT_028e2cb0)) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_98 = 0;
    }
    else {
      local_98 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      local_60 = local_98;
    }
    local_61 = uVar2 != 0;
    _objc_storeStrong(&DAT_028e2ca0,local_98);
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    DAT_028e2cb0 = local_40;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

