// FUN_00f9567c @ 00f9567c

void FUN_00f9567c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    puVar2 = PTR_WCRPageSheetMultilineInsetBinder_026cec18;
    _objc_alloc_init();
    local_28 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_attachToTextView__026ad090,local_18);
    _objc_setAssociatedObject(local_18,&DAT_028e2fe3,local_28,1);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

