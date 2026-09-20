// FUN_0024c3cc @ 0024c3cc

void FUN_0024c3cc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_40;
  byte local_35;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c9390)(local_18,local_20,local_28);
  local_35 = 0;
  local_40 = 0;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_headerViewModel_026a0fa0);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_headerViewModel_026a0fa0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_40;
  FUN_00258a44();
  local_35 = (byte)uVar1;
  _objc_storeStrong(&local_40,0);
  FUN_00258ce4(local_18,local_35 & 1);
  _objc_setAssociatedObject(local_18,DAT_026dfb80,0,1);
  _objc_setAssociatedObject(local_18,DAT_026dfb88,0,0);
  FUN_00258e10(local_18);
  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar3 & 1) != 0) && ((local_35 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_registerGroupObserverIf_026a0e60);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_headerView_026a0fa8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

