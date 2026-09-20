// FUN_0050cb64 @ 0050cb64

void FUN_0050cb64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  cfstringStruct *local_240;
  undefined *local_1f0;
  undefined *local_1e8;
  char *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  char *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar4;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar4 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar4,param_1);
  uVar3 = (uint)puVar4;
  FUN_0050d61c();
  if (((uVar3 & 1) == 0) || (uVar11 = local_b0, FUN_0050d6b8(), (uVar11 & 1) != 0)) {
    local_c0 = 1;
  }
  else {
    uVar11 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rightBarItemStyle_026a46b0);
    if (uVar11 == 1) {
      local_c0 = 1;
    }
    else {
      uVar11 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_c8 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = local_c8;
      local_d0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar11;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar11);
      puVar5 = local_d0;
      if (uVar6 == 0) {
        uVar11 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_rightBarButtonItem_0269feb8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar5 = local_d0;
        if (uVar11 != 0) {
          uVar11 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_rightBarButtonItem_0269feb8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar11);
        }
      }
      else {
        uVar11 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_rightBarButtonItems_0269eab0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(uVar11);
      }
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = 0;
      local_d8 = puVar5;
      _memset(auStack_128,0,0x40);
      puVar5 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_1e8 != (undefined *)0x0) {
        lVar10 = *local_118;
        local_1f0 = (undefined *)0x0;
        do {
          do {
            if (*local_118 - lVar10 != 0) {
              _objc_enumerationMutation(*local_118 - lVar10,puVar5);
            }
            uVar11 = *(ulong *)(local_120 + (long)local_1f0 * 8);
            local_e8 = uVar11;
            FUN_0050d94c(uVar11,local_b0);
            if (((uVar11 & 1) == 0) || (local_e0 = local_e0 + 1, local_e0 < 2)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e8);
            }
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_1f0 = (undefined *)0x0;
        } while (local_1e8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (local_e0 < 2) {
        if (local_e0 - 1 == 0) {
          local_c0 = 1;
        }
        else {
          pcVar7 = "MMUICommonUtil";
          _objc_getClass(local_e0 - 1);
          local_138 = PTR_s_getBarButtonWithImageName_target_026a46b8;
          local_130 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar7,PTR_s_respondsToSelector__026ca818,
                     PTR_s_getBarButtonWithImageName_target_026a46b8);
          if (((ulong)pcVar7 & 1) == 0) {
            local_c0 = 1;
          }
          else {
            pcVar8 = &cf_Common_More;
            FUN_0050df80();
            _objc_retainAutoreleasedReturnValue();
            local_240 = pcVar8;
            if (pcVar8 == (cfstringStruct *)0x0) {
              local_240 = &cf_fY;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_140 = local_240;
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            uVar11 = local_b0;
            pcVar7 = local_130;
            puVar2 = local_138;
            pcVar8 = local_140;
            puVar5 = PTR_s_onOperate__026a4688;
            puVar9 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,puVar2,&cf_dot_3_regular,uVar11,puVar5,2,pcVar8);
            _objc_retainAutoreleasedReturnValue();
            local_148 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(puVar9);
            pcVar7 = local_148;
            uVar1 = DAT_026f42c8;
            if (local_148 == (char *)0x0) {
              local_c0 = 1;
            }
            else {
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(pcVar7,uVar1,puVar5,1);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              pcVar7 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_customView_0269ea28);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (pcVar7 != (char *)0x0) {
                pcVar7 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_customView_0269ea28);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = DAT_026f42c8;
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(pcVar7,uVar1,puVar5,1);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                (*(code *)PTR__objc_release_02578630)(pcVar7);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_insertObject_atIndex__0269eac0,local_148,0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setRightBarButtonItems__0269eac8,local_d8);
              local_c0 = 0;
            }
            _objc_storeStrong(&local_148);
            _objc_storeStrong(&local_140,0);
          }
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_setRightBarButtonItems__0269eac8,local_d8);
        local_c0 = 1;
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

