// FUN_017aafa0 @ 017aafa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_017aafa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_f8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  byte local_61;
  undefined *local_60;
  ulong local_48;
  byte local_39;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  local_39 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_SendVerifyMsgViewController);
  local_f8 = 0;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f8 = (uint)puVar1;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  if ((local_f8 & 1) == 0) {
    (*DAT_028e4138)(local_28,local_30,local_38,local_39 & 1);
  }
  else {
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_017b5d38;
    local_88 = &DAT_02588e70;
    local_78 = local_28;
    local_70 = local_30;
    uVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_39 & 1;
    local_c8 = puVar1;
    local_c0 = 0xc0000000;
    local_bc = 0;
    local_b8 = FUN_017b5e9c;
    local_b0 = &DAT_02588ea0;
    local_a8 = local_28;
    local_80 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_ic_y,&cf__O_u__Ne_OmR_YS,
               &cf_b_N,&local_a0,&cf_Sm,&local_c8);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

