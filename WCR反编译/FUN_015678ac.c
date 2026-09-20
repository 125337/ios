// FUN_015678ac @ 015678ac

void FUN_015678ac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  if (*(long *)(param_1 + 0x30) == DAT_028e3a00) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    local_20 = param_1;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(ulong *)(param_1 + 0x20);
    local_28 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_30 = uVar2;
    FUN_01567a98();
    if (((uVar1 & 1) == 0) && (uVar1 = local_30, FUN_01567a98(), (uVar1 & 1) == 0)) {
      if (*(long *)(param_1 + 0x38) < 1) {
        FUN_01566b24(*(undefined8 *)(param_1 + 0x30));
      }
      else {
        FUN_01566fb8(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x38) + -1);
      }
    }
    else {
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01567bb8;
      local_48 = &DAT_0257a7a0;
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      local_40 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar4;
      FUN_015665f0(&local_60);
      FUN_01566b24(*(undefined8 *)(param_1 + 0x30));
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

