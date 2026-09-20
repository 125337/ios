// FUN_00269ce0 @ 00269ce0

byte FUN_00269ce0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00269b14();
  if ((uVar1 & 1) == 0) {
    local_11 = 1;
    local_30 = 1;
    goto LAB_00269f9c;
  }
  uVar1 = local_20;
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_38 = uVar1;
  FUN_0026af7c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  FUN_0026b5b4();
  if ((uVar2 & 1) == 0) {
    if (local_40 != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_needDownloadData_026a13e0);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_40;
        FUN_0026b798(local_40,PTR_s_needDownloadData_026a13e0,1);
        local_11 = ((byte)uVar1 ^ 1) & 1;
        goto LAB_00269f6c;
      }
    }
    if (local_38 != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_needDownLoad_026a13e8);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        FUN_0026b798(local_38,PTR_s_needDownLoad_026a13e8,1);
        local_11 = ((byte)uVar1 ^ 1) & 1;
        goto LAB_00269f6c;
      }
    }
    if (local_38 != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_chectNeedDownload_026a13f0);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        FUN_0026b798(local_38,PTR_s_chectNeedDownload_026a13f0,1);
        local_11 = ((byte)uVar1 ^ 1) & 1;
        goto LAB_00269f6c;
      }
    }
    local_11 = 1;
  }
  else {
    local_11 = 1;
  }
LAB_00269f6c:
  local_30 = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_00269f9c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

