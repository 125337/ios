// FUN_0026f0f4 @ 0026f0f4

byte FUN_0026f0f4(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
               PTR_s_isWrapFullyDownloaded_kind__0269da10,local_20,4);
    if (((ulong)puVar1 & 1) == 0) {
      pcVar2 = &cf_MsgFileTransferTask;
      _NSClassFromString();
      local_48 = PTR_s_taskFromMessageWrap__026a14f8;
      local_40 = pcVar2;
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_taskFromMessageWrap__026a14f8),
         ((ulong)pcVar2 & 1) == 0)) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar2;
        if ((pcVar2 == (cfstringStruct *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isFileExist_026a14b0),
           ((ulong)pcVar2 & 1) == 0)) {
          local_11 = 0;
        }
        else {
          pcVar2 = local_50;
          FUN_0026ee10(local_50,PTR_s_isFileExist_026a14b0);
          local_11 = (byte)pcVar2 & 1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_50,0);
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

