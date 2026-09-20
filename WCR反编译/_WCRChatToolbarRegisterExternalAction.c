// _WCRChatToolbarRegisterExternalAction @ 00eee63c

void _WCRChatToolbarRegisterExternalAction(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_00eee964(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_00eeec64();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    FUN_00eeeeb8(local_40,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_40;
      FUN_00eef088();
      if ((uVar1 & 1) == 0) {
        local_34 = 1;
      }
      else {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
        local_48 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_action);
        FUN_00eef27c();
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        _objc_sync_enter(uVar3);
        uVar2 = local_40;
        uVar1 = local_50;
        local_80 = PTR___NSConcreteGlobalBlock_02578658;
        local_78 = 0xd0800000;
        local_74 = 0;
        local_70 = FUN_00eef2f0;
        local_68 = &DAT_02581d20;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_indexOfObjectPassingTest__026a27f8,&local_80);
        local_58 = uVar1;
        if (uVar1 == 0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_48);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_setObject_atIndexedSubscript__0269e970,local_48,uVar1);
        }
        _objc_storeStrong(&local_60);
        _objc_sync_exit(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _WCRChatToolbarInvalidateDiscovery();
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_48,0);
        local_34 = 0;
      }
    }
    else {
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

