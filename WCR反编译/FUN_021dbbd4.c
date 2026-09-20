// FUN_021dbbd4 @ 021dbbd4

/* WARNING: Removing unreachable block (ram,0x021dbe44) */

void FUN_021dbbd4(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_1e8;
  uint local_1dc;
  uint local_1cc;
  long local_1b8;
  long local_1b0;
  undefined8 local_180;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char local_e1;
  char *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long local_a0;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar6 = DAT_02324188;
  local_f0 = 0;
  uVar2 = param_1;
  local_98 = param_3;
  local_90 = param_2;
  local_88 = param_1;
  FUN_021cf8f4();
  if ((uVar2 & 1) == 0) {
    pcVar3 = "showHighlightPreview";
    uVar6 = 0x14;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("showHighlightPreview",0x14,1);
    puVar1 = (undefined8 *)(param_1 + WCRSuperFloatFanMenuView::config);
    _swift_beginAccess(puVar1,auStack_d0,0x20,0);
    local_e0 = pcVar3;
    local_d8 = uVar6;
    __sSDyq_Sgxcig(auStack_b8,&local_e0,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_e0);
    _swift_endAccess(auStack_d0);
    if (local_a0 == 0) {
      FUN_021c7fc0(auStack_b8);
      local_1b0 = 0;
    }
    else {
      uVar6 = 0;
      FUN_021c80bc(0);
      plVar4 = &local_128;
      _swift_dynamicCast(plVar4,auStack_b8,PTR___sypN_02578b08 + 8,uVar6,6);
      if (((ulong)plVar4 & 1) == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = local_128;
      }
      local_1b0 = local_1b8;
    }
    if (local_1b0 == 0) {
      local_1cc = 2;
    }
    else {
      lVar5 = local_1b0;
      FUN_02222040(local_1b0,local_180);
      local_1cc = (uint)lVar5;
      (*(code *)PTR__objc_release_02578630)(local_1b0);
    }
    local_e1 = (char)local_1cc;
    if (local_e1 == '\x02') {
      local_1dc = 1;
    }
    else {
      local_1dc = local_1cc & 0xff;
    }
    if ((local_1dc & 1) == 0) {
      local_1e8 = DAT_02339780;
    }
    else {
      local_1e8 = DAT_023397a0;
    }
    local_f0 = local_1e8;
    (*(code *)PTR__objc_retain_02578638)(param_3);
    if (param_3 != 0) {
      FUN_021dbf50(&local_50,local_1e8);
      local_120 = local_50;
      local_118 = local_48;
      local_110 = local_40;
      local_108 = local_38;
      local_100 = local_30;
      local_f8 = local_28;
      FUN_02223680(param_3,local_180,&local_120);
      (*(code *)PTR__objc_release_02578630)(param_3);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(param_2);
    FUN_021dbf50(&local_80,uVar6);
    local_158 = local_80;
    local_150 = local_78;
    local_148 = local_70;
    local_140 = local_68;
    local_138 = local_60;
    local_130 = local_58;
    FUN_02223680(param_2,local_180,&local_158);
    (*(code *)PTR__objc_release_02578630)(param_2);
  }
  FUN_021dbfa8(param_2);
  return;
}

