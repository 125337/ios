// FUN_00f957f0 @ 00f957f0

void FUN_00f957f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_28 = param_1;
  if (local_18 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00fc76f0();
    puVar1 = PTR_WCRPageSheetKeyboardBinder_026cec20;
    _objc_alloc_init();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSheet__026aa770,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setInputResponder__026ad098,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDidPrepareDismiss__026acd08,0);
    _objc_setAssociatedObject(local_18,&DAT_028e2fe4,local_38,1);
    local_40 = 0;
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_didCloseBlock_026ab050);
    if ((uVar2 & 1) != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didCloseBlock_026ab050);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setDidCloseBlock__026aabf8);
    uVar3 = local_18;
    uVar2 = local_40;
    puVar1 = PTR_s_setDidCloseBlock__026aabf8;
    if ((uVar4 & 1) != 0) {
      ppuVar5 = &local_68;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_00fc775c;
      local_50 = &DAT_025814c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar2;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1);
      (*(code *)PTR__objc_release_02578630)(ppuVar5);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

