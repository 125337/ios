// FUN_00437450 @ 00437450

void FUN_00437450(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_18 == 0) || (FUN_00436d1c(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_setM_bShowMultiSelectRightBtn__026a39c8);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setM_bShowMultiSelectRightBtn__026a39c8,1);
    }
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0);
    if ((uVar3 & 1) == 0) {
      _objc_initWeak(auStack_30,local_18);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_00437944;
      local_40 = &DAT_02578da0;
      _objc_copyWeak(auStack_38,auStack_30);
      _dispatch_async(puVar4,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_38);
      _objc_destroyWeak(auStack_30);
    }
    else {
      FUN_004377ec(local_18);
    }
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

