// FUN_00451c5c @ 00451c5c

void FUN_00451c5c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_e0;
  ulong local_70;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  _CFAbsoluteTimeGetCurrent();
  uVar1 = local_28;
  local_30 = param_1;
  FUN_0045210c();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar1;
  if (uVar1 == 0) {
    local_4c = 1;
  }
  else {
    FUN_004523d4(uVar1,_WCRLocalEmoticonPid);
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_injectsOfficialBoardTab_026a3c90);
    if (((ulong)puVar2 & 1) == 0) {
      if (local_58 != 0x7fffffffffffffff) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_removeObjectAtIndex__0269d530,local_58);
      }
      local_4c = 1;
    }
    else {
      if (local_58 != 0x7fffffffffffffff) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_removeObjectAtIndex__0269d530,local_58);
      }
      uVar1 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026e0370);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      if (uVar1 == 0) {
        FUN_00452620();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_60;
        local_60 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_setAssociatedObject(local_28,DAT_026e0370,local_60,1);
      }
      if (local_60 == 0) {
        local_4c = 1;
      }
      else {
        uVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setAccessibilityName__026a3c98)
        ;
        uVar1 = local_60;
        puVar2 = PTR_s_setAccessibilityName__026a3c98;
        if ((uVar3 & 1) != 0) {
          FUN_004528d4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,puVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_e0 = local_48[0];
        FUN_004523d4(local_48[0],&cf_custom_emoticon_pid);
        if (local_e0 == 0x7fffffffffffffff) {
          local_70 = local_48[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
        }
        else {
          puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_entrySide_026a3ca0);
          if (puVar2 != (undefined *)0x0) {
            local_e0 = local_e0 + 1;
          }
          local_70 = local_e0;
        }
        if ((long)local_70 < 0) {
          local_70 = 0;
        }
        uVar1 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
        if ((long)uVar1 < (long)local_70) {
          local_70 = local_48[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48[0],PTR_s_insertObject_atIndex__0269eac0,local_60,local_70);
        local_4c = 0;
      }
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

