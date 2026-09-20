// FUN_021e0a54 @ 021e0a54

undefined8 **** FUN_021e0a54(void)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x20;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 ***local_270;
  undefined8 ***local_258;
  long local_250;
  undefined8 ***local_238;
  long local_230;
  undefined8 ***local_228;
  long local_220;
  undefined8 ***local_1e0;
  long local_1d8;
  undefined8 ***local_1d0;
  long local_1c8;
  undefined8 ***local_190;
  long local_188;
  undefined8 ***local_180;
  long local_178;
  undefined8 ***local_170;
  undefined8 ***local_168;
  undefined8 ***local_160;
  undefined8 ***local_158;
  undefined8 ***local_150;
  long local_148;
  undefined8 ***local_140;
  long local_138;
  undefined8 ***local_130;
  long lStack_128;
  undefined8 ***local_118;
  long lStack_110;
  char *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  undefined8 ***local_c0;
  long local_b8;
  undefined8 ***local_b0;
  long local_a8;
  undefined8 ***local_a0;
  long lStack_98;
  undefined8 ***local_90;
  long lStack_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 ***local_38;
  long local_30;
  
  local_b0 = (undefined8 ***)0x0;
  local_a8 = 0;
  local_140 = (undefined8 ***)0x0;
  local_138 = 0;
  local_150 = (undefined8 ***)0x0;
  local_148 = 0;
  local_170 = (undefined8 ***)0x0;
  pcVar3 = "menuTitleColorHex";
  uVar6 = 0x11;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuTitleColorHex",0x11,1)
  ;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_70,0x20,0);
  local_80 = pcVar3;
  local_78 = uVar6;
  __sSDyq_Sgxcig(auStack_58,&local_80,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_80);
  _swift_endAccess(auStack_70);
  if (local_40 == 0) {
    FUN_021c7fc0(auStack_58);
    local_1e0 = (undefined8 ****)0x0;
    local_1d8 = 0;
  }
  else {
    ppppuVar4 = &local_190;
    _swift_dynamicCast(ppppuVar4,auStack_58,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppppuVar4 & 1) == 0) {
      local_1d0 = (undefined8 ****)0x0;
      local_1c8 = 0;
    }
    else {
      local_1d0 = local_190;
      local_1c8 = local_188;
    }
    local_1e0 = local_1d0;
    local_1d8 = local_1c8;
  }
  local_90 = local_1e0;
  lStack_88 = local_1d8;
  lStack_98 = local_1d8;
  local_a0 = local_1e0;
  if (local_1d8 == 0) {
    pcVar3 = "#000000";
    lVar7 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#000000",7,1);
    local_38 = (undefined8 ***)pcVar3;
    local_30 = lVar7;
    if (lStack_98 != 0) {
      FUN_021c811c(&local_a0);
    }
  }
  else {
    local_38 = local_1e0;
    local_30 = local_1d8;
  }
  lVar7 = local_30;
  pppuVar2 = local_38;
  local_b0 = local_38;
  local_a8 = local_30;
  pcVar3 = "menuTitleColorHexDark";
  uVar6 = 0x15;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("menuTitleColorHexDark",0x15,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_f8,0x20,0);
  local_108 = pcVar3;
  local_100 = uVar6;
  __sSDyq_Sgxcig(auStack_e0,&local_108,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_108);
  _swift_endAccess(auStack_f8);
  if (local_c8 == 0) {
    pcVar3 = (char *)0x0;
    FUN_021c7fc0();
    local_238 = (undefined8 ****)0x0;
    local_230 = 0;
  }
  else {
    pcVar3 = (char *)&local_180;
    _swift_dynamicCast(pcVar3,auStack_e0,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)pcVar3 & 1) == 0) {
      local_228 = (undefined8 ****)0x0;
      local_220 = 0;
    }
    else {
      local_228 = local_180;
      local_220 = local_178;
    }
    local_238 = local_228;
    local_230 = local_220;
  }
  local_118 = local_238;
  lStack_110 = local_230;
  lStack_128 = local_230;
  local_130 = local_238;
  if (local_230 == 0) {
    pcVar3 = "#FFFFFF";
    lVar8 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
    local_c0 = (undefined8 ***)pcVar3;
    local_b8 = lVar8;
    if (lStack_128 != 0) {
      ppppuVar4 = (undefined8 ****)0x0;
      FUN_021c811c();
      pcVar3 = (char *)ppppuVar4;
    }
  }
  else {
    local_c0 = local_238;
    local_b8 = local_230;
  }
  lVar8 = local_b8;
  local_258 = local_c0;
  local_140 = local_c0;
  local_138 = local_b8;
  FUN_021d010c();
  if (((ulong)pcVar3 & 1) == 0) {
    _swift_bridgeObjectRetain(lVar7);
    local_258 = pppuVar2;
    local_250 = lVar7;
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    local_250 = lVar8;
  }
  local_150 = local_258;
  local_148 = local_250;
  FUN_021c8144(0);
  _swift_bridgeObjectRetain(local_250);
  FUN_021e2090(local_258,local_250);
  uVar5 = unaff_x20;
  local_160 = local_258;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_160;
  if ((undefined8 ****)local_160 == (undefined8 ****)0x0) {
    FUN_021d010c();
    local_270 = (undefined8 ***)PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((uVar5 & 1) == 0) {
      _objc_opt_self();
      FUN_02222020();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_opt_self();
      FUN_02223ae0();
      _objc_retainAutoreleasedReturnValue();
    }
    local_158 = local_270;
    (*(code *)PTR__objc_release_02578630)();
    if ((undefined8 ****)local_168 != (undefined8 ****)0x0) {
      unaff_x20 = 0;
      FUN_021c8208();
    }
  }
  else {
    (*(code *)PTR__objc_release_02578630)();
    local_158 = local_168;
  }
  pppuVar2 = local_158;
  local_170 = local_158;
  FUN_021d010c();
  if ((unaff_x20 & 1) == 0) {
    local_288 = DAT_02323e70;
  }
  else {
    local_288 = 0x3fee666666666666;
  }
  ppppuVar4 = (undefined8 ****)pppuVar2;
  FUN_02222120(local_288,pppuVar2,local_278);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pppuVar2);
  _swift_bridgeObjectRelease(local_250);
  _swift_bridgeObjectRelease(lVar8);
  _swift_bridgeObjectRelease(lVar7);
  return ppppuVar4;
}

