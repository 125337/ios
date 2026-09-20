// FUN_022125b8 @ 022125b8

void FUN_022125b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  uVar4 = param_2[3];
  FUN_021c8144(0);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  puVar1 = &DAT_0258f028;
  _swift_allocObject(&DAT_0258f028,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  pcVar2 = FUN_0221d898;
  FUN_022127dc();
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = pcVar2;
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  *param_1 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  return;
}

