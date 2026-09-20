// loadMessages @ 01bac280

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryViewController::loadMessages(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_198;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  ID local_138;
  undefined *local_130;
  byte local_128;
  byte local_121;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_messageRepositoryItems_0269d730);
  _objc_retainAutoreleasedReturnValue();
  local_198 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_198 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_198;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _memset(auStack_118,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1c0 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_1c8 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar2);
        }
        uVar5 = *(ulong *)(local_110 + (long)local_1c8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        puVar3 = local_d0;
        if ((uVar5 & 1) != 0) {
          uVar5 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_mutableCopy_0269d8a0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_1c8 = (undefined *)0x0;
    } while (local_1c0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_messageRepositorySortMode_026c0360);
  puVar3 = local_c0;
  local_120 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_messageRepositorySortAscending_026c0380);
  IVar1 = local_b0;
  puVar2 = local_d0;
  local_121 = (byte)puVar3;
  local_158 = PTR___NSConcreteGlobalBlock_02578658;
  local_150 = 0xd0800000;
  local_14c = 0;
  local_148 = FUN_01bac73c;
  local_140 = &DAT_0258b500;
  local_130 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = IVar1;
  local_128 = local_121 & 1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_sortUsingComparator__0269d168,&local_158);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setMessagesArray__026c03a8,local_d0);
  _objc_initWeak(auStack_160,local_b0);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_188 = PTR___NSConcreteStackBlock_02578660;
  local_180 = 0xc2000000;
  local_17c = 0;
  local_178 = FUN_01bacc84;
  local_170 = &DAT_0257be28;
  _objc_copyWeak(auStack_168,auStack_160);
  _dispatch_async(puVar2,&local_188);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(auStack_160);
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

