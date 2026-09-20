// FUN_022164a8 @ 022164a8

void FUN_022164a8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  ulong local_a0;
  undefined4 local_8c;
  undefined8 local_88;
  undefined *local_80;
  undefined1 *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined8 *local_30;
  long local_28;
  
  puVar1 = &DAT_028c7828;
  local_a8 = param_2;
  local_30 = param_1;
  FUN_021c77d4(&DAT_028c7828,&DAT_0233c560);
  local_a0 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar2 = local_a8;
  (*(code *)PTR____chkstk_darwin_02578668)();
  puVar5 = auStack_b0 + -local_a0;
  local_78 = puVar5;
  FUN_02214aa8();
  uVar6 = 0;
  local_58 = uVar2;
  local_50 = puVar5;
  FUN_02214c60();
  local_68 = 0;
  local_48 = uVar6;
  local_40 = uVar2;
  FUN_0221ce24();
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
  _objc_opt_self();
  FUN_022229e0();
  _objc_retainAutoreleasedReturnValue();
  local_88 = *(undefined8 *)PTR__NSRunLoopCommonModes_02578258;
  local_80 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = local_68;
  __sSo9NSRunLoopC10FoundationE16SchedulerOptionsVMa();
  local_8c = 1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(local_78,1);
  lVar3 = local_68;
  __sSo7NSTimerC10FoundationE7publish5every9tolerance2on2in7optionsAbCE14TimerPublisherCSd_SdSgSo9NSRunLoopCSo0kL4ModeaAnCE16SchedulerOptionsVSgtFZ
            (0x3fa1111111111111,local_68,local_8c,local_80,local_88,local_78);
  local_70 = lVar3;
  (*(code *)PTR__objc_release_02578630)(local_88);
  (*(code *)PTR__objc_release_02578630)(local_80);
  FUN_0221ce84(local_78);
  local_28 = local_70;
  lVar3 = local_68;
  __sSo7NSTimerC10FoundationE14TimerPublisherCMa();
  local_60 = lVar3;
  FUN_0221ceec();
  lVar4 = local_60;
  __s7Combine20ConnectablePublisherPAAE11autoconnectAA10PublishersO11AutoconnectCy_xGyF
            (local_60,lVar3);
  local_38 = lVar4;
  _swift_release(local_28);
  *local_30 = local_58;
  local_30[1] = local_50;
  local_30[2] = local_48;
  local_30[3] = local_40;
  local_30[4] = local_38;
  return;
}

