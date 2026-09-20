// FUN_0220dfe0 @ 0220dfe0

/* WARNING: Type propagation algorithm not settling */

void FUN_0220dfe0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_d8;
  double local_b0 [3];
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  
  local_98 = 0;
  local_78 = 0x402c000000000000;
  local_88 = param_5 * DAT_02323c70;
  uVar2 = param_7;
  local_90 = param_4;
  FUN_021c8058();
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_88,&local_90);
  __ss3maxyxx_xtSLRzlF(&local_70,&local_78,auStack_80,puVar1,uVar2);
  local_98 = local_70;
  local_b0[1] = 32.0;
  local_b0[0] = param_5 * DAT_02339860;
  __ss3maxyxx_xtSLRzlF(local_b0 + 2,local_b0 + 1,local_b0,puVar1,uVar2);
  uVar2 = param_8;
  FUN_02221d00(param_8,local_d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_02223520(param_7,local_d8);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_retain_02578638)(param_7);
  FUN_02223300(param_1,param_7,local_d8);
  (*(code *)PTR__objc_release_02578630)(param_7);
  (*(code *)PTR__objc_retain_02578638)(param_7);
  FUN_02221d00(param_8,local_d8);
  _objc_retainAutoreleasedReturnValue();
  FUN_02223420(param_7,local_d8);
  (*(code *)PTR__objc_release_02578630)(param_8);
  (*(code *)PTR__objc_release_02578630)(param_7);
  (*(code *)PTR__objc_retain_02578638)(param_7);
  FUN_02223440(0,0,param_7,local_d8);
  (*(code *)PTR__objc_release_02578630)(param_7);
  (*(code *)PTR__objc_retain_02578638)(param_7);
  FUN_02223460(param_2,param_7,local_d8);
  (*(code *)PTR__objc_release_02578630)(param_7);
  (*(code *)PTR__objc_retain_02578638)(param_7);
  FUN_022234a0(param_3,param_7,local_d8);
  (*(code *)PTR__objc_release_02578630)(param_7);
  uVar2 = 0;
  FUN_021c80bc();
  lVar3 = 2;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar2);
  lVar4 = lVar3;
  FUN_021f8cd4(local_70);
  *(long *)(lVar3 + 0x20) = lVar4;
  FUN_021f8cd4(local_b0[2]);
  *(long *)(lVar3 + 0x28) = lVar4;
  FUN_021b0268(lVar3,uVar2);
  lVar4 = lVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(lVar3);
  FUN_022231a0(param_7,local_d8,lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  FUN_022231c0(param_6,param_7,local_d8);
  return;
}

