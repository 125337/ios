// loadOtherPluginsSections @ 014c1038

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::loadOtherPluginsSections(ID param_1,SEL param_2)

{
  ID local_28;
  SEL local_20;
  ID local_18;
  
  *(undefined1 *)(param_1 + 10) = 0;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getSortedPluginVCList_026af578);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_loadPluginsOneByOne_atIndex__026af580,param_1,0);
  _objc_storeStrong(&local_28,0);
  return;
}

