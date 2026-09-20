// wcrAvatarRefreshPullLatestForAllContacts @ 01a6b3bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long
WCRefineGeneralFunctionViewController::wcrAvatarRefreshPullLatestForAllContacts
          (ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_350;
  undefined *local_348;
  undefined *local_2f8;
  ulong local_2d8;
  ulong local_2d0;
  undefined1 auStack_298 [8];
  long local_290;
  long *local_288;
  ulong local_258;
  byte local_249;
  undefined *local_248;
  byte local_239;
  undefined *local_238;
  byte local_229;
  undefined *local_228;
  byte local_219;
  undefined *local_218;
  byte local_209;
  undefined *local_208;
  undefined *local_200;
  undefined1 local_1f1;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  unsigned_long_long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  ID local_190;
  ID local_188;
  ID local_180;
  char *local_178;
  char *local_170;
  undefined4 local_164;
  ID local_160;
  SEL local_158;
  ID local_150;
  unsigned_long_long local_148;
  undefined1 auStack_140 [128];
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = param_2;
  local_150 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrAvatarRefreshServiceCenter_026bd278);
  _objc_retainAutoreleasedReturnValue();
  local_160 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     (param_1 & 1) == 0)) {
    local_148 = 0;
    local_164 = 1;
  }
  else {
    pcVar1 = "CContactMgr";
    _objc_getClass();
    pcVar2 = "MMHeadImageMgr";
    local_170 = pcVar1;
    _objc_getClass();
    local_178 = pcVar2;
    if ((local_170 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
      local_148 = 0;
      local_164 = 1;
    }
    else {
      IVar3 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_getService__0269d170,local_170);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_160;
      local_180 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_getService__0269d170,local_178);
      _objc_retainAutoreleasedReturnValue();
      local_188 = IVar4;
      if (IVar4 == 0) {
        local_148 = 0;
        local_164 = 1;
      }
      else {
        IVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_wcrAvatarRefreshAllUserNames__026bd280,local_180);
        _objc_retainAutoreleasedReturnValue();
        local_190 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_count_0269cfe0);
        if (IVar3 == 0) {
          local_148 = 0;
        }
        else {
          local_198 = PTR_s_updateUsrHeadImg_forCategory_isH_026ab698;
          local_1a0 = PTR_s_updateUsrHeadImg_forCategory__026ab6a0;
          local_1a8 = 0;
          _memset(auStack_1f0,0,0x40);
          IVar3 = local_190;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d0 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,
                     0x10);
          if (local_2d0 != 0) {
            lVar7 = *local_1e0;
            local_2d8 = 0;
            do {
              do {
                if (*local_1e0 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_1e0 - lVar7,IVar3);
                }
                uVar9 = *(ulong *)(local_1e8 + local_2d8 * 8);
                local_1b0 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_hasSuffix__0269d018,&cf__chatroom)
                ;
                local_1f1 = (undefined1)uVar9;
                local_209 = 0;
                local_219 = 0;
                local_229 = 0;
                local_239 = 0;
                local_249 = 0;
                if ((uVar9 & 1) == 0) {
                  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
                  _objc_retainAutoreleasedReturnValue();
                  local_239 = 1;
                  local_2f8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  local_238 = puVar6;
                  local_c0 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_c0,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_249 = 1;
                  local_248 = local_2f8;
                }
                else {
                  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
                  _objc_retainAutoreleasedReturnValue();
                  local_209 = 1;
                  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_208 = puVar6;
                  local_b8 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
                  _objc_retainAutoreleasedReturnValue();
                  local_219 = 1;
                  local_2f8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  local_218 = puVar5;
                  local_b0 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
                  _objc_retainAutoreleasedReturnValue();
                  local_229 = 1;
                  local_228 = local_2f8;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_200 = local_2f8;
                if ((local_249 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_248);
                }
                if ((local_239 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_238);
                }
                if ((local_229 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_228);
                }
                if ((local_219 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_218);
                }
                if ((local_209 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_208);
                }
                _memset(auStack_298,0,0x40);
                puVar6 = local_200;
                (*(code *)PTR__objc_retain_02578638)();
                local_348 = puVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                           auStack_140,0x10);
                if (local_348 != (undefined *)0x0) {
                  lVar8 = *local_288;
                  local_350 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_288 - lVar8 != 0) {
                        _objc_enumerationMutation(*local_288 - lVar8,puVar6);
                      }
                      uVar9 = *(ulong *)(local_290 + (long)local_350 * 8);
                      local_258 = uVar9;
                      (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_unsignedCharValue_026a0a00);
                      IVar4 = local_188;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_188,PTR_s_respondsToSelector__026ca818,local_198);
                      if ((IVar4 & 1) == 0) {
                        IVar4 = local_188;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_188,PTR_s_respondsToSelector__026ca818,local_1a0);
                        if ((IVar4 & 1) != 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_188,local_1a0,local_1b0,uVar9 & 0xff);
                          local_1a8 = local_1a8 + 1;
                        }
                      }
                      else {
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_188,local_198,local_1b0,uVar9 & 0xff,0);
                        local_1a8 = local_1a8 + 1;
                      }
                      local_350 = local_350 + 1;
                    } while (local_350 < local_348);
                    local_348 = puVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_298,
                               auStack_140,0x10);
                    local_350 = (undefined *)0x0;
                  } while (local_348 != (undefined *)0x0);
                }
                (*(code *)PTR__objc_release_02578630)(puVar6);
                _objc_storeStrong(&local_200,0);
                local_2d8 = local_2d8 + 1;
              } while (local_2d8 < local_2d0);
              local_2d0 = IVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                         auStack_a8,0x10);
              local_2d8 = 0;
            } while (local_2d0 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_148 = local_1a8;
        }
        local_164 = 1;
        _objc_storeStrong(&local_190,0);
      }
      _objc_storeStrong(&local_188);
      _objc_storeStrong(&local_180,0);
    }
  }
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_148;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

