// FUN_021f589c @ 021f589c

undefined8 FUN_021f589c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 unaff_x20;
  undefined8 local_a0;
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
  local_48 = 0;
  uVar2 = 0;
  uVar4 = param_1;
  FUN_021f8d10();
  _swift_getObjCClassFromMetadata();
  FUN_022222e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  local_40 = uVar2;
  _objc_opt_self();
  FUN_02222a00();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222c00();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_022233e0(uVar4,uVar2,local_a0);
  FUN_021f8d70(0);
  (*(code *)PTR__objc_retain_02578638)(uVar2);
  uVar4 = uVar2;
  FUN_021f5690(param_1,param_2);
  local_48 = uVar4;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar3 = &DAT_0258e328;
  _swift_allocObject(&DAT_0258e328,0x28);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  _swift_retain();
  _swift_release(puVar3);
  puVar5 = &DAT_0258e350;
  _swift_allocObject(&DAT_0258e350,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_021fbc9c;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  _swift_retain();
  local_58 = FUN_021fbcd4;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0x42000000;
  local_6c = 0;
  local_68 = FUN_021f583c;
  local_60 = &DAT_0258e368;
  local_50 = puVar5;
  aBlock = __Block_copy(&local_78);
  _swift_release(local_50);
  uVar6 = uVar4;
  FUN_02222560(uVar4,local_a0,aBlock);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(aBlock);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation
            (puVar5,
             "/Users/junlin/Code/WCRefine-S/WCRefine/SuperFloat/WCRSuperFloatFanMenuView.swift",0x50
             ,0x6a1,0x1f,1);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _swift_release(puVar3);
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x21f5b10);
  (*pcVar1)();
}

