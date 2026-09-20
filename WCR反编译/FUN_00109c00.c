// FUN_00109c00 @ 00109c00

void FUN_00109c00(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_1f8;
  undefined *local_1f0;
  char *local_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f4;
  cfstringStruct *local_f0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_2);
  pcVar1 = "WeButton";
  _objc_getClass();
  pcVar2 = &cf_getRedesignButton_IconName_Action_Target_;
  local_d8 = pcVar1;
  _NSSelectorFromString();
  local_f0 = pcVar2;
  if ((local_d8 == (char *)0x0) ||
     (pcVar1 = local_d8,
     (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    local_c0 = (char *)0x0;
    local_f4 = 1;
  }
  else {
    pcVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,local_f0,&cf_yddkbXT,&cf_trash_on_regular,
               PTR_s_wcr_removeInvitedMember_0269edc8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    local_100 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_c0 = (char *)0x0;
      local_f4 = 1;
    }
    else {
      uVar8 = local_d0;
      FUN_0010a464();
      _objc_retainAutoreleasedReturnValue();
      local_108 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_setTitleColor_forState__026caac0,local_d0,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_setTitleColor_forState__026caac0,local_108,1);
      _memset(auStack_150,0,0x40);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_1f0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_1f0 != (undefined *)0x0) {
        lVar7 = *local_140;
        local_1f8 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar7 != 0) {
              _objc_enumerationMutation(*local_140 - lVar7,puVar5);
            }
            uVar8 = *(undefined8 *)(local_148 + (long)local_1f8 * 8);
            local_110 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_unsignedIntegerValue_026cabb8);
            pcVar6 = local_100;
            local_158 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_imageForState__0269edf0,uVar8);
            _objc_retainAutoreleasedReturnValue();
            pcVar1 = local_100;
            local_160 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_imageWithRenderingMode__026ca690,2)
              ;
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar1,PTR_s_setImage_forState__0269cc60,pcVar6,local_158);
              (*(code *)PTR__objc_release_02578630)(pcVar6);
            }
            _objc_storeStrong(&local_160,0);
            local_1f8 = local_1f8 + 1;
          } while (local_1f8 < local_1f0);
          local_1f0 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1f8 = (undefined *)0x0;
        } while (local_1f0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_setTintColor__026caab0,local_d0);
      pcVar1 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pcVar1;
      local_f4 = 1;
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

