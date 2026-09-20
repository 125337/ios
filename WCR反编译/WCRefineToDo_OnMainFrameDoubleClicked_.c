// WCRefineToDo_OnMainFrameDoubleClicked: @ 007fc35c

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_OnMainFrameDoubleClicked_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *local_328;
  undefined *local_320;
  undefined *local_2e0;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  code *local_268;
  undefined *local_260;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  long local_208;
  undefined *local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  undefined *local_1c8;
  int local_1bc;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  undefined *local_170;
  ID local_168;
  cfstringStruct *local_160;
  long local_158;
  char *local_150;
  byte local_141;
  undefined8 local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_140;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(puVar1,param_3);
  local_141 = (byte)puVar1;
  FUN_007f4174();
  FUN_007f424c(1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_WCRefineToDo_OnMainFrameDoubleCl_026a87b8,local_140);
  uVar2 = (ulong)(local_141 & 1);
  FUN_007f424c();
  FUN_007f4368();
  if ((uVar2 & 1) != 0) {
    pcVar3 = "NewMainFrameViewController";
    _objc_getClass();
    local_158 = 0;
    pcVar4 = &cf_getNewMainFrameViewController;
    local_150 = pcVar3;
    _NSSelectorFromString();
    IVar5 = local_130;
    local_160 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_respondsToSelector__026ca818,pcVar4);
    if ((IVar5 & 1) != 0) {
      IVar5 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,local_160);
      _objc_retainAutoreleasedReturnValue();
      local_168 = IVar5;
      if ((local_150 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,local_150),
         (IVar5 & 1) != 0)) {
        _objc_storeStrong(&local_158,local_168);
      }
      _objc_storeStrong(&local_168,0);
    }
    if (local_150 != (char *)0x0) {
      local_170 = (undefined *)0x0;
      _memset(auStack_1b8,0,0x40);
      puVar6 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_2a0 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      if (local_2a0 != (undefined *)0x0) {
        lVar10 = *local_1a8;
        local_2a8 = (undefined *)0x0;
        do {
          do {
            if (*local_1a8 - lVar10 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar10,puVar7);
            }
            uVar2 = *(ulong *)(local_1b0 + (long)local_2a8 * 8);
            local_178 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKeyWindow_0269cd70);
            if ((uVar2 & 1) != 0) {
              _objc_storeStrong(&local_170,local_178);
              local_1bc = 2;
              goto LAB_007fc64c;
            }
            local_2a8 = local_2a8 + 1;
          } while (local_2a8 < local_2a0);
          local_2a0 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_2a8 = (undefined *)0x0;
        } while (local_2a0 != (undefined *)0x0);
      }
      local_1bc = 0;
LAB_007fc64c:
      (*(code *)PTR__objc_release_02578630)(puVar7);
      if (local_170 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_170;
        local_170 = puVar9;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      puVar6 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1d1 = 0;
      local_1e1 = 0;
      local_1f1 = 0;
      if (puVar6 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1f1 = 1;
        local_1f0 = local_2e0;
      }
      else {
        puVar7 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_rootViewController_026ca820);
        _objc_retainAutoreleasedReturnValue();
        local_1d1 = 1;
        local_1d0 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_2e0,PTR_s_arrayWithObject__0269d538);
        _objc_retainAutoreleasedReturnValue();
        local_1e1 = 1;
        local_1e0 = local_2e0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = local_2e0;
      if ((local_1f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f0);
      }
      if ((local_1e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e0);
      }
      if ((local_1d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      do {
        puVar6 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_count_0269cfe0);
        if (puVar6 == (undefined *)0x0 || local_158 != 0) break;
        puVar6 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_200 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_removeObjectAtIndex__0269d530,0);
        puVar6 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_isKindOfClass__0269cd68,local_150);
        if (((ulong)puVar6 & 1) == 0) {
          _memset(auStack_248,0,0x40);
          puVar6 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_childViewControllers_0269d618);
          _objc_retainAutoreleasedReturnValue();
          local_320 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_320 != (undefined *)0x0) {
            lVar10 = *local_238;
            local_328 = (undefined *)0x0;
            do {
              do {
                if (*local_238 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_238 - lVar10,puVar6);
                }
                local_208 = *(long *)(local_240 + (long)local_328 * 8);
                if (local_208 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c8,PTR_s_addObject__0269d180,local_208);
                }
                local_328 = local_328 + 1;
              } while (local_328 < local_320);
              local_320 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,
                         auStack_128,0x10);
              local_328 = (undefined *)0x0;
            } while (local_320 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar7 = local_200;
          (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_presentedViewController_0269d448);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          puVar6 = local_1c8;
          if (puVar7 != (undefined *)0x0) {
            puVar7 = local_200;
            (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_presentedViewController_0269d448);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          local_1bc = 0;
        }
        else {
          _objc_storeStrong(&local_158,local_200);
          local_1bc = 5;
        }
        _objc_storeStrong(&local_200,0);
      } while (local_1bc == 0);
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_170,0);
    }
    _objc_initWeak(auStack_250,local_158);
    puVar6 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_278 = PTR___NSConcreteStackBlock_02578660;
    local_270 = 0xc2000000;
    local_26c = 0;
    local_268 = FUN_007fccdc;
    local_260 = &DAT_0257be28;
    _objc_copyWeak(auStack_258,auStack_250);
    _dispatch_async(puVar6,&local_278);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_destroyWeak(auStack_258);
    _objc_destroyWeak(auStack_250);
    _objc_storeStrong(&local_158,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

