// FUN_0089ecc0 @ 0089ecc0

void FUN_0089ecc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *local_230;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  undefined4 local_c8;
  char *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  pcVar2 = "MMInputToolView";
  _objc_getClass();
  local_b8 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_c8 = 1;
  }
  else {
    local_d0 = 0;
    _memset(auStack_118,0,0x40);
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_1c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_1c8 != (undefined *)0x0) {
      lVar7 = *local_108;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar7 != 0) {
            _objc_enumerationMutation(*local_108 - lVar7,puVar4);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_1d0 * 8);
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                     local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_120 = puVar3;
          while (puVar5 = local_120,
                (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0),
                puVar5 != (undefined1 *)0x0) {
            puVar5 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_lastObject_0269d200);
            _objc_retainAutoreleasedReturnValue();
            local_128 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_removeLastObject_0269e830);
            puVar5 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_isKindOfClass__0269cd68,local_b8);
            if (((ulong)puVar5 & 1) != 0) {
              local_d0 = local_d0 + 1;
              puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = local_128;
              local_130 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
              local_148 = 0xe;
              local_230 = puVar6;
              if ((undefined1 *)((long)&MACH_HEADER.filetype + 1) < puVar6) {
                local_230 = (undefined1 *)((long)&MACH_HEADER.filetype + 2);
              }
              local_150 = local_230;
              local_138 = local_230;
              local_140 = puVar6;
              for (local_158 = (undefined1 *)0x0; local_158 < local_138; local_158 = local_158 + 1)
              {
                puVar5 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_160 = puVar6;
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar1 = local_130;
                puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
                puVar5 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_tag_026cab98);
                puVar6 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_frame_026ca640);
                local_180 = param_1;
                local_178 = param_2;
                local_170 = param_3;
                local_168 = param_4;
                _NSStringFromCGRect();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_stringWithFormat__0269cca8,&cf_____ld__);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_release_02578630)(puVar6);
                (*(code *)PTR__objc_release_02578630)(puVar5);
                _objc_storeStrong(&local_160,0);
              }
              local_188 = (undefined1 *)0x0;
              puVar5 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
              if (((ulong)puVar5 & 1) != 0) {
                puVar5 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_recordButton_026a0330);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = local_188;
                local_188 = puVar5;
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              local_190 = (undefined1 *)0x0;
              puVar5 = local_128;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_128,PTR_s_respondsToSelector__026ca818,
                         PTR_s_inputModeChangeButton_026a9620);
              if (((ulong)puVar5 & 1) != 0) {
                puVar5 = local_128;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_128,PTR_s_inputModeChangeButton_026a9620);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = local_190;
                local_190 = puVar5;
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              _objc_storeStrong(&local_190);
              _objc_storeStrong(&local_188,0);
              _objc_storeStrong(&local_130,0);
            }
            puVar5 = local_120;
            puVar6 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObjectsFromArray__0269d540);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            _objc_storeStrong(&local_128,0);
          }
          _objc_storeStrong(&local_120,0);
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

