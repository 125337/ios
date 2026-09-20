// chatSinkSelectedSessionsSummaryText @ 01b4a78c

/* Function Stack Size: 0x10 bytes */

ID WCRefineLayoutFunctionViewController::chatSinkSelectedSessionsSummaryText(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  long local_e0;
  long local_d8;
  undefined4 local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chatSinkSelectedSessions_026bf568);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf__gb;
  }
  else {
    local_d8 = 0;
    local_e0 = 0;
    _memset(auStack_128,0,0x40);
    IVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar4 = *local_118;
      local_158 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,IVar1);
          }
          uVar5 = *(ulong *)(local_120 + local_158 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar5 & 1) != 0) {
            uVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasSuffix__0269d018,&cf__chatroom);
            if ((uVar5 & 1) == 0) {
              local_d8 = local_d8 + 1;
            }
            else {
              local_e0 = local_e0 + 1;
            }
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if ((local_d8 == 0) || (local_e0 == 0)) {
      if (local_e0 == 0) {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_y_);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar3;
      }
      else {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar3;
      }
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_y_);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar3;
    }
  }
  local_cc = 1;
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

