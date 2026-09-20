// FUN_0024e22c @ 0024e22c

void FUN_0024e22c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c93d8)(local_18,local_20,local_28);
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_00259c64(local_18,0);
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    FUN_00258a44();
    if ((uVar2 & 1) == 0) {
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f74a);
      _objc_retainAutoreleasedReturnValue();
      local_40 = lVar3;
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_setHidden__026ca970,1);
      }
      FUN_00259c64(local_18,0);
      _objc_setAssociatedObject(local_18,DAT_026dfbb8,0,3);
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_reloadGroupChips_026a0e80);
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

