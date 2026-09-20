// _$s8WCRefine23WCRSuperFloatBallWindowC04hideD0yyF @ 021ae22c

void __s8WCRefine23WCRSuperFloatBallWindowC04hideD0yyF(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  void *aBlock_00;
  undefined8 unaff_x20;
  undefined8 local_a0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  code *local_38;
  undefined *local_30;
  
  FUN_0219eddc(0,0);
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_opt_self();
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar3 = &DAT_0258d678;
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_38 = FUN_021c8688;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0x42000000;
  local_4c = 0;
  local_48 = FUN_021ae198;
  local_40 = &DAT_0258d690;
  local_30 = puVar3;
  aBlock = __Block_copy(&local_58);
  _swift_release(local_30);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar3 = &DAT_0258d6c8;
  _swift_allocObject(&DAT_0258d6c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  local_68 = FUN_021c8730;
  local_88 = puVar1;
  local_80 = 0x42000000;
  local_7c = 0;
  local_78 = FUN_021ae4cc;
  local_70 = &DAT_0258d6e0;
  local_60 = puVar3;
  aBlock_00 = __Block_copy(&local_88);
  _swift_release(local_60);
  FUN_02221ee0(DAT_02323da8,puVar2,local_a0,aBlock,aBlock_00);
  __Block_release(aBlock_00);
  __Block_release(aBlock);
  return;
}

