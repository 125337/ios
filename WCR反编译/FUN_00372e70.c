// FUN_00372e70 @ 00372e70

void FUN_00372e70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_32;
  byte local_31;
  long local_30;
  long local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_31 = (byte)puVar2;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_32 = SUB81(puVar2,0);
  if (((local_31 & 1) != 0) || (((ulong)puVar2 & 1) != 0)) {
    if ((local_31 & 1) == 0) {
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc0000000;
      local_7c = 0;
      local_78 = FUN_00374c98;
      local_70 = &DAT_0257c6e8;
      local_68 = *(undefined8 *)(param_1 + 0x20);
      _WCRefineRunAfterMainFrameFirstAppear(0x4028000000000000,&local_88);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = _WCRefineHomeGroupsDidChangeNotification;
      puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar3,0,puVar2,
                 &PTR___NSConcreteGlobalBlock_0257c6a8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0;
      puVar2 = PTR__OBJC_CLASS___NSOperationQueue_026ce110;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSOperationQueue_026ce110,PTR_s_mainQueue_026ca7a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_addObserverForName_object_queue__026ca4b0,uVar3,0,puVar2,
                 &PTR___NSConcreteGlobalBlock_0257c6c8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc0000000;
      local_54 = 0;
      local_50 = FUN_00373ecc;
      local_48 = &DAT_0257c6e8;
      local_40 = *(undefined8 *)(param_1 + 0x20);
      _WCRefineRunAfterMainFrameFirstAppear(0x4028000000000000,&local_60);
    }
  }
  return;
}

