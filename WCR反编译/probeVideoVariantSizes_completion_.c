// probeVideoVariantSizes:completion: @ 0102d3e4

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::probeVideoVariantSizes_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  dispatch_group_t pdVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  dispatch_queue_t pdVar7;
  long lVar8;
  long lVar9;
  undefined8 in_d0;
  ulong local_1f8;
  ulong local_1f0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  dispatch_group_t local_1a8;
  ulong local_1a0;
  long local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  long local_168;
  dispatch_group_t local_160;
  undefined *local_158;
  ID local_150;
  ID local_148;
  undefined *local_140;
  byte local_131;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  dispatch_group_t local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  long local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3,param_3,param_4,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar3 == 0) {
    if (local_c8 != 0) {
      (**(code **)(local_c8 + 0x10))(local_c8,*(undefined8 *)PTR____NSArray0___02578280);
    }
    local_cc = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    local_d8 = in_d0;
    local_e0 = _dispatch_group_create();
    _memset(auStack_128,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1f0 != 0) {
      lVar8 = *local_118;
      local_1f8 = 0;
      do {
        do {
          if (*local_118 - lVar8 != 0) {
            _objc_enumerationMutation(*local_118 - lVar8,uVar3);
          }
          lVar9 = *(long *)(local_120 + local_1f8 * 8);
          local_e8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_dataSize_026adaa8);
          local_131 = 0;
          bVar2 = true;
          if (lVar9 < 1) {
            lVar9 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_url_026a5a28);
            _objc_retainAutoreleasedReturnValue();
            local_131 = 1;
            local_130 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar2 = lVar9 == 0;
          }
          if ((local_131 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
          if (!bVar2) {
            lVar9 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_url_026a5a28);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLWithString__026a16d8);
            _objc_retainAutoreleasedReturnValue();
            local_140 = puVar4;
            (*(code *)PTR__objc_release_02578630)(lVar9);
            if (local_140 == (undefined *)0x0) {
              local_cc = 5;
            }
            else {
              _dispatch_group_enter(local_e0);
              IVar5 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_probeRequestForURL__026ade78,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_148 = IVar5;
              (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setHTTPMethod__026a64b0,&cf_HEAD);
              puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = local_e8;
              IVar5 = local_148;
              local_188 = PTR___NSConcreteStackBlock_02578660;
              local_180 = 0xc2000000;
              local_17c = 0;
              local_178 = FUN_0102da94;
              local_170 = &DAT_025847a0;
              local_150 = local_b0;
              (*(code *)PTR__objc_retain_02578638)();
              pdVar1 = local_e0;
              local_168 = lVar9;
              (*(code *)PTR__objc_retain_02578638)();
              puVar4 = local_140;
              local_160 = pdVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_158 = puVar4;
              puVar4 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,IVar5,&local_188);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar6);
              _objc_storeStrong(&local_158);
              _objc_storeStrong(&local_160,0);
              _objc_storeStrong(&local_168,0);
              _objc_storeStrong(&local_148,0);
              local_cc = 0;
            }
            _objc_storeStrong(&local_140,0);
          }
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    pdVar7 = _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    pdVar1 = local_e0;
    local_1c8 = PTR___NSConcreteStackBlock_02578660;
    local_1c0 = 0xc2000000;
    local_1bc = 0;
    local_1b8 = FUN_0102df30;
    local_1b0 = &DAT_0257a710;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_c0;
    local_1a8 = pdVar1;
    local_190 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    lVar8 = local_c8;
    local_1a0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = lVar8;
    _dispatch_async(pdVar7,&local_1c8);
    (*(code *)PTR__objc_release_02578630)(pdVar7);
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_e0,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

