// FUN_004e7724 @ 004e7724

void FUN_004e7724(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_50;
  long local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_004e6ea4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  FUN_004e7af0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  FUN_004e7da4();
  if ((uVar1 & 1) == 0) {
    local_40 = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    FUN_004e7f84();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    if (lVar2 == 0) {
      local_40 = 1;
    }
    else {
      local_50 = 0;
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
      if ((uVar1 & 1) != 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_delegate_0269d0e0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if (local_50 == 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
        if ((uVar1 & 1) != 0) {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_50;
          local_50 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
      }
      if (local_50 == 0) {
        local_40 = 1;
      }
      else {
        uVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_onSelectContact__026a4388);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_didSelectContact__026a4390);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_AddAtUser__026a4398);
            if ((uVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_AddAtUser__026a4398,local_48);
            }
            local_40 = 0;
          }
          else {
            FUN_004e8148(local_50);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_didSelectContact__026a4390,local_48);
            local_40 = 1;
          }
        }
        else {
          FUN_004e8148(local_50);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_onSelectContact__026a4388,local_48);
          local_40 = 1;
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

