// FUN_01992a0c @ 01992a0c

void FUN_01992a0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  puVar2 = PTR_WCRefineWechatThemeStore_026ce6d0;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_28;
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,local_38);
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification();
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01992c08;
  local_50 = &DAT_0257a7a0;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_28;
  local_48 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  _dispatch_async(puVar2,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

