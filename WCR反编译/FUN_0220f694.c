// FUN_0220f694 @ 0220f694

undefined8 FUN_0220f694(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  double dVar7;
  double dVar8;
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  ulong *local_f0;
  long local_e8;
  undefined8 local_b0;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = 0;
  local_58 = 0;
  local_50 = (undefined *)0x0;
  local_f0 = &local_60;
  local_60 = 0;
  lVar2 = 0;
  local_100 = 0;
  local_130 = param_2;
  __s10Foundation12CharacterSetVMa();
  local_118 = *(long *)(lVar2 + -8);
  local_128 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar3 = local_130;
  uVar4 = param_3;
  local_108 = lVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_110 = (long)&local_130 - local_128;
  uVar5 = 1;
  local_48 = uVar3;
  local_40 = uVar4;
  local_38 = uVar3;
  local_30 = uVar4;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#",1,1);
  local_120 = uVar5;
  __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(local_110);
  uVar3 = local_120;
  _swift_bridgeObjectRelease(local_120);
  FUN_021c81a4();
  lVar2 = local_110;
  puVar6 = PTR___sSSN_02578938;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
            (local_110,PTR___sSSN_02578938,uVar3);
  local_f8 = lVar2;
  (**(code **)(local_118 + 8))(local_110,local_108);
  local_58 = local_f8;
  local_60 = 0;
  local_50 = puVar6;
  FUN_0220f960(local_100);
  _swift_bridgeObjectRetain(puVar6);
  lVar2 = local_f8;
  FUN_0220f9c0(local_f8,puVar6);
  local_e8 = lVar2;
  FUN_02222c20();
  (*(code *)PTR__objc_release_02578630)(local_e8);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  local_68 = (local_60 & 0xff0000) >> 0x10;
  uVar3 = unaff_x20;
  FUN_021c93b8();
  puVar1 = PTR___ss6UInt64VN_02578ae0;
  FUN_021c91ec(&local_68);
  local_70 = (local_60 & 0xff00) >> 8;
  dVar7 = param_1 / 255.0;
  FUN_021c91ec(&local_70,puVar1,uVar3);
  local_78 = local_60 & 0xff;
  dVar8 = dVar7 / 255.0;
  FUN_021c91ec(&local_78,puVar1,uVar3);
  FUN_02222720(param_1 / 255.0,dVar7 / 255.0,dVar8 / 255.0,0x3ff0000000000000,unaff_x20,local_b0);
  (*(code *)PTR__objc_retain_02578638)();
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(param_3);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return unaff_x20;
}

