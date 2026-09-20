// executeSearchForText: @ 014bd6f4

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchManager::executeSearchForText_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ulong uVar6;
  ID local_60;
  ID local_58;
  byte local_49;
  ID local_48;
  long local_40;
  long local_38;
  int local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  FUN_014bdccc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_28;
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar4);
  if ((local_28 == 0) ||
     (lVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_2c = 1;
    goto LAB_014bdcb4;
  }
  *(undefined1 *)(local_18 + 8) = 1;
  lVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(local_18 + 0x20);
  local_38 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_objectForKeyedSubscript__0269d098,lVar4);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar2;
  if (lVar2 == 0) {
    local_49 = 0;
    IVar3 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = *(long *)(local_18 + 0x58);
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
    if (lVar4 == 0) {
      if (((*(byte *)(local_18 + 0xd) & 1) != 0) || ((*(byte *)(local_18 + 0xb) & 1) != 0))
      goto LAB_014bdbdc;
      _objc_storeStrong(local_18 + 0x28,local_28);
      *(undefined1 *)(local_18 + 0xb) = 1;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showLoadingState_026af528);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadOtherPluginsSections_026af530);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadCustomUIPluginsConfig_026af538);
      local_2c = 1;
    }
    else {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_matchedPluginClassesForKeywordFr_026af510,local_28);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_58;
      local_58 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_buildFastSectionsFromIndexForKey_026af520,local_28,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
      if (IVar3 != 0) {
        _objc_storeStrong(local_18 + 0x18,local_60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(local_18 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                   local_60,local_38);
        local_49 = 1;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadSearchUIAnimated__026af508,0);
      }
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_triggerMissingPluginLoadForKeywo_026af518,local_28,local_58,
                 (local_49 ^ 1) & 1);
      if ((IVar3 & 1) == 0) {
        bVar1 = 0;
        if (((*(byte *)(local_18 + 0xd) & 1) == 0) &&
           (bVar1 = 0, (*(byte *)(local_18 + 0xb) & 1) == 0)) {
          bVar1 = *(byte *)(local_18 + 0xc) ^ 1;
        }
        if ((bVar1 & 1) == 0) {
          local_2c = 0;
        }
        else {
          *(undefined1 *)(local_18 + 0xc) = 1;
          _objc_storeStrong(local_18 + 0x28,local_28);
          *(undefined1 *)(local_18 + 0xb) = 1;
          if ((local_49 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showLoadingState_026af528);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadOtherPluginsSections_026af530);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadCustomUIPluginsConfig_026af538);
          local_2c = 1;
        }
      }
      else {
        local_2c = 1;
      }
      _objc_storeStrong(&local_60,0);
      if (local_2c == 0) {
LAB_014bdbdc:
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_filterSectionsWithKeyword__026af540,local_28);
        if (*(long *)(local_18 + 0x18) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(local_18 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                     *(undefined8 *)(local_18 + 0x18),local_38);
          uVar6 = *(ulong *)(local_18 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_count_0269cfe0);
          if (100 < uVar6) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(local_18 + 0x20),PTR_s_removeAllObjects_0269d508);
          }
        }
        local_2c = 0;
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    _objc_storeStrong(local_18 + 0x18,lVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcRefineApplySearchHighlightsInS_026af500,local_40,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadSearchUIAnimated__026af508,0);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_matchedPluginClassesForKeywordFr_026af510,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_triggerMissingPluginLoadForKeywo_026af518,local_28,IVar3,0);
    local_2c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_014bdcb4:
  _objc_storeStrong(&local_28,0);
  return;
}

