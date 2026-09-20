// FUN_000cbd54 @ 000cbd54

void FUN_000cbd54(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar1 = &cf_BaseMsgContentViewController;
    _NSClassFromString();
    local_30 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataSource_0269e800);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,local_30);
      uVar4 = local_48[0];
      if ((uVar2 & 1) == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,local_30);
        uVar2 = local_20;
        uVar4 = local_50;
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = uVar2;
          for (local_60 = 0; local_60 < 0x32 && local_58 != 0; local_60 = local_60 + 1) {
            uVar4 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_30);
            if ((uVar4 & 1) != 0) {
              uVar4 = local_20;
              FUN_000cdda8(local_20,local_58);
              local_18 = local_58;
              if ((uVar4 & 1) == 0) {
                local_18 = 0;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
              }
              goto LAB_000cc0a8;
            }
            uVar4 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
            if ((uVar4 & 1) == 0) break;
            uVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_nextResponder_0269d0d8);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_58;
            local_58 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          local_18 = 0;
LAB_000cc0a8:
          local_24 = 1;
          _objc_storeStrong(&local_58,0);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar4;
          local_24 = 1;
        }
        _objc_storeStrong(&local_50,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar4;
        local_24 = 1;
      }
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

