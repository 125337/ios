// FUN_00043380 @ 00043380

void FUN_00043380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  long local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__chatroom);
    if ((uVar2 & 1) == 0) {
      local_40 = 1;
    }
    else {
      lVar4 = local_28;
      FUN_00043738();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        local_40 = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
        puVar1 = PTR___dispatch_main_q_02578680;
        if (((ulong)puVar5 & 1) == 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = local_28;
          local_80 = PTR___NSConcreteStackBlock_02578660;
          local_78 = 0xc2000000;
          local_74 = 0;
          local_70 = FUN_00043ba0;
          local_68 = &DAT_02578e60;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_30;
          local_60 = lVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = uVar2;
          _dispatch_async(puVar1,&local_80);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          local_40 = 1;
          _objc_storeStrong(&local_58);
          _objc_storeStrong(&local_60,0);
        }
        else {
          FUN_00043bd8(local_48,local_50);
          local_40 = 0;
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

