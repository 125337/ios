// FUN_008d90b4 @ 008d90b4

void FUN_008d90b4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  uint local_3c;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFileName_026a9d58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsFileName_026a9d58);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_008cb6a0();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
    pcVar1 = local_38[0];
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_3c = (uint)(pcVar2 != (cfstringStruct *)0x0);
    _objc_storeStrong(local_38,0);
    if (local_3c != 0) goto LAB_008d93a4;
  }
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsTitle_026a9d60);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsTitle_026a9d60);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_008cb6a0();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar1 = local_48;
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_3c = (uint)(pcVar2 != (cfstringStruct *)0x0);
    _objc_storeStrong(&local_48,0);
    if (local_3c != 0) goto LAB_008d93a4;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_file_zip;
  local_3c = 1;
LAB_008d93a4:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

