// FUN_016c59b8 @ 016c59b8

void FUN_016c59b8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  cfstringStruct *local_3e0;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  undefined *local_2a0;
  undefined *local_298;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8 [2];
  cfstringStruct *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  cfstringStruct *local_180 [3];
  cfstringStruct *local_168;
  int local_15c;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_158,param_1);
  if (local_158 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = &cf___;
    local_15c = 1;
  }
  else {
    local_168 = (cfstringStruct *)0x0;
    pcVar1 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_180[0] = pcVar1;
      if ((pcVar1 != (cfstringStruct *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
         ((ulong)pcVar1 & 1) != 0)) {
        pcVar2 = local_180[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_180[0],PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_168;
        local_168 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(local_180,0);
    }
    pcVar1 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_48 = &cf_m_textField;
      local_40 = &cf_textField;
      local_38 = &cf__textField;
      local_30 = &cf_inputTextField;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_188 = puVar3;
      _memset(auStack_1d0,0,0x40);
      puVar3 = local_188;
      (*(code *)PTR__objc_retain_02578638)();
      local_298 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_c8,0x10)
      ;
      if (local_298 != (undefined *)0x0) {
        lVar5 = *local_1c0;
        local_2a0 = (undefined *)0x0;
        do {
          do {
            if (*local_1c0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar5,puVar3);
            }
            local_190 = *(undefined8 *)(local_1c8 + (long)local_2a0 * 8);
            pcVar1 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_valueForKey__0269d128,local_190);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = pcVar1;
            if ((pcVar1 == (cfstringStruct *)0x0) ||
               ((*(code *)PTR__objc_msgSend_02578628)
                          (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68),
               ((ulong)pcVar1 & 1) == 0)) {
LAB_016c5dec:
              local_15c = 0;
            }
            else {
              pcVar2 = local_1d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_168;
              local_168 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              pcVar1 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
              if (pcVar1 == (cfstringStruct *)0x0) goto LAB_016c5dec;
              local_15c = 2;
            }
            _objc_storeStrong(&local_1d8,0);
            if (local_15c != 0) goto LAB_016c5e84;
            local_2a0 = local_2a0 + 1;
          } while (local_2a0 < local_298);
          local_298 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_c8,
                     0x10);
          local_2a0 = (undefined *)0x0;
        } while (local_298 != (undefined *)0x0);
      }
      local_15c = 0;
LAB_016c5e84:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_188,0);
    }
    pcVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
    pcVar1 = local_158;
    if (pcVar2 == (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_158);
        _objc_retainAutoreleasedReturnValue();
        local_1e8[0] = pcVar1;
        do {
          pcVar1 = local_1e8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8[0],PTR_s_count_0269cfe0);
          iVar4 = 0;
          if (pcVar1 == (cfstringStruct *)0x0) break;
          pcVar1 = local_1e8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8[0],PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_1f0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e8[0],PTR_s_removeLastObject_0269e830);
          pcVar1 = local_1f0;
          puVar3 = PTR__OBJC_CLASS___UITextField_026ce2a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          pcVar2 = local_1f0;
          if (((ulong)pcVar1 & 1) == 0) {
            puVar3 = PTR__OBJC_CLASS___UITextView_026ce1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((ulong)pcVar2 & 1) != 0) goto LAB_016c6104;
LAB_016c6234:
            _memset(auStack_240,0,0x40);
            pcVar1 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_388 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_388 != (cfstringStruct *)0x0) {
              lVar5 = *local_230;
              local_390 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_230 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_230 - lVar5,pcVar1);
                  }
                  local_200 = *(undefined8 *)(local_238 + (long)local_390 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8[0],PTR_s_addObject__0269d180,local_200);
                  local_390 = (cfstringStruct *)((long)&local_390->field0_0x0 + 1);
                } while (local_390 < local_388);
                local_388 = pcVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,
                           auStack_148,0x10);
                local_390 = (cfstringStruct *)0x0;
              } while (local_388 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar1);
            local_15c = 0;
          }
          else {
LAB_016c6104:
            pcVar1 = local_1f0;
            (*(code *)PTR__objc_retain_02578638)();
            local_1f8 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
            if (((ulong)pcVar1 & 1) == 0) {
LAB_016c6210:
              local_15c = 0;
            }
            else {
              pcVar2 = local_1f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_168;
              local_168 = pcVar2;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
              pcVar1 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
              if (pcVar1 == (cfstringStruct *)0x0) goto LAB_016c6210;
              local_15c = 6;
            }
            _objc_storeStrong(&local_1f8,0);
            if (local_15c == 0) goto LAB_016c6234;
          }
          _objc_storeStrong(&local_1f0,0);
          iVar4 = local_15c;
        } while (local_15c == 0);
        _objc_storeStrong(iVar4,local_1e8,0);
      }
    }
    pcVar1 = local_168;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_168;
    local_168 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_168 == (cfstringStruct *)0x0) {
      local_3e0 = &cf___;
    }
    else {
      local_3e0 = local_168;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_3e0;
    local_15c = 1;
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_150);
  return;
}

