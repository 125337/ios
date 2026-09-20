// FUN_00101068 @ 00101068

void FUN_00101068(undefined8 param_1,int param_2)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_38;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_24 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_24 == 0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    FUN_001014e4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       (uVar1 & 1) == 0)) {
      local_18 = 0;
    }
    else {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_GetMsg_LocalID__0269d5e8,local_20,local_24);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

