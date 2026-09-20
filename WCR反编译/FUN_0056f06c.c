// FUN_0056f06c @ 0056f06c

void FUN_0056f06c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  ulong local_208;
  ulong local_200;
  ulong local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  cfstringStruct *local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8 [3];
  ulong local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if (local_c0 == 0) {
    local_b0 = (cfstringStruct *)0x0;
    local_c4 = 1;
    goto LAB_0056fa7c;
  }
  uVar1 = local_c0;
  FUN_00570434(local_c0,&cf_refCommentID);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_c0;
  local_d0 = uVar1;
  FUN_00570434(local_c0,&cf_refComment64ID);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_c0;
  local_e8[0] = uVar7;
  FUN_00570434(local_c0,&cf_commentID);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = local_c0;
  local_f0 = uVar1;
  FUN_00570434(local_c0,&cf_comment64ID);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_d0;
  local_f8 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (((uVar1 == 0) ||
      (uVar1 = local_d0,
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,local_f0),
      (uVar1 & 1) != 0)) &&
     ((uVar1 = local_e8[0], (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0)
      , uVar1 == 0 ||
      (uVar1 = local_e8[0],
      (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_isEqualToString__0269ccc8,local_f8),
      (uVar1 & 1) != 0)))) {
    local_b0 = (cfstringStruct *)0x0;
    local_c4 = 1;
  }
  else {
    local_100 = 0;
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_commentUsers_026a4730);
    if ((uVar1 & 1) != 0) {
      uVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_commentUsers_026a4730);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_100;
      local_100 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_100;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
LAB_0056f6d0:
      pcVar6 = &cf_WCUserComment;
      _NSClassFromString();
      local_160 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_b0 = (cfstringStruct *)0x0;
        local_c4 = 1;
      }
      else {
        _objc_alloc_init();
        local_168 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_b0 = (cfstringStruct *)0x0;
          local_c4 = 1;
        }
        else {
          uVar1 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          if ((uVar1 != 0) &&
             (pcVar6 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_setCommentID__026a4ef0),
             ((ulong)pcVar6 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setCommentID__026a4ef0,local_d0);
          }
          uVar1 = local_e8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0);
          if ((uVar1 != 0) &&
             (pcVar6 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_setComment64ID__026a5200)
             , ((ulong)pcVar6 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_setComment64ID__026a5200,local_e8[0]);
          }
          uVar1 = local_c0;
          FUN_00570434(local_c0,&cf_refUserName);
          _objc_retainAutoreleasedReturnValue();
          local_170 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
          if (uVar1 != 0) {
            pcVar6 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_setUsername__026a2510);
            if (((ulong)pcVar6 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setUsername__026a2510,local_170)
              ;
            }
            pcVar6 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_setNickname__026a4eb8);
            if (((ulong)pcVar6 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setNickname__026a4eb8,local_170)
              ;
            }
          }
          pcVar6 = local_168;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar6;
          local_c4 = 1;
          _objc_storeStrong(&local_170,0);
        }
        _objc_storeStrong(&local_168,0);
      }
    }
    else {
      _memset(auStack_148,0,0x40);
      uVar1 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      if (local_200 != 0) {
        lVar5 = *local_138;
        local_208 = 0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,uVar1);
            }
            pcVar6 = *(cfstringStruct **)(local_140 + local_208 * 8);
            local_108 = pcVar6;
            if ((long)pcVar6 - local_c0 != 0) {
              FUN_00570434((long)pcVar6 - local_c0,pcVar6,&cf_commentID);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = local_108;
              local_150 = pcVar6;
              FUN_00570434(local_108,&cf_comment64ID);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = local_d0;
              local_158 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
              if ((uVar7 == 0) ||
                 (pcVar6 = local_150,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_150,PTR_s_isEqualToString__0269ccc8,local_d0),
                 ((ulong)pcVar6 & 1) == 0)) {
                uVar4 = local_e8[0];
                (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_length_0269cca0);
                uVar7 = 0;
                if (uVar4 != 0) {
                  pcVar6 = local_158;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_isEqualToString__0269ccc8,local_e8[0]);
                  uVar7 = (ulong)pcVar6 & 0xffffffff;
                  if (((ulong)pcVar6 & 1) != 0) goto LAB_0056f584;
                }
                local_c4 = 0;
              }
              else {
LAB_0056f584:
                pcVar6 = local_108;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = pcVar6;
                uVar7 = 1;
                local_c4 = 1;
              }
              _objc_storeStrong(uVar7,&local_158);
              _objc_storeStrong(&local_150,0);
              if (local_c4 != 0) goto LAB_0056f688;
            }
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_208 = 0;
        } while (local_200 != 0);
      }
      local_c4 = 0;
LAB_0056f688:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c4 == 0) goto LAB_0056f6d0;
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(local_e8,0);
  _objc_storeStrong(&local_d0,0);
LAB_0056fa7c:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

