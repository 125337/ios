// FUN_0004bf04 @ 0004bf04

byte FUN_0004bf04(void)

{
  undefined *puVar1;
  byte local_3c;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoDownloadFilesEnabled_0269d968);
  if (((ulong)puVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoDownloadImageEnabled_0269d970);
    local_3c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoDownloadVideoEnabled_0269d978);
      local_3c = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_autoDownloadFileEnabled_0269d980);
        local_3c = (byte)puVar1;
      }
    }
    local_11 = local_3c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

