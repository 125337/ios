// FUN_00908628 @ 00908628

void FUN_00908628(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_currentDisplayLogsForCopy_026aa0b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

