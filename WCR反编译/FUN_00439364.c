// FUN_00439364 @ 00439364

byte FUN_00439364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined *local_118;
  undefined *local_110;
  ulong local_108;
  undefined *local_100;
  char *local_f8;
  undefined *local_f0;
  char *local_e8;
  undefined4 local_e0;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  byte local_b1;
  undefined1 auStack_b0 [128];
  char *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_3);
  if (((local_c0 == 0) || (lVar5 = local_c8, FUN_0043829c(), lVar5 == 0)) ||
     (uVar1 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_b1 = 0;
    local_e0 = 1;
  }
  else {
    pcVar2 = "FavoritesRecordUtil";
    _objc_getClass();
    local_f0 = PTR_s_ConvertMsgList2MsgWrap__026a3a30;
    local_e8 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_ConvertMsgList2MsgWrap__026a3a30)
       , ((ulong)pcVar2 & 1) == 0)) {
      local_b1 = 0;
      local_e0 = 1;
    }
    else {
      pcVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_f0,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_b1 = 0;
        local_e0 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_c0;
        local_100 = puVar3;
        FUN_004399e4(local_c0,local_d0);
        _objc_retainAutoreleasedReturnValue();
        local_108 = uVar1;
        if (uVar1 == 0) {
          local_b1 = 0;
        }
        else {
          if (DAT_028ca888 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = DAT_028ca888;
            DAT_028ca888 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca888,PTR_s_addObject__0269d180,local_108);
          local_110 = PTR_s_forwardMsgList_msgOriginList_toC_026a3a38;
          uVar1 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forwardMsgList_msgOriginList_toC_026a3a38);
          if ((uVar1 & 1) == 0) {
            local_118 = PTR_s_ForwardMsgList_ToContact_batchRe_026a3a40;
            uVar1 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_respondsToSelector__026ca818,
                       PTR_s_ForwardMsgList_ToContact_batchRe_026a3a40);
            if ((uVar1 & 1) == 0) {
              local_b1 = 0;
            }
            else {
              _memset(auStack_160,0,0x40);
              uVar1 = local_d0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1e0 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,
                         auStack_b0,0x10);
              if (local_1e0 != 0) {
                lVar5 = *local_150;
                local_1e8 = 0;
                do {
                  do {
                    if (*local_150 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_150 - lVar5,uVar1);
                    }
                    local_120 = *(undefined8 *)(local_158 + local_1e8 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)(local_108,local_118,local_100,local_120,1)
                    ;
                    local_1e8 = local_1e8 + 1;
                  } while (local_1e8 < local_1e0);
                  local_1e0 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,
                             auStack_b0,0x10);
                  local_1e8 = 0;
                } while (local_1e0 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar1);
              local_b1 = 1;
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,local_110,local_100,local_c8,local_d0,1,0);
            local_b1 = 1;
          }
        }
        local_e0 = 1;
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_100,0);
      }
      _objc_storeStrong(&local_f8,0);
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

