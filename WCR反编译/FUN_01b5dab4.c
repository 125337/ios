// FUN_01b5dab4 @ 01b5dab4

void FUN_01b5dab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == (undefined *)0x0) {
    local_24 = 1;
  }
  else {
    puVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_028c6778);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_WCRLESheetPanGuard_026cf3e0;
      _objc_alloc_init();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_delegate_0269e808);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOriginalDelegate__026a5250);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_setAssociatedObject(local_18,DAT_028c6778,local_30,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDelegate__026ca910,local_30);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSheetContainer__026bf7e8,local_20);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

