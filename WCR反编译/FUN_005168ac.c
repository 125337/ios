// FUN_005168ac @ 005168ac

byte FUN_005168ac(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isPrivate_026a4710);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isPrivate_026a4710),
     (uVar1 & 1) == 0)) {
    FUN_0050ed60();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setDataItemPrivate__026a47a8),
       (uVar1 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDataItemPrivate__026a47a8,local_20);
      local_11 = 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_11 = 0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

