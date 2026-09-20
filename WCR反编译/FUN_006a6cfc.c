// FUN_006a6cfc @ 006a6cfc

void FUN_006a6cfc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UNNotificationContent_026ce808;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNNotificationContent_026ce808,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UNMutableNotificationContent_026ce810;
    _objc_alloc_init();
    local_24 = 1;
    local_18 = puVar2;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSubtitle__026a6678,&cf___);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBody__026a6680,&cf___);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSound__026a6688);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setAttachments__026a6690,*(undefined8 *)PTR____NSArray0___02578280);
    puVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

