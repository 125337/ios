// setPluginFeatureCustomTitles: @ 0204956c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setPluginFeatureCustomTitles_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  SEL SVar6;
  long lVar7;
  ulong local_160;
  ulong local_158;
  ulong local_138;
  ulong local_130;
  undefined4 local_124;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _memset(auStack_118,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allKeys_0269ef58);
  _objc_retainAutoreleasedReturnValue();
  local_158 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar7 = *local_108;
    local_160 = 0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,uVar3);
        }
        local_d8 = *(ulong *)(local_110 + local_160 * 8);
        uVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKey__0269e048,local_d8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_d8;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_120 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar4 = local_120;
        if ((uVar5 & 1) == 0) {
LAB_02049788:
          local_124 = 3;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar5 = local_d8;
          if ((uVar4 & 1) == 0) goto LAB_02049788;
          (*(code *)PTR__objc_retain_02578638)();
          uVar4 = local_120;
          local_130 = uVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = uVar4;
          uVar4 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          if ((uVar4 == 0) ||
             (uVar4 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0), uVar4 == 0)) {
            local_124 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_setObject_forKey__026ca9e8,local_138,local_130);
            local_124 = 0;
          }
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_130,0);
        }
        _objc_storeStrong(&local_120,0);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  IVar1 = local_c8;
  if (puVar2 == (undefined *)0x0) {
    SVar6 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar6);
  }
  else {
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    SVar6 = local_b8;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2);
    (*(code *)PTR__objc_release_02578630)(SVar6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

