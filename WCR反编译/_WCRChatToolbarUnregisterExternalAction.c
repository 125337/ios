// _WCRChatToolbarUnregisterExternalAction @ 00eef444

void _WCRChatToolbarUnregisterExternalAction(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_24 = 1;
  }
  else {
    FUN_00eef27c();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar2);
    lVar1 = local_20;
    lVar3 = local_30;
    local_60 = PTR___NSConcreteGlobalBlock_02578658;
    local_58 = 0xd0800000;
    local_54 = 0;
    local_50 = FUN_00eef650;
    local_48 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_60);
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_count_0269cfe0);
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_removeObjectsAtIndexes__026a2c98,local_38);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _WCRChatToolbarInvalidateDiscovery();
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

