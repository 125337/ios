// FUN_0220eaa4 @ 0220eaa4

undefined1  [16] FUN_0220eaa4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *unaff_x20;
  undefined1 auVar9 [16];
  undefined8 local_b8;
  char *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  pcVar3 = unaff_x20;
  FUN_022224c0();
  if (((ulong)pcVar3 & 1) == 0) {
    local_58 = 0;
    pcVar3 = unaff_x20;
    FUN_022224e0(unaff_x20,local_b8,&local_58,&local_50);
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      pcVar3 = unaff_x20;
      FUN_02222320();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_70 = pcVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      local_68 = local_b8;
    }
    else {
      local_70 = "w%.3f,%.3f";
      uVar7 = 10;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("w%.3f,%.3f",10,1);
      puVar5 = &DAT_028c74e0;
      FUN_021c77d4(&DAT_028c74e0,&DAT_0233bb20);
      lVar4 = 2;
      __ss27_allocateUninitializedArrayySayxG_BptBwlF();
      uVar2 = local_58;
      puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
      *(undefined **)(lVar4 + 0x38) = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
      lVar6 = lVar4;
      FUN_0220f108();
      *(long *)(lVar4 + 0x40) = lVar6;
      *(undefined8 *)(lVar4 + 0x20) = uVar2;
      *(undefined **)(lVar4 + 0x60) = puVar1;
      *(long *)(lVar4 + 0x68) = lVar6;
      *(undefined8 *)(lVar4 + 0x48) = local_50;
      FUN_021b0268(lVar4,puVar5);
      local_68 = uVar7;
      __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(local_70,uVar7,lVar4);
      _swift_bridgeObjectRelease(uVar7);
    }
  }
  else {
    local_70 = "%.3f,%.3f,%.3f,%.3f";
    uVar7 = 0x13;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("%.3f,%.3f,%.3f,%.3f",0x13,1);
    puVar5 = &DAT_028c74e0;
    FUN_021c77d4(&DAT_028c74e0,&DAT_0233bb20);
    lVar4 = 4;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF();
    uVar2 = local_38;
    puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
    *(undefined **)(lVar4 + 0x38) = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
    lVar6 = lVar4;
    FUN_0220f108();
    *(long *)(lVar4 + 0x40) = lVar6;
    *(undefined8 *)(lVar4 + 0x20) = uVar2;
    *(undefined **)(lVar4 + 0x60) = puVar1;
    *(long *)(lVar4 + 0x68) = lVar6;
    *(undefined8 *)(lVar4 + 0x48) = local_40;
    *(undefined **)(lVar4 + 0x88) = puVar1;
    *(long *)(lVar4 + 0x90) = lVar6;
    *(undefined8 *)(lVar4 + 0x70) = local_48;
    *(undefined **)(lVar4 + 0xb0) = puVar1;
    *(long *)(lVar4 + 0xb8) = lVar6;
    *(undefined8 *)(lVar4 + 0x98) = local_50;
    FUN_021b0268(lVar4,puVar5);
    local_68 = uVar7;
    __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(local_70,uVar7,lVar4);
    _swift_bridgeObjectRelease(uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar8);
  }
  auVar9._8_8_ = local_68;
  auVar9._0_8_ = local_70;
  return auVar9;
}

