// FUN_00159ff0 @ 00159ff0

void FUN_00159ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar3;
  ulong uVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined1 auStack_88 [8];
  ulong local_80;
  ulong local_78;
  long local_70;
  undefined1 auStack_68 [8];
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
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_48 = 1;
    }
    else {
      local_60 = 0;
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_n64MesSvrID_0269d3e0);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_n64MesSvrID_0269d3e0);
        local_60 = uVar4;
      }
      if (local_60 == 0) {
        local_48 = 1;
      }
      else {
        _objc_initWeak(auStack_68,local_28);
        lVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
        local_78 = local_60;
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_00166e6c;
        local_98 = &DAT_0257a6e0;
        local_70 = lVar3;
        _objc_copyWeak(auStack_88,auStack_68);
        lVar3 = local_70;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = lVar3;
        local_80 = local_78;
        FUN_001640e4(&cf_Smn_v,&cf_nxSmagmo_vn_v,&cf_nxSm,&local_b0);
        _objc_storeStrong(&local_90);
        _objc_destroyWeak(auStack_88);
        _objc_storeStrong(&local_70,0);
        _objc_destroyWeak(auStack_68);
        local_48 = 0;
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

