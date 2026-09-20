// FUN_0088b14c @ 0088b14c

void FUN_0088b14c(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
                 ,ulong param_6,ulong param_7,ulong *param_8,ulong param_9)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  double dVar5;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_1f8;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined *local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  cfstringStruct *local_110;
  ulong local_108;
  undefined *local_100 [3];
  int local_e4;
  double local_e0;
  double local_d8;
  ulong local_d0;
  ulong *local_c8;
  ulong local_c0;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_5);
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_9;
  local_c8 = param_8;
  local_c0 = param_7;
  local_b8 = param_6;
  if (((local_b0 == (cfstringStruct *)0x0) || (param_8 == (ulong *)0x0)) || (param_9 <= *param_8)) {
    local_e4 = 1;
  }
  else {
    _CACurrentMediaTime(*param_8 - param_9);
    param_1 = param_1 - local_d8;
    if (local_e0 < param_1) {
      local_e4 = 1;
    }
    else {
      *local_c8 = *local_c8 + 1;
      puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      dVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_100[0] = puVar1;
      for (local_108 = 0; local_108 < local_b8; local_108 = local_108 + 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_100[0],PTR_s_appendString__0269ccb0,&cf__);
      }
      pcVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1f8 = &cf__null_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = local_1f8;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_frame_026ca640);
      puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_130 = param_1;
      local_128 = dVar5;
      local_120 = param_3;
      local_118 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithFormat__0269cca8,
                 &cf_____frame_____1f___1f_____1f___1f__);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_b0;
      local_138 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
      puVar1 = local_138;
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tag_026cab98);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_tag__ld);
      }
      pcVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isHidden_026ca768);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_appendString__0269ccb0,&cf_hidden_1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_alpha_026ca4d8);
      puVar1 = local_138;
      if (param_4 < 1.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_alpha_026ca4d8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendFormat__0269d148,&cf_alpha___2f);
      }
      pcVar2 = local_b0;
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar3 = local_b0;
      if (((ulong)pcVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_titleForState__026a2208,0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          FUN_0088bbb8();
          _objc_retainAutoreleasedReturnValue();
          local_148 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar2 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_appendFormat__0269d148,&cf_title_____);
          }
          _objc_storeStrong(&local_148,0);
        }
      }
      else {
        pcVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_0088bbb8();
        _objc_retainAutoreleasedReturnValue();
        local_140 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_appendFormat__0269d148,&cf_text_____);
        }
        _objc_storeStrong(&local_140,0);
      }
      if ((local_b8 < local_c0) && (*local_c8 < local_d0)) {
        _memset(auStack_190,0,0x40);
        pcVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2f0 != (cfstringStruct *)0x0) {
          lVar4 = *local_180;
          local_2f8 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_180 - lVar4 != 0) {
                _objc_enumerationMutation(*local_180 - lVar4,pcVar2);
              }
              local_150 = *(undefined8 *)(local_188 + (long)local_2f8 * 8);
              dVar5 = local_d8;
              FUN_0088b14c(local_d8,local_e0,local_150,local_b8 + 1,local_c0,local_c8,local_d0);
              if (local_d0 <= *local_c8) {
                local_e4 = 1;
                goto LAB_0088bae0;
              }
              _CACurrentMediaTime(*local_c8 - local_d0);
              if (local_e0 < dVar5 - local_d8) {
                local_e4 = 1;
                goto LAB_0088bae0;
              }
              local_2f8 = (cfstringStruct *)((long)&local_2f8->field0_0x0 + 1);
            } while (local_2f8 < local_2f0);
            local_2f0 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8
                       ,0x10);
            local_2f8 = (cfstringStruct *)0x0;
          } while (local_2f0 != (cfstringStruct *)0x0);
        }
        local_e4 = 0;
LAB_0088bae0:
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (local_e4 == 0) {
          local_e4 = 0;
        }
      }
      else {
        local_e4 = 1;
      }
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(local_100,0);
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

