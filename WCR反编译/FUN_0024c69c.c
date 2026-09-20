// FUN_0024c69c @ 0024c69c

void FUN_0024c69c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c9398)(local_18,local_20,local_28);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_setAssociatedObject(local_18,DAT_026dfb98,0,1);
  }
  else {
    _objc_setAssociatedObject(local_18,DAT_026dfb98,local_28,1);
  }
  _objc_setAssociatedObject(local_18,DAT_026dfb80,0,1);
  _objc_setAssociatedObject(local_18,DAT_026dfb88,0,0);
  FUN_00258e10(local_18);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_showChipCount_026a0fe0);
    if (((ulong)puVar1 & 1) != 0) {
      uVar2 = local_18;
      FUN_002592fc();
      if ((uVar2 & 1) != 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_headerView_026a0fa8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

