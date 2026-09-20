// confirmDeleteCacheForUsername:sampleItem: @ 01bdc664

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsCacheViewController::confirmDeleteCacheForUsername_sampleItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  undefined1 auStack_138 [8];
  undefined *local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  lVar7 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar7 == 0) {
    local_cc = 1;
  }
  else {
    uVar6 = local_c8;
    FUN_01bc7c2c();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = 0;
    local_d8 = uVar6;
    _memset(auStack_128,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b8 != 0) {
      lVar7 = *local_118;
      local_1c0 = 0;
      do {
        do {
          if (*local_118 - lVar7 != 0) {
            _objc_enumerationMutation(*local_118 - lVar7,IVar1);
          }
          uVar8 = *(ulong *)(local_120 + local_1c0 * 8);
          local_e8 = uVar8;
          FUN_01bc758c();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar2 & 1) != 0) {
            local_e0 = local_e0 + 1;
          }
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1c0 = 0;
      } while (local_1b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Rd_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rd_YSv);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_alertControllerWithTitle_message_0269dc00,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_130;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_initWeak(auStack_138,local_b0);
    puVar3 = local_130;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_178 = PTR___NSConcreteStackBlock_02578660;
    local_170 = 0xc2000000;
    local_16c = 0;
    local_168 = FUN_01bdccb0;
    local_160 = &DAT_0258b9b0;
    lVar7 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = lVar7;
    _objc_copyWeak(auStack_148,auStack_138);
    uVar6 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = local_e0;
    local_150 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_178);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_130,1,0);
    _objc_storeStrong(&local_150);
    _objc_destroyWeak(auStack_148);
    _objc_storeStrong(&local_158,0);
    _objc_destroyWeak(auStack_138);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_d8,0);
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

