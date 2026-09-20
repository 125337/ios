// wcrPickProviderForKind: @ 017d8610

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineAISettingsViewController::wcrPickProviderForKind_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ID IVar6;
  long lVar7;
  int local_1d8;
  int local_1cc;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  ulong local_138;
  undefined1 auStack_130 [11];
  undefined1 local_125;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  _objc_initWeak(auStack_d0,local_b0);
  _memset(auStack_118,0,0x40);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_1a0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1a0 != (undefined *)0x0) {
    lVar7 = *local_108;
    local_1a8 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,puVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + (long)local_1a8 * 8);
        uVar5 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,&cf_image);
        if ((uVar5 & 1) == 0) {
          uVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isEqualToString__0269ccc8,&cf_video);
          if ((uVar5 & 1) == 0) {
            uVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_supportsChat_026aad10);
            local_1d8 = (int)uVar3;
          }
          else {
            uVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_supportsVideo_026aad20);
            local_1d8 = (int)uVar3;
          }
          local_1cc = local_1d8;
        }
        else {
          uVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_supportsImage_026aad18);
          local_1cc = (int)uVar3;
        }
        IVar6 = local_b0;
        puVar1 = local_c8;
        local_125 = local_1cc != 0;
        if ((bool)local_125) {
          uVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_017d8bc8;
          local_148 = &DAT_0257c978;
          _objc_copyWeak(auStack_130,auStack_d0);
          uVar4 = local_d8;
          (*(code *)PTR__objc_retain_02578638)();
          uVar5 = local_c0;
          local_140 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar6,PTR_s_actionWithTitle_block__026b5340,uVar3,&local_160);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(IVar6);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_140,0);
          _objc_destroyWeak(auStack_130);
        }
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_1a8 = (undefined *)0x0;
    } while (local_1a0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_showSheetTitle_actions__026b5348,&cf_bs_S,local_c8);
  _objc_destroyWeak(auStack_d0);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

