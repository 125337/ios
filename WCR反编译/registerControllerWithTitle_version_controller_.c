// registerControllerWithTitle:version:controller: @ 0176e39c

/* Function Stack Size: 0x28 bytes */

void __thiscall
WCRefinePluginHubManager::registerControllerWithTitle_version_controller_
          (WCRefinePluginHubManager *this,ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  byte bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_258;
  uint local_218;
  ulong local_1f8;
  ulong local_1f0;
  cfstringStruct *local_1c0;
  ID local_1a0;
  ID local_198;
  byte local_18a;
  byte local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  byte local_171;
  cfstringStruct *local_170;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_102;
  byte local_101;
  undefined *local_100;
  cfstringStruct *local_f8;
  long local_f0;
  undefined4 local_e4;
  long local_e0 [2];
  long local_d0;
  cfstringStruct *local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  _CFAbsoluteTimeGetCurrent();
  lVar10 = local_d0;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = lVar10;
  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
  if (lVar10 == 0) {
    local_e4 = 1;
  }
  else {
    lVar10 = local_c0;
    FUN_0176d368();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = lVar10;
    (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0);
    if (lVar10 == 0) {
      _objc_storeStrong(&local_f0,local_e0[0]);
    }
    pcVar11 = local_c8;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar11 & 1) == 0) {
      local_1c0 = &::cf___;
    }
    else {
      local_1c0 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_b0;
    local_f8 = local_1c0;
    local_100 = (undefined *)0x0;
    local_101 = 0;
    local_102 = 0;
    local_110 = (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar2);
    _memset(auStack_158,0,0x40);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_plugins_026b43a8);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f0 != 0) {
      lVar10 = *local_148;
      local_1f8 = 0;
      do {
        do {
          if (*local_148 - lVar10 != 0) {
            _objc_enumerationMutation(*local_148 - lVar10,IVar4);
          }
          pcVar11 = *(cfstringStruct **)(local_150 + local_1f8 * 8);
          local_171 = 0;
          local_118 = pcVar11;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isController_026b1a20);
          local_218 = 0;
          if (((ulong)pcVar11 & 1) != 0) {
            pcVar11 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_controller_0269cff8);
            _objc_retainAutoreleasedReturnValue();
            local_171 = 1;
            local_170 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_218 = (uint)pcVar11;
          }
          if ((local_171 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          if ((local_218 & 1) != 0) {
            _objc_storeStrong(&local_100,local_118);
            local_189 = 0;
            pcVar11 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_version_026b43b0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar5 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar5 & 1) == 0) {
              local_258 = &::cf___;
            }
            else {
              local_258 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_version_026b43b0);
              _objc_retainAutoreleasedReturnValue();
              local_189 = 1;
              local_188 = local_258;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_180 = local_258;
            if ((local_189 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_188);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            pcVar11 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_isEqualToString__0269ccc8,local_f8);
            local_18a = ((byte)pcVar11 ^ 1) & 1;
            pcVar11 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_title_0269d250);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 1;
            if (((ulong)pcVar5 & 1) != 0) {
              bVar1 = local_18a;
            }
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            if ((bVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setTitle__0269cef0,local_f0);
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setVersion__026a7018,local_f8);
              local_102 = 1;
            }
            pcVar11 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_identifier_026a4a88);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar11;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(pcVar11);
            IVar6 = local_b0;
            if (pcVar5 != (cfstringStruct *)0x0) {
              pcVar11 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_identifier_026a4a88);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar6,PTR_s_overrideForPluginIdentifier__026b43b8);
              _objc_retainAutoreleasedReturnValue();
              local_198 = IVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar11);
              IVar6 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_version);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (IVar6 != 0) {
                IVar6 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_versionBase);
                _objc_retainAutoreleasedReturnValue();
                IVar7 = IVar6;
                FUN_0176d368();
                _objc_retainAutoreleasedReturnValue();
                local_1a0 = IVar7;
                (*(code *)PTR__objc_release_02578630)(IVar6);
                IVar6 = local_1a0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
                if ((IVar6 == 0) ||
                   (IVar6 = local_1a0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1a0,PTR_s_isEqualToString__0269ccc8,local_f8), (IVar6 & 1) == 0)
                   ) {
                  pcVar5 = local_118;
                  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_identifier_026a4a88);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = pcVar5;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  pcVar11 = local_110;
                  local_110 = pcVar8;
                  (*(code *)PTR__objc_release_02578630)(pcVar11);
                  (*(code *)PTR__objc_release_02578630)(pcVar5);
                }
                _objc_storeStrong(&local_1a0,0);
              }
              _objc_storeStrong(&local_198,0);
            }
            local_e4 = 2;
            _objc_storeStrong(&local_180,0);
            goto LAB_0176ec98;
          }
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    local_e4 = 0;
LAB_0176ec98:
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if (local_100 == (undefined *)0x0) {
      puVar9 = PTR_WCRefinePluginHubItem_026cee50;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefinePluginHubItem_026cee50,PTR_s_new_0269d288);
      puVar3 = local_100;
      local_100 = puVar9;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setIsController__026b43c0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setTitle__0269cef0,local_f0);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setVersion__026a7018,local_f8);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setController__0269d2d8,local_e0[0]);
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_plugins_026b43a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_101 = 1;
      local_102 = 1;
    }
    _objc_sync_exit(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar11 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
    if (pcVar11 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setOverrideValue_key_identifier__026b43c8,0,&cf_version,local_110);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setOverrideValue_key_identifier__026b43c8,0,&cf_versionBase,
                 local_110);
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_inheritCustomizationIfNeededForP_026b43d0,local_100);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_markSessionRegistrationForPlugin_026b43d8,local_100);
    if ((local_102 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scheduleRegistryPublishIfNeeded_026b43e0)
      ;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    local_e4 = 0;
  }
  _objc_storeStrong(local_e0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

