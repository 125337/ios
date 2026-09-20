// FUN_0010bee0 @ 0010bee0

byte FUN_0010bee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong local_120;
  byte local_d0;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  ulong *puVar3;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  puVar3 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar3,param_4);
  uVar2 = (uint)puVar3;
  local_49 = param_5;
  FUN_001257f8();
  if ((uVar2 & 1) == 0) {
    uVar4 = local_40;
    FUN_0010dca0(local_40,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_40;
    local_68 = uVar4;
    FUN_0010dca0(local_40,&cf_m_nsChatRoomMemList);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_68;
    local_70 = uVar5;
    FUN_0010dc1c();
    if ((uVar4 & 1) != 0) {
      uVar4 = local_70;
      FUN_00119ab8();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
      if (uVar4 != 0) {
        FUN_00125838(uVar4,local_68,local_78);
      }
      _objc_storeStrong(&local_78,0);
    }
    local_79 = 1;
    if (DAT_028c8590 != (code *)0x0) {
      uVar6 = local_30;
      (*DAT_028c8590)(local_30,local_38,local_40,local_48,local_49 & 1);
      local_79 = (byte)uVar6;
    }
    uVar4 = local_48;
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar7);
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      local_120 = local_40;
      FUN_0010dca0(local_40,&cf_m_nsChatRoomMemList);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_120;
    }
    else {
      local_120 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_120;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    FUN_00125b30(local_68,local_70,local_88);
    _objc_storeStrong(&local_88,0);
    local_21 = local_79 & 1;
    local_60 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  else {
    if (DAT_028c8590 == (code *)0x0) {
      local_d0 = 1;
    }
    else {
      uVar6 = local_30;
      (*DAT_028c8590)(local_30,local_38,local_40,local_48,local_49 & 1);
      local_d0 = (byte)uVar6;
    }
    local_21 = local_d0 & 1;
    local_60 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

