// fetchEmoticonDataSyncWithMD5:candidateURLs: @ 00f3502c

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::fetchEmoticonDataSyncWithMD5_candidateURLs_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_168;
  ulong local_160;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  uint local_dc;
  ID local_d8;
  ulong local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_emoticonDataForMD5_convertWxAMTo_026a3db0,local_c8,0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  IVar5 = local_d8;
  if (IVar2 == 0) {
    _memset(auStack_128,0,0x40);
    uVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar6 = *local_118;
      local_168 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,uVar1);
          }
          uVar7 = *(ulong *)(local_120 + local_168 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
          IVar5 = local_b8;
          if ((uVar7 & 1) != 0) {
            uVar7 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_aesKey);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_downloadEmoticonURLSync_aesKey__026ac060,uVar7);
            _objc_retainAutoreleasedReturnValue();
            local_130 = IVar5;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            IVar2 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            IVar5 = local_130;
            if (IVar2 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = IVar5;
            }
            local_dc = (uint)(IVar2 != 0);
            _objc_storeStrong(&local_130,0);
            if (local_dc != 0) goto LAB_00f35380;
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_dc = 0;
LAB_00f35380:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_dc == 0) {
      local_b0 = 0;
      local_dc = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = IVar5;
    local_dc = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

