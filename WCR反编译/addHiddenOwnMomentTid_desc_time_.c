// addHiddenOwnMomentTid:desc:time: @ 0205b270

/* Function Stack Size: 0x28 bytes */

void WCRefineConfig::addHiddenOwnMomentTid_desc_time_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  cfstringStruct *local_220;
  ulong local_1e8;
  ulong local_1e0;
  cfstringStruct *local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  ID local_130;
  int local_124;
  unsigned_long_long local_120;
  cfstringStruct *local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_118 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_118,param_4);
  uVar2 = local_110;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_120 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_110, (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_124 = 1;
  }
  else {
    IVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_momentsHiddenOwnMoments_026c11f0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_130 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _memset(auStack_178,0,0x40);
    IVar3 = local_130;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_1e0 != 0) {
      lVar8 = *local_168;
      local_1e8 = 0;
      do {
        do {
          if (*local_168 - lVar8 != 0) {
            _objc_enumerationMutation(*local_168 - lVar8,IVar3);
          }
          uVar9 = *(ulong *)(local_170 + local_1e8 * 8);
          local_138 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_objectForKey__0269e048,&cf_tid);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar9);
          if ((uVar2 & 1) != 0) {
            local_124 = 1;
            goto LAB_0205b528;
          }
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10
                  );
        local_1e8 = 0;
      } while (local_1e0 != 0);
    }
    local_124 = 0;
LAB_0205b528:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    pcVar5 = local_118;
    if (local_124 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar5 & 1) == 0) {
        local_220 = &::cf___;
      }
      else {
        local_220 = local_118;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = local_220;
      (*(code *)PTR__objc_msgSend_02578628)(local_220,PTR_s_length_0269cca0);
      pcVar5 = local_180;
      if ((cfstringStruct *)0x3c < local_220) {
        local_f0 = 0;
        local_f8 = 0x3c;
        local_e8 = 0;
        local_e0 = 0x3c;
        pcVar6 = local_180;
        puVar1 = PTR_s_rangeOfComposedCharacterSequence_026a44a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_rangeOfComposedCharacterSequence_026a44a0,0,0x3c);
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_substringWithRange__0269d138,pcVar6,puVar1);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_180;
        local_180 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      IVar3 = local_130;
      local_d8 = &cf_tid;
      local_c0 = local_110;
      local_d0 = &cf_desc;
      local_b8 = local_180;
      local_c8 = &cf_time;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_120);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_setMomentsHiddenOwnMoments__026ca308,local_130);
      _objc_storeStrong(&local_180,0);
      local_124 = 0;
    }
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

