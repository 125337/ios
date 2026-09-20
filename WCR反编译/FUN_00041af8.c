// FUN_00041af8 @ 00041af8

void FUN_00041af8(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_000370d0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
    local_38 = 1;
    goto LAB_00041cd0;
  }
  FUN_0004185c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (uVar1 == 0) {
LAB_00041c68:
    local_38 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if ((uVar1 & 1) == 0) goto LAB_00041c68;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_getContactByName__0269d178,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_40,0);
  if (local_38 == 0) {
    local_18 = 0;
    local_38 = 1;
  }
LAB_00041cd0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

