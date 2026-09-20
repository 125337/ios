// FUN_015774bc @ 015774bc

void FUN_015774bc(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_view_026cabd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_01566074(lVar1,&cf_textView);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    FUN_01563e1c(lVar1,&cf_text,*(undefined8 *)(param_1 + 0x28));
  }
  _objc_storeStrong(&local_28,0);
  return;
}

