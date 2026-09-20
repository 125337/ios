// FUN_01a76a38 @ 01a76a38

void FUN_01a76a38(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_18 == 0) || (FUN_01a76870(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_01a76c68();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    if ((uVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
       (uVar3 & 1) == 0)) {
      lVar4 = 1;
      local_28 = 1;
    }
    else {
      local_38 = 1;
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSectionCount_026a0b70);
        local_38 = uVar3;
      }
      for (local_40 = 0; lVar4 = local_40 - local_38, local_40 < local_38; local_40 = local_40 + 1)
      {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSectionAt__026a0a78,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        FUN_01a76f28(uVar3);
        _objc_storeStrong(&local_48,0);
      }
      local_28 = 0;
    }
    _objc_storeStrong(lVar4,&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

