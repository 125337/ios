// FUN_000d5484 @ 000d5484

/* WARNING: Removing unreachable block (ram,0x000d579c) */

void FUN_000d5484(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar6;
  ulong local_78;
  byte local_69;
  ulong local_68;
  byte local_5d;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar5;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  local_40 = 0;
  local_50 = 0;
  uVar4 = local_18;
  FUN_000db8b8(local_18,local_28,&local_38,&local_50);
  puVar5 = &local_40;
  _objc_storeStrong(puVar5,local_50);
  uVar3 = (uint)puVar5;
  local_41 = (byte)uVar4;
  local_5d = 0;
  if ((uVar4 & 1) == 0) {
    local_69 = 0;
    FUN_000d8808();
    uVar4 = local_28;
    bVar2 = false;
    if ((uVar3 & 1) != 0) {
      uVar6 = local_18;
      FUN_000db77c();
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      bVar2 = uVar4 == uVar6;
      local_68 = uVar6;
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar2) {
      uVar4 = local_18;
      FUN_000dbdb8(local_18,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqual__0269e9a8,local_30);
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_30,1);
      }
      (*DAT_028c8300)(local_18,local_20,local_28,local_78);
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*DAT_028c8300)(local_18,local_20,local_28,local_30);
    }
  }
  else {
    (*DAT_028c8300)(local_18,local_20,local_28,local_30);
  }
  if ((local_41 & 1) != 0) {
    FUN_000dc214(local_18,local_38,local_40);
  }
  if ((local_5d & 1) != 0) {
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xd578c);
    (*pcVar1)();
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

