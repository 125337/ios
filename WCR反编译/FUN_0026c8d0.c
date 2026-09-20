// FUN_0026c8d0 @ 0026c8d0

void FUN_0026c8d0(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_29 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_40 = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_host)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_gesture);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_nav);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_item)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_position);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_68 = uVar3;
    if ((local_29 & 1) != 0) {
      FUN_0026abf0(local_48,local_58,local_60,uVar3);
    }
    dVar4 = _dispatch_time(0,800000000);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0026cd04;
    local_80 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_78 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar2;
    _dispatch_after(dVar4,puVar1,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

