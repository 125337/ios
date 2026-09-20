// savePluginList @ 01ca915c

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginSortViewController::savePluginList(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(local_18 + (long)_pluginList);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_copy_0269d150);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPluginSortOrder__026c2ec0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveConfig_0269e5d0);
  _objc_storeStrong(&local_28,0);
  return;
}

