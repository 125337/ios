// FUN_00516a68 @ 00516a68

byte FUN_00516a68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_48 [3];
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_00513140();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    puVar2 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar2 = PTR_WCRefineMomentsMonitor_026ce718;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
    }
  }
  FUN_0050ed60();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar2;
  if ((puVar2 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_deleteDataItem__026a47b8),
     ((ulong)puVar2 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_deleteDataItem__026a47b8,local_20);
    local_11 = 1;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

