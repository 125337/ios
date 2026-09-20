// FUN_021f3f38 @ 021f3f38

void FUN_021f3f38(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  void *aBlock;
  void *aBlock_00;
  undefined8 unaff_x20;
  undefined8 local_f0;
  undefined8 local_c8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  uVar2 = param_1;
  FUN_021cf8c4();
  if ((uVar2 & 1) == 0) {
    local_c8 = DAT_02323d40;
  }
  else {
    local_c8 = DAT_02323c70;
  }
  local_40 = local_c8;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_opt_self();
  uVar4 = 0;
  FUN_021c720c(0);
  lVar5 = 2;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar4);
  *(undefined8 *)(lVar5 + 0x20) = 0x10000;
  *(undefined8 *)(lVar5 + 0x28) = 2;
  FUN_021b0268();
  lVar6 = lVar5;
  FUN_021c72a0();
  __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC(&local_48,lVar5,uVar4,lVar6)
  ;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar7 = &DAT_0258e260;
  _swift_allocObject(&DAT_0258e260,0x18);
  *(undefined8 *)(puVar7 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_58 = FUN_021fbab8;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0x42000000;
  local_6c = 0;
  local_68 = FUN_021ae198;
  local_60 = &DAT_0258e278;
  local_50 = puVar7;
  aBlock = __Block_copy(&local_78);
  _swift_release(local_50);
  FUN_0219fb8c(param_1,param_2);
  puVar7 = &DAT_0258e2b0;
  _swift_allocObject(&DAT_0258e2b0,0x20,7);
  *(ulong *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = param_2;
  local_88 = FUN_021fbb6c;
  local_a8 = puVar1;
  local_a0 = 0x42000000;
  local_9c = 0;
  local_98 = FUN_021ae4cc;
  local_90 = &DAT_0258e2c8;
  local_80 = puVar7;
  aBlock_00 = __Block_copy(&local_a8);
  _swift_release(local_80);
  FUN_02221f00(local_c8,0,puVar3,local_f0,local_48,aBlock,aBlock_00);
  __Block_release(aBlock_00);
  __Block_release(aBlock);
  return;
}

