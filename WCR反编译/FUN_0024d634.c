// FUN_0024d634 @ 0024d634

void FUN_0024d634(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) != 0) && (uVar2 = local_18, FUN_002592fc(), (uVar2 & 1) != 0)) {
    _objc_setAssociatedObject(local_18,DAT_026dfb80);
    _objc_setAssociatedObject(local_18,DAT_026dfb88,0,0);
    _objc_setAssociatedObject(local_18,DAT_026dfba0,0,1);
    _objc_setAssociatedObject(local_18,DAT_026dfba8,0,3);
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_headerView_026a0fa8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_18;
    FUN_00259100();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_reloadData_0269e400);
    _objc_storeStrong(local_38,0);
  }
  return;
}

