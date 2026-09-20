// FUN_007b1dc8 @ 007b1dc8

/* WARNING: Removing unreachable block (ram,0x007b1f54) */

void FUN_007b1dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [15];
  byte local_41;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar5;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    DAT_028ccc6a = 1;
    local_41 = 0;
    uVar5 = local_18;
    (*DAT_028ccc50)(local_18,local_20,local_28,local_30);
    uVar2 = (uint)uVar5;
    local_40 = 0;
    DAT_028ccc6a = 0;
    if ((local_41 & 1) != 0) {
      _objc_exception_rethrow();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x7b1f44);
      (*pcVar1)();
    }
    local_40 = 0;
    FUN_007ac894();
    if ((uVar2 & 1) != 0) {
      _objc_initWeak(auStack_50,local_18);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_007bd7b0;
      local_60 = &DAT_02578da0;
      _objc_copyWeak(auStack_58,auStack_50);
      _dispatch_async(puVar3,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_50);
    }
    local_40 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_deselectRowAtIndexPath_animated__0269e990,local_30,0);
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

