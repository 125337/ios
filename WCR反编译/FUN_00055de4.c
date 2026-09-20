// FUN_00055de4 @ 00055de4

void FUN_00055de4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_00055cb0();
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
    goto LAB_00055f04;
  }
  FUN_00055f34();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_startDownloadRawVideo__0269daa0;
  local_30 = uVar2;
  if (uVar2 == 0) {
LAB_00055eec:
    local_28 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_startDownloadRawVideo__0269daa0);
    if ((uVar2 & 1) == 0) goto LAB_00055eec;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_18);
    local_28 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_00055f04:
  _objc_storeStrong(&local_18,0);
  return;
}

