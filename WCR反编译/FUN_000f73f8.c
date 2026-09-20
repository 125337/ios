// FUN_000f73f8 @ 000f73f8

void FUN_000f73f8(ulong param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined1 auStack_88 [8];
  byte local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  uint local_68;
  byte local_61;
  ulong local_60;
  byte local_41;
  ulong local_40;
  byte local_31;
  undefined8 local_30;
  ulong local_28;
  
  local_31 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  FUN_000f9590();
  local_40 = 0;
  local_41 = DAT_028c8458._2_1_ & 1;
  local_61 = 0;
  local_b4 = 0;
  if ((local_31 & 1) != 0) {
    _WCRefineChatPositionFeatureAllowed();
    local_b4 = 0;
    if (((param_1 & 1) != 0) && (local_b4 = 0, (DAT_028c8458._1_1_ & 1) != 0)) {
      uVar2 = local_28;
      FUN_001002ec();
      local_b4 = 0;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026df8b8);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b4 = (uint)uVar2 ^ 1;
      }
    }
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_b4 & 1) != 0) {
    uVar3 = local_28;
    FUN_00100134();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_000fffb4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((local_40 != 0) && ((local_41 & 1) != 0)) {
      FUN_001003e0(local_28);
    }
  }
  (*DAT_028c83f0)(local_28,local_30,local_31 & 1);
  bVar1 = local_40 != 0;
  if (bVar1) {
    _objc_initWeak(auStack_70,local_28);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    puVar5 = PTR___dispatch_main_q_02578680;
    local_78 = uVar2;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_00100508;
    local_98 = &DAT_0257a1e8;
    _objc_copyWeak();
    uVar2 = local_78;
    local_80 = local_41 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar2;
    _dispatch_async(puVar5,&local_b0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_90);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_78,0);
    _objc_destroyWeak(auStack_70);
  }
  local_68 = (uint)!bVar1;
  _objc_storeStrong(&local_40,0);
  return;
}

