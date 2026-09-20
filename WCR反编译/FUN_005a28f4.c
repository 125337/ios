// FUN_005a28f4 @ 005a28f4

void FUN_005a28f4(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong local_220;
  ulong local_218;
  char *local_160;
  long local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined *local_108;
  ulong local_100;
  undefined *local_f8;
  char *local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined4 local_d8;
  undefined1 local_d1;
  ulong local_d0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_d1 = 0;
  bVar2 = true;
  uVar1 = local_b8 != 0;
  if ((bool)uVar1) {
    uVar3 = local_b8;
    FUN_005c00b4();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 != 0;
    local_d1 = uVar1;
    local_d0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_d1;
  }
  local_d1 = uVar1;
  if (bVar2) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = 1;
    local_b0 = puVar4;
  }
  else {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar3;
    FUN_0059d260(uVar3,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_e8 = uVar5;
    if (uVar5 - 0x1a == 0) {
      puVar4 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = 1;
      local_b0 = puVar4;
    }
    else {
      pcVar6 = "WCMomentsForwardUtilities";
      _objc_getClass(uVar5 - 0x1a);
      local_f8 = PTR_s_messageWrapForMediaItem_inDataIt_026a59e8;
      local_f0 = pcVar6;
      if ((pcVar6 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,
                     PTR_s_messageWrapForMediaItem_inDataIt_026a59e8), ((ulong)pcVar6 & 1) == 0)) {
        puVar4 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = 1;
        local_b0 = puVar4;
      }
      else {
        uVar3 = local_e0;
        FUN_0059d260(local_e0,&cf_mediaList);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_100 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((uVar3 & 1) == 0) ||
           (uVar3 = local_100, (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0)
           , uVar3 == 0)) {
          puVar4 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = 1;
          local_b0 = puVar4;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_108 = puVar4;
          _memset(auStack_150,0,0x40);
          uVar3 = local_100;
          (*(code *)PTR__objc_retain_02578638)();
          local_218 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          if (local_218 != 0) {
            lVar8 = *local_140;
            local_220 = 0;
            do {
              do {
                if (*local_140 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_140 - lVar8,uVar3);
                }
                lVar9 = *(long *)(local_148 + local_220 * 8);
                local_110 = lVar9;
                FUN_0059d260(lVar9,&cf_type);
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar9;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(lVar9);
                local_158 = lVar7;
                if ((((lVar7 == 1) || (lVar7 == 2)) || (lVar7 == 3)) || (lVar7 == 5)) {
                  pcVar6 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_f8,local_110,local_b8);
                  _objc_retainAutoreleasedReturnValue();
                  local_160 = pcVar6;
                  if (pcVar6 != (char *)0x0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_addObject__0269d180,pcVar6);
                  }
                  _objc_storeStrong(&local_160,0);
                }
                local_220 = local_220 + 1;
              } while (local_220 < local_218);
              local_218 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,
                         auStack_a8,0x10);
              local_220 = 0;
            } while (local_218 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          puVar4 = local_108;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar4;
          local_d8 = 1;
          _objc_storeStrong(&local_108,0);
        }
        _objc_storeStrong(&local_100,0);
      }
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

