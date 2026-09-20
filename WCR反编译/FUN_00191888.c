// FUN_00191888 @ 00191888

int FUN_00191888(undefined8 param_1)

{
  undefined4 uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0;
  }
  else {
    pcVar2 = &cf_m_uiLocalAddContactTime;
    _NSSelectorFromString();
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar1 = (undefined4)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar2);
      local_14 = (int)uVar3;
      if (local_14 != 0) goto LAB_00191a00;
      uVar1 = 0;
    }
    pcVar2 = &cf_m_uiAddCreateTime;
    _NSSelectorFromString(uVar1);
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) == 0) {
      local_14 = 0;
    }
    else {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar2);
      local_14 = (int)uVar3;
    }
  }
LAB_00191a00:
  _objc_storeStrong(&local_20,0);
  return local_14;
}

