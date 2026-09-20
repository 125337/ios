// FUN_01fcd474 @ 01fcd474

void FUN_01fcd474(void)

{
  undefined *puVar1;
  uint local_94;
  long local_80;
  undefined8 local_60;
  undefined8 local_58;
  byte local_4d;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined *local_20;
  undefined *local_18;
  
  if ((DAT_028e4929 & 1) != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configFilePath_0269f938)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar1;
    FUN_01fcc234();
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (DAT_028e4908 == 0) {
      local_80 = *(long *)PTR____NSDictionary0___02578288;
    }
    else {
      local_80 = DAT_028e4908;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_80;
    local_30 = 0;
    local_40 = 0;
    puVar1 = PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSPropertyListSerialization_026cece8,
               PTR_s_dataWithPropertyList_format_opti_026af128,local_80,200,0,&local_40);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_30,local_40);
    local_94 = 0;
    local_38 = puVar1;
    if (puVar1 != (undefined *)0x0) {
      local_58 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_writeToFile_options_error__026a0a68,local_18,1,&local_58);
      local_94 = (uint)puVar1;
      _objc_storeStrong(&local_30,local_58);
    }
    local_4d = (byte)local_94 & 1;
    if (((local_94 & 1) == 0) && (local_38 != (undefined *)0x0)) {
      local_60 = local_30;
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_writeToFile_options_error__026a0a68,local_18,0,&local_60);
      _objc_storeStrong(&local_30,local_60);
      local_4d = (byte)puVar1;
    }
    if ((local_4d & 1) == 0) {
      _NSLog(&cf__);
    }
    else {
      DAT_028e4929 = 0;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28);
    _objc_storeStrong(&local_20,0);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

