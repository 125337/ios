// FUN_021b8a40 @ 021b8a40

void FUN_021b8a40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x21;
  undefined8 local_88;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  uVar5 = *param_2;
  local_28 = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_3);
  puVar2 = &DAT_028c6e28;
  local_38 = param_3;
  local_30 = param_3;
  FUN_021c77d4(&DAT_028c6e28,&DAT_0233a820);
  puVar3 = puVar2;
  FUN_021c95b8();
  __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
            (puVar2,puVar3,PTR___sSiSxsWP_02578a00);
  puVar2 = &DAT_028c6e38;
  local_60 = param_3;
  local_58 = uVar5;
  FUN_021c77d4(&DAT_028c6e38,&DAT_0233b170);
  uVar4 = 0;
  FUN_021c9744();
  uVar5 = uVar4;
  FUN_021c9654();
  pcVar1 = FUN_021cdd00;
  FUN_021b8da8(FUN_021cdd00,auStack_70,puVar2,uVar4,PTR___ss5NeverON_02578ab8,uVar5,
               PTR___ss5NeverOs5ErrorsWP_02578ac0,local_88);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(param_3);
    *param_1 = pcVar1;
    FUN_021c9838(&local_30);
    return;
  }
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21b8b9c);
  (*pcVar1)();
}

