// FUN_00237b30 @ 00237b30

void FUN_00237b30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined1 auStack_98 [8];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  cfstringStruct *local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar3 = local_30;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_48 = 1;
  }
  else {
    uVar3 = local_38;
    FUN_0022d684();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      FUN_0022a7fc(local_38,0);
      FUN_0023802c(local_28,local_38);
      local_48 = 0;
    }
    else {
      uVar4 = local_38;
      FUN_0022b864(uVar3);
      local_58 = &cf_hKm0RvU_Q_g_v_IN4YP_f_TY_u;
      if ((uVar4 & 1) == 0) {
        local_58 = &cf_hKm0RvU_Q_gT_Nv_IN4YP_f_TY_u;
      }
      (*(code *)PTR__objc_retain_02578638)();
      _objc_initWeak(auStack_60,local_28);
      pcVar2 = local_58;
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar1 = PTR___NSConcreteStackBlock_02578660;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_00237f3c;
      local_78 = &DAT_0257af98;
      _objc_copyWeak(auStack_68,auStack_60);
      uVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = uVar3;
      local_c0 = puVar1;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_002383d4;
      local_a8 = &DAT_0257af98;
      _objc_copyWeak(auStack_98,auStack_60);
      uVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf__IN4YP,pcVar2,
                 &cf_format_s_,&local_90,&cf_Y_u,&local_c0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar5);
      local_48 = 1;
      _objc_storeStrong(&local_a0);
      _objc_destroyWeak(auStack_98);
      _objc_storeStrong(&local_70,0);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

