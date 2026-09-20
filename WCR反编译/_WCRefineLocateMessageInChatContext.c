// _WCRefineLocateMessageInChatContext @ 0002fd7c

void _WCRefineLocateMessageInChatContext(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    dVar4 = _dispatch_time(0,350000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_0002ff00;
    local_38 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar3;
    _dispatch_after(dVar4,puVar2,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

