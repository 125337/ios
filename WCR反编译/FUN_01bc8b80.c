// FUN_01bc8b80 @ 01bc8b80

void FUN_01bc8b80(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  ulong local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  undefined *local_130;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  int local_c4;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = param_1;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  local_c0 = uVar2;
  if ((uVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isCancelled_026a1c20), (uVar2 & 1) != 0)) {
    local_c4 = 1;
  }
  else {
    puVar3 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_d8 = (undefined *)0x0;
    _memset(auStack_120,0,0x40);
    puVar3 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_1b0 != (undefined *)0x0) {
      lVar8 = *local_110;
      local_1b8 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar8 != 0) {
            _objc_enumerationMutation(*local_110 - lVar8,puVar3);
          }
          local_e0 = *(undefined **)(local_118 + (long)local_1b8 * 8);
          uVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isCancelled_026a1c20);
          if ((uVar2 & 1) != 0) {
            local_c4 = 1;
            goto LAB_01bc90e8;
          }
          puVar4 = local_e0;
          FUN_01bc92e8();
          if (((ulong)puVar4 & 1) != 0) {
            puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            puVar5 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__NSFileSize_02578028);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__NSFileModificationDate_02578020);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_stringWithFormat__0269cca8,&cf______0f______);
            _objc_retainAutoreleasedReturnValue();
            local_130 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)();
            FUN_01bc93f8();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_d8;
            local_d8 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if (local_d8 == (undefined *)0x0) {
              puVar5 = local_e0;
              FUN_01bc946c(*(undefined8 *)(param_1 + 0x40));
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_d8;
              local_d8 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar4);
              puVar4 = local_d8;
              _objc_retainAutorelease();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGImage_0269e0e8);
              puVar5 = local_d8;
              if (puVar4 != (undefined *)0x0) {
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGImage_0269e0e8);
                _CGImageGetBytesPerRow();
                puVar4 = local_d8;
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGImage_0269e0e8);
                _CGImageGetHeight();
                local_138 = (long)puVar5 * (long)puVar4;
                FUN_01bc93f8();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
            }
            if (local_d8 == (undefined *)0x0) {
              local_c4 = 0;
            }
            else {
              local_c4 = 2;
            }
            _objc_storeStrong(&local_130);
            _objc_storeStrong(&local_128,0);
            if (local_c4 != 0) goto LAB_01bc90e8;
          }
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_1b8 = (undefined *)0x0;
      } while (local_1b0 != (undefined *)0x0);
    }
    local_c4 = 0;
LAB_01bc90e8:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_c4 == 0) || (local_c4 == 2)) {
      uVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isCancelled_026a1c20);
      puVar3 = PTR___dispatch_main_q_02578680;
      if ((uVar2 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_178 = PTR___NSConcreteStackBlock_02578660;
        local_170 = 0xc2000000;
        local_16c = 0;
        local_168 = FUN_01bc98a8;
        local_160 = &DAT_02588b00;
        _objc_copyWeak(auStack_140,param_1 + 0x38);
        uVar2 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_158 = uVar2;
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        puVar4 = local_d8;
        local_150 = uVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = puVar4;
        _dispatch_async(puVar3,&local_178);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_148);
        _objc_storeStrong(&local_150,0);
        _objc_storeStrong(&local_158,0);
        _objc_destroyWeak(auStack_140);
        local_c4 = 0;
      }
      else {
        local_c4 = 1;
      }
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0,0);
  _objc_autoreleasePoolPop(lVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

