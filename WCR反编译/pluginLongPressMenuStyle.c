// pluginLongPressMenuStyle @ 01771d1c

/* Function Stack Size: 0x10 bytes */

long_long WCRefinePluginHubManager::pluginLongPressMenuStyle(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  bVar1 = false;
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
    bVar1 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  _objc_storeStrong(&local_28,0);
  return (long)(int)(uint)bVar1;
}

