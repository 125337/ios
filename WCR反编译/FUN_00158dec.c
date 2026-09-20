// FUN_00158dec @ 00158dec

void FUN_00158dec(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  ulong local_f0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined1 auStack_88 [8];
  byte local_80;
  byte local_7a;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined1 auStack_60 [8];
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 *puVar3;
  
  puVar3 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_0015ab30();
  uVar4 = local_28;
  if ((uVar2 & 1) == 0) {
    (*DAT_028c8818)(local_28,local_30,local_38);
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar4;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
    if (uVar4 == 0) {
      (*DAT_028c8818)(local_28,local_30,local_38);
      local_48 = 1;
    }
    else {
      _objc_initWeak(auStack_60,local_28);
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      local_79 = 0;
      uVar5 = local_50;
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getGroupContact_0269f648);
      if ((uVar5 & 1) == 0) {
        local_f0 = 0;
      }
      else {
        local_f0 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getGroupContact_0269f648);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_f0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_f0;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      uVar4 = local_70;
      FUN_00160d4c();
      local_7a = (byte)uVar4;
      pcVar1 = &cf__Sm_g_g_g0Wn_vhQXTn_vagSm;
      if ((uVar4 & 1) == 0) {
        pcVar1 = &cf_nxSm_gOhQn_v_T_g_g_en_v;
      }
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_0016523c;
      local_98 = &DAT_0257a1e8;
      _objc_copyWeak(auStack_88,auStack_60);
      uVar4 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = uVar4;
      local_80 = local_7a & 1;
      FUN_001640e4(&cf_hQSmn_v,pcVar1,&cf_hQSm,&local_b0);
      _objc_storeStrong(&local_90);
      _objc_destroyWeak(auStack_88);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_destroyWeak(auStack_60);
      local_48 = 0;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

