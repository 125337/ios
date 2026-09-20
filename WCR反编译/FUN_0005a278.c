// FUN_0005a278 @ 0005a278

byte FUN_0005a278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48;
  int local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  FUN_000517a8();
  local_2c = (int)uVar3;
  local_49 = 0;
  bVar2 = true;
  if (local_2c != 0) {
    uVar3 = local_20;
    FUN_0004fa34();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = uVar3 == 0;
  }
  if ((local_49 & 1) != 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_release_02578630)();
  }
  if (bVar2) {
    local_11 = 0;
    local_50 = 1;
  }
  else {
    FUN_00051280();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_GetMsg_LocalID__0269d5e8;
    local_58 = uVar3;
    if ((uVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
       (uVar3 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      uVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar1,local_20,local_2c);
      _objc_retainAutoreleasedReturnValue();
      local_11 = uVar3 != 0;
      (*(code *)PTR__objc_release_02578630)();
    }
    local_50 = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

