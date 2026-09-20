// FUN_02217c10 @ 02217c10

/* WARNING: Removing unreachable block (ram,0x02217cbc) */

long FUN_02217c10(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  _objc_opt_self();
  FUN_022222c0();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "com.qimiao.wcrefine.local_settings_changed";
  uVar5 = 0x2a;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("com.qimiao.wcrefine.local_settings_changed",0x2a,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar5);
  _objc_retain(pcVar2);
  _objc_release(pcVar2);
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
  _objc_opt_self();
  FUN_022229c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = &DAT_0258eba8;
  _swift_allocObject(&DAT_0258eba8,0x18,7);
  _swift_retain(unaff_x20);
  _swift_weakInit(puVar4 + 0x10,unaff_x20);
  _swift_release(unaff_x20);
  _swift_retain(puVar4);
  local_58 = FUN_0221a5cc;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0x42000000;
  local_6c = 0;
  local_68 = FUN_022187f8;
  local_60 = &DAT_0258ebc0;
  local_50 = puVar4;
  aBlock = __Block_copy(&local_78);
  _swift_release(local_50);
  _swift_release(puVar4);
  puVar4 = puVar1;
  FUN_02221e00();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(aBlock);
  _objc_release(puVar3);
  _swift_unknownObjectRelease(0);
  _objc_release(pcVar2);
  _objc_release(puVar1);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_90,0x21,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = puVar4;
  _swift_unknownObjectRelease(uVar5);
  _swift_endAccess(auStack_90);
  return unaff_x20;
}

