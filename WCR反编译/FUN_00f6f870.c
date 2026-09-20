// FUN_00f6f870 @ 00f6f870

void FUN_00f6f870(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  char *local_160;
  int local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  undefined *local_108;
  char *local_100 [2];
  cfstringStruct *local_f0;
  cfstringStruct *local_e8 [4];
  cfstringStruct *local_c8;
  undefined4 local_bc;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == (cfstringStruct *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar1;
  }
  else {
    local_c8 = (cfstringStruct *)0x0;
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_valueForKey__0269d128,&cf_m_arrSelectMsgLocalID);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_c8;
    local_c8 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_c8;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)pcVar3 & 1) == 0) ||
       (pcVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
       pcVar3 == (cfstringStruct *)0x0)) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_bc = 1;
      local_b0 = puVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      pcVar2 = local_b8;
      local_e8[0] = &cf___;
      pcVar3 = &cf_GetContact;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
      pcVar3 = local_b8;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = &cf_GetContact;
        _NSSelectorFromString();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = pcVar3;
        FUN_00f711c0(pcVar3,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_00f694c4();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_e8[0];
        local_e8[0] = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        _objc_storeStrong(&local_f0,0);
      }
      pcVar3 = local_e8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        puVar1 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_bc = 1;
        local_b0 = puVar1;
      }
      else {
        pcVar5 = "CMessageMgr";
        _objc_getClass();
        FUN_00f71024();
        _objc_retainAutoreleasedReturnValue();
        local_100[0] = pcVar5;
        if ((pcVar5 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
           ((ulong)pcVar5 & 1) == 0)) {
          puVar1 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_bc = 1;
          local_b0 = puVar1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_108 = puVar1;
          _memset(auStack_150,0,0x40);
          pcVar3 = local_c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_230 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          if (local_230 != (cfstringStruct *)0x0) {
            lVar6 = *local_140;
            local_238 = (cfstringStruct *)0x0;
            do {
              do {
                if (*local_140 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_140 - lVar6,pcVar3);
                }
                uVar7 = *(ulong *)(local_148 + (long)local_238 * 8);
                local_154 = 0;
                local_110 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10)
                ;
                if ((uVar7 & 1) == 0) {
                  uVar7 = local_110;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_110,PTR_s_respondsToSelector__026ca818,
                             PTR_s_longLongValue_0269d5e0);
                  if ((uVar7 & 1) != 0) {
                    uVar7 = local_110;
                    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_longLongValue_0269d5e0);
                    local_154 = (int)uVar7;
                  }
                }
                else {
                  uVar7 = local_110;
                  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_unsignedIntValue_0269db10);
                  local_154 = (int)uVar7;
                }
                if (local_154 != 0) {
                  pcVar5 = local_100[0];
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100[0],PTR_s_GetMsg_LocalID__0269d5e8,local_e8[0],local_154);
                  _objc_retainAutoreleasedReturnValue();
                  local_160 = pcVar5;
                  if (pcVar5 != (char *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_addObject__0269d180,pcVar5);
                  }
                  _objc_storeStrong(&local_160,0);
                }
                local_238 = (cfstringStruct *)((long)&local_238->field0_0x0 + 1);
              } while (local_238 < local_230);
              local_230 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,
                         auStack_a8,0x10);
              local_238 = (cfstringStruct *)0x0;
            } while (local_230 != (cfstringStruct *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          puVar1 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_copy_0269d150);
          local_bc = 1;
          local_b0 = puVar1;
          _objc_storeStrong(&local_108,0);
        }
        _objc_storeStrong(local_100,0);
      }
      _objc_storeStrong(local_e8,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

