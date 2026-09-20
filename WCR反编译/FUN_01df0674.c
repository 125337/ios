// FUN_01df0674 @ 01df0674

byte FUN_01df0674(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long local_100;
  cfstringStruct *local_c8;
  long local_98;
  long local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  int local_64;
  cfstringStruct *local_60;
  long *local_58;
  long *local_50;
  cfstringStruct *local_48;
  byte local_39;
  long local_38 [3];
  
  local_38[2] = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_1);
  if (local_48 == (cfstringStruct *)0x0) {
    local_c8 = &cf___;
  }
  else {
    local_c8 = local_48;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_58 = param_3;
  local_50 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = local_c8;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_39 = 0;
    local_64 = 1;
  }
  else {
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0),
       (cfstringStruct *)0x2 < pcVar2)) {
      local_39 = 0;
      local_64 = 1;
    }
    else {
      local_38[0] = 0;
      local_38[1] = 0;
      for (local_78 = (cfstringStruct *)0x0; pcVar2 = local_78, pcVar3 = local_70,
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0), lVar4 = local_38[0],
          pcVar2 < pcVar3; local_78 = (cfstringStruct *)((long)&local_78->field0_0x0 + 1)) {
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_80);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_80;
        local_88 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        if ((((pcVar2 == (cfstringStruct *)0x0) ||
             (puVar1 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_88,PTR_s_scanInteger__026a4fc8,local_38 + (long)local_78),
             ((ulong)puVar1 & 1) == 0)) ||
            (puVar1 = local_88,
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isAtEnd_026ab608),
            ((ulong)puVar1 & 1) == 0)) ||
           ((local_38[(long)local_78] < 0 ||
            (lVar4 = local_38[(long)local_78] + -0x181f0,
            lVar4 != 0 && 0x181ef < local_38[(long)local_78])))) {
          lVar4 = 1;
          local_39 = 0;
          local_64 = 1;
        }
        else {
          local_64 = 0;
        }
        _objc_storeStrong(lVar4,&local_88);
        _objc_storeStrong(&local_80,0);
        if (local_64 != 0) goto LAB_01df0b3c;
      }
      local_90 = local_38[0];
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
      if (pcVar2 == (cfstringStruct *)0x2) {
        local_100 = local_38[1];
      }
      else {
        local_100 = local_38[0];
      }
      local_98 = local_100;
      if ((lVar4 == 0) == (local_100 == 0)) {
        if (local_100 < lVar4) {
          local_90 = local_100;
          local_98 = lVar4;
        }
        if (local_50 != (long *)0x0) {
          *local_50 = local_90;
        }
        if (local_58 != (long *)0x0) {
          *local_58 = local_98;
        }
        local_39 = 1;
        local_64 = 1;
      }
      else {
        local_39 = 0;
        local_64 = 1;
      }
    }
LAB_01df0b3c:
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_38[2] == 0) {
    return local_39 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_38[2]);
}

