// FUN_0005c958 @ 0005c958

void FUN_0005c958(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_1f8;
  undefined *local_1f0;
  ulong local_140 [2];
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  uint local_d8;
  ulong local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_c8;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) == 0) {
      if (local_c8 == 0) {
        local_c0 = 0;
        local_d8 = 1;
      }
      else {
        uVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_string_0269cc38);
        if ((uVar3 & 1) != 0) {
          uVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar3 = local_e0;
          if ((uVar4 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar3 & 1) == 0) {
              local_d8 = 0;
            }
            else {
              uVar3 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_string_0269cc38);
              _objc_retainAutoreleasedReturnValue();
              local_d8 = 1;
              local_c0 = uVar3;
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = uVar3;
            local_d8 = 1;
          }
          _objc_storeStrong(&local_e0,0);
          if (local_d8 != 0) goto LAB_0005d014;
        }
        _memset(auStack_128,0,0x40);
        local_b8 = &cf_text;
        local_b0 = &cf_textView;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b8,2);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1f0 != (undefined *)0x0) {
          lVar5 = *local_118;
          local_1f8 = (undefined *)0x0;
          do {
            do {
              if (*local_118 - lVar5 != 0) {
                _objc_enumerationMutation(*local_118 - lVar5,puVar2);
              }
              local_e8 = *(undefined8 *)(local_120 + (long)local_1f8 * 8);
              local_130 = 0;
              uVar4 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,local_e8);
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_130;
              local_130 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              if ((local_130 == 0) || (local_130 - local_c8 == 0)) {
LAB_0005cf2c:
                local_d8 = 0;
              }
              else {
                uVar4 = local_130;
                FUN_0005c958(local_130 - local_c8);
                _objc_retainAutoreleasedReturnValue();
                local_140[0] = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
                uVar3 = local_140[0];
                bVar1 = uVar4 != 0;
                if (bVar1) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_c0 = uVar3;
                }
                local_d8 = (uint)bVar1;
                _objc_storeStrong(bVar1,local_140,0);
                if (local_d8 == 0) goto LAB_0005cf2c;
              }
              _objc_storeStrong(&local_130,0);
              if (local_d8 != 0) goto LAB_0005cfc0;
              local_1f8 = local_1f8 + 1;
            } while (local_1f8 < local_1f0);
            local_1f0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8
                       ,0x10);
            local_1f8 = (undefined *)0x0;
          } while (local_1f0 != (undefined *)0x0);
        }
        local_d8 = 0;
LAB_0005cfc0:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_d8 == 0) {
          local_c0 = 0;
          local_d8 = 1;
        }
      }
    }
    else {
      uVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = 1;
      local_c0 = uVar3;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = uVar4;
    local_d8 = 1;
  }
LAB_0005d014:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

