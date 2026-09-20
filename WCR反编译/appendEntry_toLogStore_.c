// appendEntry:toLogStore: @ 0091a86c

/* Function Stack Size: 0x20 bytes */

void WCNavigationMonitor::appendEntry_toLogStore_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  uint local_cc;
  undefined *local_68;
  ID local_60;
  byte local_55;
  undefined4 local_54;
  char *local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = (char *)0x0;
  _objc_storeStrong(&local_50,param_4);
  lVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_50 == (char *)0x0)) {
    local_54 = 1;
  }
  else {
    local_55 = local_50 == *(char **)(local_38 + 0x20);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_timestampStringWithMilliseconds__026aa3f0,local_55);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_38;
    local_68 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_68);
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    if ("raphics.framework/CoreGraphics" < pcVar4) {
      local_28 = 0;
      local_30 = 1000;
      local_20 = 0;
      local_18 = 1000;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectsInRange__0269dad0,0,1000);
    }
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_cc = 0;
    if ((local_55 & 1) != 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_cc = (uint)puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if ((local_cc & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_appendNSLogEntryToLocalFile__026aa3f8,local_68);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return;
}

