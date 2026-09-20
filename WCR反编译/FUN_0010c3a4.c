// FUN_0010c3a4 @ 0010c3a4

void FUN_0010c3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_158;
  byte local_e0;
  ulong local_b0 [2];
  byte local_99;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  byte local_69;
  ulong local_68;
  byte local_59;
  long local_58;
  ulong local_50;
  uint local_48;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = &local_38;
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(puVar2,param_3);
  FUN_001257f8();
  if (((ulong)puVar2 & 1) == 0) {
    local_50 = 0;
    local_58 = 0;
    local_59 = 0;
    uVar3 = local_38;
    FUN_0010dca0(local_38,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_69 = 0;
    uVar4 = local_50;
    FUN_0010dc1c();
    local_e0 = 1;
    if ((uVar4 & 1) == 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_isChatroom);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = (byte)uVar4;
    }
    local_59 = local_e0 & 1;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    lVar8 = DAT_028c8548;
    if ((local_59 & 1) != 0) {
      local_78 = 0;
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(lVar8);
      lVar5 = DAT_028c8548;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c8548,PTR_s_objectForKeyedSubscript__0269d098,local_50);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = local_78;
      local_78 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar7);
      if (local_78 != 0) {
        lVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_allObjects_0269d228);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = local_58;
        local_58 = lVar6;
        (*(code *)PTR__objc_release_02578630)(lVar7);
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
      _objc_sync_exit(lVar8);
      (*(code *)PTR__objc_release_02578630)(lVar8);
      lVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      lVar8 = local_28;
      if (lVar7 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_getContactByName__0269d178,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_88 = lVar8;
        FUN_0010dca0(lVar8,&cf_m_nsChatRoomMemList);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = local_58;
        local_58 = lVar8;
        (*(code *)PTR__objc_release_02578630)(lVar7);
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
      local_99 = 0;
      bVar1 = local_78 == 0;
      if (bVar1) {
        local_158 = local_58;
        FUN_00119ab8();
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_158;
      }
      else {
        local_158 = local_78;
      }
      local_99 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_158;
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      lVar8 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
      if (lVar8 != 0) {
        FUN_00125838(lVar8,local_50,local_90);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_78,0);
    }
    if (DAT_028c8598 != (code *)0x0) {
      (*DAT_028c8598)(local_28,local_30,local_38);
    }
    bVar1 = (local_59 & 1) != 0;
    if (bVar1) {
      uVar4 = local_38;
      FUN_0010dca0(local_38,&cf_m_nsChatRoomMemList);
      _objc_retainAutoreleasedReturnValue();
      local_b0[0] = uVar4;
      FUN_00125b30(local_50,local_58,uVar4);
      _objc_storeStrong(local_b0,0);
    }
    local_48 = (uint)!bVar1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    if (DAT_028c8598 != (code *)0x0) {
      (*DAT_028c8598)(local_28,local_30,local_38);
    }
    local_48 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

