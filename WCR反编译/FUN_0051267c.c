// FUN_0051267c @ 0051267c

void FUN_0051267c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined **local_68;
  undefined *local_60 [3];
  ulong local_48;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_30;
  FUN_00513cfc();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_stringWithFormat__0269cca8,&cf___S_MR_R_N__W_beVQv);
  _objc_retainAutoreleasedReturnValue();
  local_60[0] = puVar4;
  if ((local_30 == 3) &&
     (lVar5 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar5 != 0)) {
    puVar6 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_stringByAppendingFormat__026a2088,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_60[0];
    local_60[0] = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  if (local_30 == 8) {
    puVar6 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_stringByAppendingString__0269d398,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_60[0];
    local_60[0] = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else if (local_30 == 5) {
    puVar6 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_stringByAppendingString__0269d398,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_60[0];
    local_60[0] = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else if (local_30 - 6 == 0) {
    puVar6 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_stringByAppendingString__0269d398,&cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_60[0];
    local_60[0] = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    uVar3 = local_30;
    FUN_00513ee4(local_30 - 6);
    if ((uVar3 & 1) != 0) {
      puVar6 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_stringByAppendingString__0269d398,&cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_60[0];
      local_60[0] = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  uVar2 = local_28;
  ppuVar7 = &local_a8;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_00513f28;
  local_90 = &DAT_0257d958;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_88 = uVar2;
  local_70 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  lVar5 = local_40;
  local_80 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = lVar5;
  _objc_retainBlock();
  uVar3 = local_30;
  local_68 = ppuVar7;
  FUN_00514b54();
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,local_48,
               local_60[0],&cf_Sm,0,&cf___,local_68);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  }
  else {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_destr_0269f868,local_48,
               local_60[0],&cf_nx_gbL,local_68,&cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

