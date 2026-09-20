// FUN_008bfc10 @ 008bfc10

void FUN_008bfc10(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong local_50;
  uint local_48;
  long local_38;
  undefined1 *local_30;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  FUN_008b8b30();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_0269d508);
    *local_30 = 1;
    local_48 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_008bfdb4(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,uVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_0269d508);
      *local_30 = 1;
    }
    local_48 = (uint)(uVar1 == 0);
    _objc_storeStrong(&local_50,0);
    if (local_48 == 0) {
      local_48 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

