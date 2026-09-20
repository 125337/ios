// FUN_00069244 @ 00069244

void FUN_00069244(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  undefined4 local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = local_18;
  FUN_00067434();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_00067398();
    if ((((ulong)puVar1 & 1) == 0) || (puVar1 = local_18, FUN_000694f8(), ((ulong)puVar1 & 1) == 0))
    {
      local_1c = 1;
    }
    else {
      puVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028c7cb0);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        puVar2 = PTR_WCRAutoScrollDriver_026ce1b0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar1 = local_28;
        local_28 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_18,&DAT_028c7cb0,local_28,1);
      }
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isTracking_0269ddf0);
      if ((((ulong)puVar1 & 1) == 0) &&
         (puVar1 = local_18,
         (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isDragging_0269ddf8),
         ((ulong)puVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attachTapIfNeeded_0269dd20);
      }
      _objc_storeStrong(&local_28,0);
      local_1c = 0;
    }
  }
  else {
    FUN_000693b4(local_18);
    local_1c = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

