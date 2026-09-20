// FUN_0015a3d4 @ 0015a3d4

void FUN_0015a3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar3;
  ulong uVar4;
  ulong local_f8;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined1 auStack_a0 [8];
  ulong local_98;
  ulong local_90;
  long local_88;
  undefined1 auStack_80 [8];
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  ulong *puVar2;
  
  puVar2 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0015ab30();
  lVar3 = local_28;
  if ((uVar1 & 1) == 0) {
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar3;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    uVar4 = local_38;
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_userData_0269f6e8);
    if ((uVar4 & 1) == 0) {
      local_f8 = 0;
    }
    else {
      local_f8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userData_0269f6e8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    local_78 = 0;
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_msgSvrID_0269f678);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_msgSvrID_0269f678);
      local_78 = uVar4;
    }
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((lVar3 == 0) || (local_78 == 0)) {
      local_48 = 1;
    }
    else {
      _objc_initWeak(auStack_80,local_28);
      lVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      local_90 = local_78;
      local_c8 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = 0xc2000000;
      local_bc = 0;
      local_b8 = FUN_00167758;
      local_b0 = &DAT_0257a6e0;
      local_88 = lVar3;
      _objc_copyWeak(auStack_a0,auStack_80);
      lVar3 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = lVar3;
      local_98 = local_90;
      FUN_001640e4(&cf_Smn_v,&cf_nxSmagmo_vn_v,&cf_nxSm,&local_c8);
      _objc_storeStrong(&local_a8);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_88,0);
      _objc_destroyWeak(auStack_80);
      local_48 = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

