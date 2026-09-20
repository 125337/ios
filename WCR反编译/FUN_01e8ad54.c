// FUN_01e8ad54 @ 01e8ad54

void FUN_01e8ad54(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *local_40;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setBlankWebProbeConfirmationSche_026c72a8,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_40 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_40 == (cfstringStruct *)0x0) {
    local_40 = &cf_probe;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_stringByAppendingString__0269d398,&cf__confirm);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_diagnoseAndRecoverWebIfNeeded__026a8830);
  (*(code *)PTR__objc_release_02578630)(local_40);
  return;
}

