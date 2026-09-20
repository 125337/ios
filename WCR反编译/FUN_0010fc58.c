// FUN_0010fc58 @ 0010fc58

byte FUN_0010fc58(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_210;
  undefined *local_208;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  long local_100;
  int local_f4;
  ulong local_f0 [3];
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_2);
  uVar1 = local_c8;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_d0;
  local_d8 = uVar1;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_d8;
  local_f0[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) &&
     (uVar1 = local_f0[0], (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_b9 = 1;
    local_f4 = 1;
  }
  else {
    uVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_containsString__0269d0b0,&cf_WCRefineLeaveUser___);
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = local_d8,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_containsString__0269d0b0,&cf_WCRefineLeaveColor___),
        (uVar1 & 1) == 0)) &&
       (uVar1 = local_d8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_d8,PTR_s_containsString__0269d0b0,&cf_WCRefineRevokeUser___),
       (uVar1 & 1) == 0)) {
      uVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_containsString__0269d0b0,&cf_<_wc_custom_link_);
      if (((uVar1 & 1) == 0) ||
         (((uVar1 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf___),
           (uVar1 & 1) == 0 &&
           (uVar1 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf___),
           (uVar1 & 1) == 0)) &&
          ((uVar1 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf___),
           (uVar1 & 1) == 0 &&
           (uVar1 = local_d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf_yQN_J),
           (uVar1 & 1) == 0)))))) {
        uVar1 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf_0);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_f0[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_containsString__0269d0b0,&cf_0),
           (uVar1 & 1) == 0)) {
          uVar1 = local_f0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_hasPrefix__0269d320,&cf__);
          if (((uVar1 & 1) == 0) &&
             (uVar1 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsString__0269d0b0,&cf__),
             (uVar1 & 1) == 0)) {
            lVar5 = DAT_028c84e0;
            FUN_0010ee50();
            _objc_retainAutoreleasedReturnValue();
            local_100 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
            if ((lVar5 == 0) ||
               ((uVar1 = local_f0[0],
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0[0],PTR_s_isEqualToString__0269ccc8,local_100), (uVar1 & 1) == 0
                && (uVar1 = local_f0[0],
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_f0[0],PTR_s_isEqualToString__0269ccc8,&cf___), (uVar1 & 1) == 0)
                ))) {
              _memset(auStack_148,0,0x40);
              if (DAT_028c84e8 == (cfstringStruct *)0x0) {
                local_1d8 = &cf___;
              }
              else {
                local_1d8 = DAT_028c84e8;
              }
              local_b8 = local_1d8;
              if (DAT_028c8530 == (cfstringStruct *)0x0) {
                local_1e8 = &cf___;
              }
              else {
                local_1e8 = DAT_028c8530;
              }
              local_b0 = local_1e8;
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_b8,2);
              _objc_retainAutoreleasedReturnValue();
              local_208 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (local_208 != (undefined *)0x0) {
                lVar5 = *local_138;
                local_210 = (undefined *)0x0;
                do {
                  do {
                    if (*local_138 - lVar5 != 0) {
                      _objc_enumerationMutation(*local_138 - lVar5,puVar3);
                    }
                    uVar6 = *(ulong *)(local_140 + (long)local_210 * 8);
                    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                    local_108 = uVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                               PTR_s_newlineCharacterSet_0269ef38);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar6,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
                    _objc_retainAutoreleasedReturnValue();
                    uVar1 = uVar6;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    uVar2 = uVar1;
                    FUN_0010ee50();
                    _objc_retainAutoreleasedReturnValue();
                    local_150 = uVar2;
                    (*(code *)PTR__objc_release_02578630)(uVar1);
                    (*(code *)PTR__objc_release_02578630)(uVar6);
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                    uVar1 = local_150;
                    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
                    if (uVar1 == 0) {
                      local_f4 = 3;
                    }
                    else {
                      uVar1 = local_150;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_150,PTR_s_containsString__0269d0b0,&cf__);
                      if (((uVar1 & 1) == 0) &&
                         ((uVar1 = local_f0[0],
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_f0[0],PTR_s_isEqualToString__0269ccc8,local_150),
                          (uVar1 & 1) != 0 ||
                          (uVar1 = local_d8,
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_d8,PTR_s_isEqualToString__0269ccc8,local_150),
                          (uVar1 & 1) != 0)))) {
                        local_b9 = 1;
                        local_f4 = 1;
                      }
                      else {
                        local_f4 = 0;
                      }
                    }
                    _objc_storeStrong(&local_150,0);
                    if ((local_f4 != 0) && (local_f4 != 3)) goto LAB_0011059c;
                    local_210 = local_210 + 1;
                  } while (local_210 < local_208);
                  local_208 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                             auStack_a8,0x10);
                  local_210 = (undefined *)0x0;
                } while (local_208 != (undefined *)0x0);
              }
              local_f4 = 0;
LAB_0011059c:
              (*(code *)PTR__objc_release_02578630)(puVar3);
              if (local_f4 == 0) {
                local_b9 = 0;
                local_f4 = 1;
              }
            }
            else {
              local_b9 = 1;
              local_f4 = 1;
            }
            _objc_storeStrong(&local_100,0);
          }
          else {
            local_b9 = 1;
            local_f4 = 1;
          }
        }
        else {
          local_b9 = 1;
          local_f4 = 1;
        }
      }
      else {
        local_b9 = 1;
        local_f4 = 1;
      }
    }
    else {
      local_b9 = 1;
      local_f4 = 1;
    }
  }
  _objc_storeStrong(local_f0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

