// FUN_0030e7e8 @ 0030e7e8

void FUN_0030e7e8(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  long local_e8;
  undefined4 local_dc;
  ulong local_d8;
  ulong local_d0 [3];
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*DAT_028c9b38)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) goto LAB_0030ee1c;
  local_d0[0] = 0;
  uVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_nextResponder_0269d0d8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar3;
  while (uVar3 = local_d8, local_d8 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      _objc_storeStrong(local_d0,local_d8);
      break;
    }
    uVar6 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_d8;
    local_d8 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_d0[0];
  if (local_d0[0] == 0) {
LAB_0030ea1c:
    local_dc = 1;
  }
  else {
    pcVar4 = &cf_ContactsViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
    if ((uVar3 & 1) == 0) goto LAB_0030ea1c;
    local_e8 = 0;
    while( true ) {
      lVar5 = local_e8;
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_numberOfSections_026a2068);
      if ((long)uVar3 <= lVar5) break;
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_headerViewForSection__026a20a8,local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar3;
      if (uVar3 != 0) {
        _memset(auStack_138,0,0x40);
        uVar3 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1c0 != 0) {
          lVar5 = *local_128;
          local_1c8 = 0;
          do {
            do {
              if (*local_128 - lVar5 != 0) {
                _objc_enumerationMutation(*local_128 - lVar5,uVar3);
              }
              uVar6 = *(ulong *)(local_130 + local_1c8 * 8);
              puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              local_f8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar6 & 1) != 0) {
                puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setBackgroundColor__026ca888);
                (*(code *)PTR__objc_release_02578630)(puVar1);
              }
              local_1c8 = local_1c8 + 1;
            } while (local_1c8 < local_1c0);
            local_1c0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                       0x10);
            local_1c8 = 0;
          } while (local_1c0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_f0,0);
      local_e8 = local_e8 + 1;
    }
    FUN_00329af4(lVar5 - uVar3,local_b0);
    FUN_00329b68(local_b0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(local_d0,0);
LAB_0030ee1c:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

