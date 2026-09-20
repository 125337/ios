// FUN_021f492c @ 021f492c

void FUN_021f492c(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 local_1a0;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_d8 = 0;
  param_3 = param_3 + 0x10;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_3;
  _swift_beginAccess(param_3,auStack_90,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  _swift_endAccess(auStack_90);
  if (param_3 == 0) {
    _swift_retain(param_5);
    (*param_4)();
    _swift_release(param_5);
  }
  else {
    puVar1 = (undefined8 *)(param_3 + WCRSuperFloatFanMenuView::actionButtons);
    local_98 = param_3;
    _swift_beginAccess(puVar1,auStack_c0,0x20,0);
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_c0);
    puVar4 = &DAT_028c7100;
    local_c8 = uVar3;
    FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
    puVar5 = puVar4;
    FUN_021fafc8();
    __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_a8,puVar4,puVar5);
    while( true ) {
      FUN_021c77d4(&DAT_028c7190,&DAT_0233b168);
      __ss16IndexingIteratorV4next7ElementQzSgyF(&local_d0);
      lVar2 = local_d0;
      if (local_d0 == 0) break;
      local_d8 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = lVar2;
      FUN_02222960(lVar2,local_1a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      pcVar7 = "orbitCloseAnimation";
      uVar3 = 0x13;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                ("orbitCloseAnimation",0x13,1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar3);
      FUN_02222b00(lVar6,local_1a0,pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_retain_02578638)(lVar2);
      local_e8 = param_1;
      local_e0 = param_2;
      FUN_02222e40(param_1,param_2,lVar2,local_1a0);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_retain_02578638)(lVar2);
      FUN_02222cc0(0,lVar2,local_1a0);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_retain_02578638)(lVar2);
      FUN_021dbf50(&local_50,0x3fc3333333333333);
      local_118 = local_50;
      local_110 = local_48;
      local_108 = local_40;
      local_100 = local_38;
      local_f8 = local_30;
      local_f0 = local_28;
      FUN_02223680(lVar2,local_1a0,&local_118);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    FUN_021fb03c(&local_a8);
    _swift_retain(param_5);
    (*param_4)();
    _swift_release(param_5);
    (*(code *)PTR__objc_release_02578630)(param_3);
  }
  return;
}

