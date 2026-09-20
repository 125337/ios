// FUN_006e303c @ 006e303c

void FUN_006e303c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_1c0;
  undefined *local_1b8;
  ulong local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined8 local_148;
  long local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  double local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c4;
  long local_c0;
  ulong local_b8;
  undefined1 auStack_b0 [128];
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    local_c4 = 1;
  }
  else {
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_integerInTask_forKey__026a6cc8,local_b8,
               _kWCRScheduledTaskKeyContentMode);
    puVar5 = PTR_WCRefineClearSessionHook_026ce348;
    local_d0 = puVar2;
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_30 = local_c0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_clearChatRecordsKeepingSessionsW_026a6d00);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_c4 = 1;
      local_d8 = puVar5;
    }
    else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar5 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,
                 local_b8,_kWCRScheduledTaskKeyRepositoryCodes);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = 0.0;
      local_e0 = puVar5;
      _memset(auStack_130,0,0x40);
      puVar5 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_b0,0x10)
      ;
      if (local_1b8 != (undefined *)0x0) {
        lVar6 = *local_120;
        local_1c0 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar6 != 0) {
              _objc_enumerationMutation(*local_120 - lVar6,puVar5);
            }
            uVar7 = *(undefined8 *)(local_128 + (long)local_1c0 * 8);
            local_f0 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_copy_0269d150);
            local_138 = uVar7;
            dVar3 = _dispatch_time(0,(long)(local_e8 * 1000000000.0));
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_138;
            local_168 = PTR___NSConcreteStackBlock_02578660;
            local_160 = 0xc2000000;
            local_15c = 0;
            local_158 = FUN_006e358c;
            local_150 = &DAT_0257a7a0;
            (*(code *)PTR__objc_retain_02578638)();
            lVar1 = local_c0;
            local_148 = uVar7;
            (*(code *)PTR__objc_retain_02578638)();
            local_140 = lVar1;
            _dispatch_after(dVar3,puVar2,&local_168);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_e8 = local_e8 + DAT_02323d00;
            _objc_storeStrong(&local_140);
            _objc_storeStrong(&local_148,0);
            _objc_storeStrong(&local_138,0);
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_b0,
                     0x10);
          local_1c0 = (undefined *)0x0;
        } while (local_1b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_c4 = 1;
      _objc_storeStrong(&local_e0,0);
    }
    else {
      uVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectForKeyedSubscript__0269d098,_kWCRScheduledTaskKeyTextContent);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_170 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = local_170, (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
         uVar4 == 0)) {
        local_c4 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_170,
                   local_c0);
        local_c4 = 0;
      }
      _objc_storeStrong(&local_170,0);
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

