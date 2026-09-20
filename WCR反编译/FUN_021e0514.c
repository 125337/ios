// FUN_021e0514 @ 021e0514

undefined8 FUN_021e0514(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  undefined8 local_d0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_02223740();
  uVar2 = unaff_x20;
  local_48 = param_1;
  local_40 = param_1;
  local_38 = param_2;
  FUN_02223740(unaff_x20,local_d0);
  local_60 = param_2;
  local_58 = param_1;
  local_50 = param_2;
  FUN_021c8058();
  __ss3maxyxx_xtSLRzlF(&local_30,&local_48,&local_60,PTR___s12CoreGraphics7CGFloatVN_02578ba0,uVar2)
  ;
  local_68 = local_30;
  uVar3 = 0;
  FUN_021f8d10();
  _swift_getObjCClassFromMetadata();
  FUN_022222e0();
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar3;
  FUN_02222c00(unaff_x20,local_d0);
  FUN_022233e0(uVar3,local_d0);
  FUN_021f8d70(0);
  (*(code *)PTR__objc_retain_02578638)(uVar3);
  uVar2 = uVar3;
  FUN_021f5690(local_30);
  local_78 = uVar2;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar4 = &DAT_0258dfb8;
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = local_30;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  _swift_retain();
  _swift_release(puVar4);
  puVar5 = &DAT_0258dfe0;
  _swift_allocObject(&DAT_0258dfe0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_021f8e14;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  _swift_retain();
  local_88 = FUN_021f8e48;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0x42000000;
  local_9c = 0;
  local_98 = FUN_021f583c;
  local_90 = &DAT_0258dff8;
  local_80 = puVar5;
  aBlock = __Block_copy(&local_a8);
  _swift_release(local_80);
  uVar6 = uVar2;
  FUN_02222560(uVar2,local_d0,aBlock);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(aBlock);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation
            (puVar5,
             "/Users/junlin/Code/WCRefine-S/WCRefine/SuperFloat/WCRSuperFloatFanMenuView.swift",0x50
             ,0x696,0x1f,1);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _swift_release(puVar4);
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21e07b0);
  (*pcVar1)();
}

