// FUN_00053958 @ 00053958

byte FUN_00053958(ulong param_1)

{
  undefined *puVar1;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if ((local_20 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoDownloadImageEnabled_0269d970);
    if (((ulong)puVar1 & 1) != 0) {
      local_11 = 1;
      goto LAB_00053ab8;
    }
  }
  if (((uint)local_20 >> 1 & 1) != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoDownloadVideoEnabled_0269d978);
    if (((ulong)puVar1 & 1) != 0) {
      local_11 = 1;
      goto LAB_00053ab8;
    }
  }
  if (((uint)local_20 >> 2 & 1) != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_autoDownloadFileEnabled_0269d980);
    if (((ulong)puVar1 & 1) != 0) {
      local_11 = 1;
      goto LAB_00053ab8;
    }
  }
  local_11 = 0;
LAB_00053ab8:
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

