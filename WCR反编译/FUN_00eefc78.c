// FUN_00eefc78 @ 00eefc78

void FUN_00eefc78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_44;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar1 = local_28;
  FUN_00eee964(local_28,local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if (lVar1 == 0) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_50 = lVar1;
    FUN_00efdc74();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    local_88 = PTR___NSConcreteGlobalBlock_02578658;
    local_80 = 0xd0800000;
    local_7c = 0;
    local_78 = FUN_00efdd94;
    local_70 = &DAT_02582108;
    local_58 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_indexOfObjectPassingTest__026a27f8,&local_88);
    local_60 = lVar2;
    if (lVar2 == 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_addObject__0269d180,local_40);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,local_40,lVar2);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

