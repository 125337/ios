// setCustomTitle:forItemID: @ 010fb0ac

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginIconCatalog::setCustomTitle_forItemID_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  undefined *local_78;
  ID local_58;
  ulong local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pluginIconCustomTitles_026aed48);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_78 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithDictionary__026aadf0,local_78);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = local_28;
    FUN_010f4f48();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_defaultTitleForItemID__026aece8,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_50;
    local_58 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((uVar4 == 0) ||
       (uVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_58),
       (uVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectForKey__0269d700,local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,local_30);
    }
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPluginIconCustomTitles__026aed68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

