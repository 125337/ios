// addURLToHistory: @ 01ef4bd0

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListWebSettingsViewController::addURLToHistory_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_b0;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  lVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_54 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_68 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_68;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_b0;
    if (puVar4 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObject__0269d678,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_insertObject_atIndex__0269eac0,local_50,0);
    puVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    puVar3 = local_60;
    if ((undefined1 *)((long)&MACH_HEADER.reserved + 2) < puVar4) {
      puVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      local_30 = puVar4 + -0x1e;
      local_28 = 0x1e;
      local_20 = 0x1e;
      local_18 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_removeObjectsInRange__0269dad0,0x1e,local_30);
    }
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

