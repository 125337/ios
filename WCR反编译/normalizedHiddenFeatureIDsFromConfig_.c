// normalizedHiddenFeatureIDsFromConfig: @ 01c8f074

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginFeatureManagementViewController::normalizedHiddenFeatureIDsFromConfig_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_168;
  ulong local_160;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  ulong local_d8;
  byte local_c9;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_featureEntryMapFromConfig__026c2a78,local_c0)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  local_c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_canHideFeedFeatureWithConfig__026c2a98,local_c0);
  local_c9 = (byte)IVar2;
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_pluginFeatureHiddenItems_026a8408);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_d8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar4;
  _memset(auStack_128,0,0x40);
  uVar3 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar5 = *local_118;
    local_168 = 0;
    do {
      do {
        if (*local_118 - lVar5 != 0) {
          _objc_enumerationMutation(*local_118 - lVar5,uVar3);
        }
        uVar6 = *(ulong *)(local_120 + local_168 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_e8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar6 & 1) != 0) {
          IVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_normalizedLegacyFeatureID__026c2a88,local_e8);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_c8;
          local_130 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,IVar1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (((IVar2 != 0) &&
              (IVar1 = local_130,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_isEqualToString__0269ccc8,&cf_plugin_management),
              (IVar1 & 1) == 0)) &&
             (((local_c9 & 1) != 0 ||
              (IVar1 = local_130,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_isEqualToString__0269ccc8,&cf_feed_author),
              (IVar1 & 1) == 0)))) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
          }
          _objc_storeStrong(&local_130,0);
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar4;
}

