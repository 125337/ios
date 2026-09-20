// isBubbleOnlyPackNamed: @ 015cfec0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRefineWechatThemeStore::isBubbleOnlyPackNamed_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_1d8;
  undefined *local_1d0;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  byte local_f3;
  byte local_f2;
  byte local_f1;
  ID local_f0;
  ID local_e8;
  int local_dc;
  long local_d8;
  SEL local_d0;
  ID local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  lVar8 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_b9 = 0;
    local_dc = 1;
  }
  else {
    IVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bubbleKindCache_026b0f78);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_e8 == 0) {
      local_b0 = &DAT_028e3b60;
      local_b8 = 0;
      _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02587258);
      if (*local_b0 != -1) {
        _dispatch_once(local_b0,local_b8);
      }
      _objc_storeStrong(&local_b8,0);
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_repositoryPath_026aeb48);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_f1 = 0;
      local_f2 = 0;
      local_f3 = 0;
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = 0;
      if (((ulong)puVar5 & 1) != 0) {
        bVar1 = local_f1;
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((bVar1 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath_isDirectory__026a8f30,
                   local_f0,1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar5,0,4);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_108 = 0;
        _memset(auStack_150,0,0x40);
        puVar4 = local_100;
        (*(code *)PTR__objc_retain_02578638)();
        local_1d0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        if (local_1d0 != (undefined *)0x0) {
          lVar8 = *local_140;
          local_1d8 = (undefined *)0x0;
          do {
            do {
              if (*local_140 - lVar8 != 0) {
                _objc_enumerationMutation(*local_140 - lVar8,puVar4);
              }
              uVar9 = *(ulong *)(local_148 + (long)local_1d8 * 8);
              local_108 = local_108 + 1;
              local_110 = uVar9;
              if (800 < local_108) {
                local_f3 = 1;
                local_dc = 2;
                goto LAB_015d05ac;
              }
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_hasDirectoryPath_026b0ec0);
              if ((uVar9 & 1) == 0) {
                uVar9 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_158 = uVar7;
                (*(code *)PTR__objc_release_02578630)(uVar9);
                uVar9 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_isEqualToString__0269ccc8,&cf_css);
                if ((((uVar9 & 1) == 0) &&
                    (uVar9 = local_158,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_158,PTR_s_isEqualToString__0269ccc8,&cf_xml), (uVar9 & 1) == 0)
                    ) && (uVar9 = local_158,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_158,PTR_s_isEqualToString__0269ccc8,&cf_car),
                         (uVar9 & 1) == 0)) {
                  uVar9 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_isEqualToString__0269ccc8,&cf_png);
                  if (((uVar9 & 1) != 0) ||
                     (uVar9 = local_158,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_158,PTR_s_isEqualToString__0269ccc8,&cf_svg), (uVar9 & 1) != 0
                     )) {
                    uVar9 = local_110;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_110,PTR_s_lastPathComponent_026ca780);
                    _objc_retainAutoreleasedReturnValue();
                    uVar7 = uVar9;
                    FUN_015ca2a4();
                    _objc_retainAutoreleasedReturnValue();
                    local_160 = uVar7;
                    (*(code *)PTR__objc_release_02578630)(uVar9);
                    uVar9 = local_160;
                    FUN_015cc93c();
                    if ((uVar9 & 1) == 0) {
                      uVar9 = DAT_028e3b58;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (DAT_028e3b58,PTR_s_containsObject__0269cbb8,local_160);
                      if ((uVar9 & 1) != 0) goto LAB_015d04ec;
                      local_f3 = 1;
                      local_dc = 2;
                    }
                    else {
                      local_f2 = 1;
LAB_015d04ec:
                      local_dc = 0;
                    }
                    _objc_storeStrong(&local_160,0);
                    if (local_dc != 0) goto LAB_015d0524;
                  }
                  local_dc = 0;
                }
                else {
                  local_f3 = 1;
                  local_dc = 2;
                }
LAB_015d0524:
                _objc_storeStrong(&local_158,0);
                if (local_dc != 0) goto LAB_015d05ac;
              }
              local_1d8 = local_1d8 + 1;
            } while (local_1d8 < local_1d0);
            local_1d0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8
                       ,0x10);
            local_1d8 = (undefined *)0x0;
          } while (local_1d0 != (undefined *)0x0);
        }
        local_dc = 0;
LAB_015d05ac:
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_100,0);
      }
      bVar1 = 0;
      if ((local_f2 & 1) != 0) {
        bVar1 = local_f3 ^ 1;
      }
      IVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bubbleKindCache_026b0f78);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,bVar1 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar4,local_d8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_dc = 1;
      local_b9 = bVar1 & 1;
      _objc_storeStrong(&local_f0,0);
    }
    else {
      IVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_boolValue_026ca540);
      local_b9 = (byte)IVar2 & 1;
      local_dc = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b9 & 1;
}

