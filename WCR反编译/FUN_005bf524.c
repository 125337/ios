// FUN_005bf524 @ 005bf524

void FUN_005bf524(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_28 = 1;
  }
  else {
    FUN_005bf93c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_18);
    if ((uVar2 & 1) == 0) {
      FUN_005bf4b0();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,local_18);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      if (uVar2 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,local_18);
        local_28 = 1;
      }
      else {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,0);
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        if (uVar2 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_removeObjectForKey__0269d700,local_18);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_18);
        uVar1 = local_18;
        uVar2 = local_48;
        local_70 = PTR___NSConcreteStackBlock_02578660;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = FUN_005bf9b0;
        local_58 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = uVar1;
        (**(code **)(uVar2 + 0x10))(uVar2,&local_70);
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
        local_28 = 0;
      }
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

