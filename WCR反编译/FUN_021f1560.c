// FUN_021f1560 @ 021f1560

void FUN_021f1560(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  void *aBlock;
  long unaff_x20;
  double dVar9;
  undefined8 local_1a0;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = DAT_02323e70;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_b0 = 0;
  local_b8 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar1,auStack_90,0x20,0);
  uVar4 = *puVar1;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_90);
  puVar5 = &DAT_028c7100;
  local_98 = uVar4;
  FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
  puVar6 = puVar5;
  FUN_021e282c();
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar5,puVar6);
  FUN_021e28a0(&local_98);
  FUN_021c77d4(&DAT_028c7138,&DAT_0233b140);
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(&local_70);
  while( true ) {
    FUN_021c77d4(&DAT_028c7140,&DAT_0233b148);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&local_a8);
    lVar3 = local_a0;
    lVar8 = local_a8;
    if (local_a0 == 0) break;
    local_b0 = local_a8;
    local_b8 = local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222cc0(0,lVar3,local_1a0);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_retain_02578638)(lVar3);
    FUN_021dbf50(&local_50,uVar2);
    local_e8 = local_50;
    local_e0 = local_48;
    local_d8 = local_40;
    local_d0 = local_38;
    local_c8 = local_30;
    local_c0 = local_28;
    FUN_02223680(lVar3,local_1a0,&local_e8);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_opt_self();
    dVar9 = DAT_0232c6c8 * (double)(lVar8 % 8);
    uVar4 = 0;
    FUN_021c720c(0);
    lVar7 = 2;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar4);
    *(undefined8 *)(lVar7 + 0x20) = 0x20000;
    *(undefined8 *)(lVar7 + 0x28) = 2;
    FUN_021b0268();
    lVar8 = lVar7;
    FUN_021c72a0();
    __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
              (&local_f0,lVar7,uVar4,lVar8);
    uVar4 = local_f0;
    (*(code *)PTR__objc_retain_02578638)(lVar3);
    puVar5 = &DAT_0258e0a8;
    _swift_allocObject(&DAT_0258e0a8,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    local_100 = FUN_021fb4a8;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0x42000000;
    local_114 = 0;
    local_110 = FUN_021ae198;
    local_108 = &DAT_0258e0c0;
    local_f8 = puVar5;
    aBlock = __Block_copy(&local_120);
    _swift_release(local_f8);
    FUN_02221f20(DAT_02323ec8,dVar9,DAT_02323c60,0x3fe3333333333333,puVar6,local_1a0,uVar4,aBlock,0)
    ;
    __Block_release(aBlock);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  FUN_021ed05c(&local_70);
  return;
}

