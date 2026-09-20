// FUN_016a7a38 @ 016a7a38

void FUN_016a7a38(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *local_c0;
  undefined *local_b8;
  int local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  puVar3 = local_30;
  (*DAT_028e3e00)(local_30,local_38,local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_79 = 0;
  puVar4 = PTR_WCRefineMessageRepositoryStore_026ce120;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeCapturePending_026b2e00);
  bVar1 = false;
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = local_30;
    FUN_016d1218();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028e3f10);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      bVar1 = puVar4 == (undefined *)0x0;
      local_78 = puVar4;
    }
  }
  uVar2 = (uint)puVar4;
  if ((local_79 & 1) != 0) {
    puVar3 = local_78;
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = (uint)puVar3;
  }
  if ((local_69 & 1) != 0) {
    puVar3 = local_68;
    (*(code *)PTR__objc_release_02578630)();
    uVar2 = (uint)puVar3;
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = (uint)puVar3;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc0000000;
    local_9c = 0;
    local_98 = FUN_016d53cc;
    local_90 = &DAT_025797b0;
    local_88 = local_30;
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_016b9cb0();
  puVar3 = local_50;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_ac = 1;
  }
  else {
    if (DAT_028e3f18 == (char *)0x0) {
      pcVar5 = "ChatTableViewCell";
      _objc_getClass();
      DAT_028e3f18 = pcVar5;
    }
    pcVar5 = DAT_028e3f18;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,pcVar5);
    puVar4 = local_50;
    if (((ulong)puVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_cellView_0269e7e8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_50;
      local_c0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar3;
        local_ac = 1;
      }
      else {
        FUN_016a9384();
        puVar3 = local_50;
        if (((ulong)puVar4 & 1) == 0) {
          if ((DAT_028e3e10 & 1) == 0) {
            FUN_016b7894(local_c0);
          }
          local_ac = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar3;
          local_ac = 1;
        }
      }
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      if (local_ac != 0) goto LAB_016a7f10;
    }
    puVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_ac = 1;
  }
LAB_016a7f10:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

