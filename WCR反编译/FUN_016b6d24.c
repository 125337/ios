// FUN_016b6d24 @ 016b6d24

byte FUN_016b6d24(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long local_60;
  ulong local_58;
  byte local_4d;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028e3ebd);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar1 == 0) {
        local_21 = 0;
      }
      else {
        local_18 = &DAT_028e3ec8;
        local_20 = 0;
        _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025880f0);
        if (*local_18 + 1 != 0) {
          _dispatch_once(*local_18 + 1,local_18,local_20);
        }
        _objc_storeStrong(&local_20,0);
        uVar1 = local_30;
        local_4d = 0;
        if (DAT_028e3ec0 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = uVar1;
          for (local_60 = 0; local_60 < 0x28 && local_58 != 0; local_60 = local_60 + 1) {
            uVar1 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_isKindOfClass__0269cd68,DAT_028e3ec0);
            if ((uVar1 & 1) != 0) {
              local_4d = 1;
              break;
            }
            uVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_nextResponder_0269d0d8);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_58;
            local_58 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          _objc_storeStrong(&local_58,0);
        }
        uVar1 = local_30;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_4d & 1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028e3ebd,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_21 = local_4d & 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
      local_21 = (byte)uVar1 & 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

