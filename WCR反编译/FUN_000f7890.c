// FUN_000f7890 @ 000f7890

void FUN_000f7890(ulong param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  uint local_ac;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [15];
  byte local_51;
  ulong local_50;
  byte local_31;
  uint local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined1 local_24;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  DAT_028c8458 = CONCAT22(DAT_028c8458._2_2_,CONCAT11(DAT_028c8458._1_1_,(undefined1)DAT_028c8458));
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_000f9590();
  local_30 = DAT_028c8458;
  local_24 = DAT_028c845c;
  uStack_2c = CONCAT31(uStack_2c._1_3_,DAT_028c845c);
  uVar2 = CONCAT44(uStack_2c,DAT_028c8458);
  local_28 = local_30;
  FUN_000fa82c();
  if ((uVar2 & 1) != 0) {
    FUN_000ff4a0(local_18,0,0);
  }
  uVar3 = local_18;
  FUN_001002ec();
  uVar2 = local_18;
  uVar1 = DAT_026df8b8;
  local_31 = (byte)uVar3;
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_001008e0(local_18);
  }
  uVar2 = local_18;
  (*DAT_028c8400)(local_18,local_20,local_21 & 1);
  local_51 = 0;
  local_ac = 1;
  if ((local_31 & 1) == 0) {
    _WCRefineChatPositionFeatureAllowed();
    local_ac = 1;
    if (((uVar2 & 1) != 0) && (local_ac = 1, (DAT_028c8458 & 0x100) != 0)) {
      uVar2 = local_18;
      _objc_getAssociatedObject(local_18,DAT_026df8b8);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_ac = (uint)uVar2;
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_ac & 1) == 0) {
    _objc_initWeak(auStack_60,local_18);
    dVar5 = _dispatch_time(0,350000000);
    puVar4 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_001021a8;
    local_70 = &DAT_02578da0;
    _objc_copyWeak(auStack_68,auStack_60);
    _dispatch_after(dVar5,puVar4,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_60);
  }
  return;
}

