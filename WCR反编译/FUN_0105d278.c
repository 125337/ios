// FUN_0105d278 @ 0105d278

void FUN_0105d278(long param_1)

{
  undefined *puVar1;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRXHSWebExtractSession_026cecb8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRXHSWebExtractSession_026cecb8,PTR_s_new_0269d288);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setPlatform__026adde8,5);
  local_40 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_40 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSourceURL__026addf0,local_40);
  local_50 = *(cfstringStruct **)(param_1 + 0x28);
  if (local_50 == (cfstringStruct *)0x0) {
    local_60 = *(cfstringStruct **)(param_1 + 0x20);
    if (local_60 == (cfstringStruct *)0x0) {
      local_60 = &cf___;
    }
    local_50 = local_60;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPageURL__026adfc8,local_50);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_setCompletion__0269fdc8,*(undefined8 *)(param_1 + 0x30));
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_start_0269f448);
  _objc_storeStrong(&local_28,0);
  return;
}

