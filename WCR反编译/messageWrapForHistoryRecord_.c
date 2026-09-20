// messageWrapForHistoryRecord: @ 01b2dc80

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::messageWrapForHistoryRecord_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_258;
  undefined *local_250;
  ID local_220;
  ID local_208;
  ID local_1e8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  ID local_188;
  ID local_180;
  ID local_178;
  long local_170;
  ulong local_168;
  long local_160;
  undefined *local_158;
  ID local_150;
  byte local_141;
  ID local_140;
  ID local_138;
  ID local_130;
  undefined *local_128;
  byte local_119;
  ID local_118;
  ID local_110;
  undefined *local_108;
  undefined *local_100;
  ID local_f8;
  undefined4 local_ec;
  ID local_e8;
  ID local_e0;
  ID local_d8;
  SEL local_d0;
  ID local_c8;
  ID local_c0;
  undefined1 auStack_b8 [128];
  long local_38 [3];
  
  local_38[2] = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  IVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_resolvedRecord__026beb38,local_d8);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = IVar1;
  if (IVar1 == 0) {
    local_1e8 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1e8;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_c0 = 0;
    local_ec = 1;
  }
  else {
    FUN_01b22c2c();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = IVar1;
    if (IVar1 == 0) {
      local_c0 = 0;
      local_ec = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_100 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_e0;
      local_108 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_119 = 0;
      if ((IVar2 & 1) == 0) {
        local_208 = 0;
      }
      else {
        local_208 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        local_119 = 1;
        local_118 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_119 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_118);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_110 = local_208;
      if (0 < (long)local_208) {
        local_128 = PTR_s_GetMsg_LocalID__0269d5e8;
        IVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
        if ((IVar1 & 1) != 0) {
          IVar1 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_128,local_e8,local_110);
          _objc_retainAutoreleasedReturnValue();
          local_130 = IVar1;
          if (IVar1 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_appendCandidateMessageWrap_toArr_026bee78,IVar1,local_100,
                       local_108);
          }
          _objc_storeStrong(&local_130,0);
        }
      }
      IVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_141 = 0;
      if ((IVar2 & 1) == 0) {
        local_220 = 0;
      }
      else {
        local_220 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
        _objc_retainAutoreleasedReturnValue();
        local_141 = 1;
        local_140 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_141 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_140);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      local_138 = local_220;
      if (0 < (long)local_220) {
        IVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_GetMsg_n64SvrID__0269d5f0,local_e8,local_220);
        _objc_retainAutoreleasedReturnValue();
        local_150 = IVar1;
        if (IVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_appendCandidateMessageWrap_toArr_026bee78,IVar1,local_100,
                     local_108);
        }
        _objc_storeStrong(&local_150,0);
      }
      if (0 < (long)local_110) {
        local_158 = PTR_s_GetMsg_LocalID__0269d5e8;
        IVar1 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
        if ((IVar1 & 1) != 0) {
          for (local_160 = 1; local_160 < 9; local_160 = local_160 + 1) {
            local_38[0] = local_110 - local_160;
            local_38[1] = local_110 + local_160;
            for (local_168 = 0; local_168 < 2; local_168 = local_168 + 1) {
              local_170 = local_38[local_168];
              if (0 < local_170) {
                IVar1 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_158,local_e8,local_170);
                _objc_retainAutoreleasedReturnValue();
                local_178 = IVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_appendCandidateMessageWrap_toArr_026bee78,IVar1,local_100,
                           local_108);
                _objc_storeStrong(&local_178,0);
              }
            }
          }
        }
      }
      local_180 = 0;
      local_188 = 0x8000000000000000;
      _memset(auStack_1d0,0,0x40);
      puVar3 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_b8,0x10)
      ;
      if (local_250 != (undefined *)0x0) {
        lVar5 = *local_1c0;
        local_258 = (undefined *)0x0;
        do {
          do {
            if (*local_1c0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar5,puVar3);
            }
            local_190 = *(undefined8 *)(local_1c8 + (long)local_258 * 8);
            IVar1 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_scoreMessageWrap_forRecord__026bee80,local_190,local_e0);
            if ((local_180 == 0) || ((long)local_188 < (long)IVar1)) {
              local_188 = IVar1;
              _objc_storeStrong(&local_180,local_190);
            }
            local_258 = local_258 + 1;
          } while (local_258 < local_250);
          local_250 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_b8,
                     0x10);
          local_258 = (undefined *)0x0;
        } while (local_250 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_c0 = local_180;
      if (local_180 == 0) {
        local_c0 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_ec = 1;
      _objc_storeStrong(&local_180);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_38[2]) {
    _objc_autoreleaseReturnValue(0);
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

