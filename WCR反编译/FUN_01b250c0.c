// FUN_01b250c0 @ 01b250c0

void FUN_01b250c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  local_30 = param_3;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if (((local_20 == 0) ||
      ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) ||
     (local_30 < 1)) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    local_48 = PTR_s_GetMsg_LocalID__0269d5e8;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_3c = 1;
    }
    else {
      local_50 = 0;
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_48,local_38,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      local_3c = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

