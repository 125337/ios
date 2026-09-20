// FUN_007524a8 @ 007524a8

void FUN_007524a8(undefined8 param_1)

{
  u_int32_t uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_148;
  cfstringStruct *local_118;
  bool local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined4 local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_1);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &cf_ck_W_b_O;
    local_80 = 1;
  }
  else {
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf__g);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,&cf_Q_);
      local_60 = local_70;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = 1;
      }
      else {
        pcVar2 = local_68;
        FUN_007529e8();
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_148 = &cf_ck_W_b_O;
        }
        else {
          local_148 = local_90;
          FUN_00752b9c(pcVar2,local_90,10);
          _objc_retainAutoreleasedReturnValue();
          local_98 = local_148;
        }
        local_99 = pcVar2 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = local_148;
        if (local_99) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        local_80 = 1;
        _objc_storeStrong(&local_90,0);
      }
    }
    else {
      local_58 = &cf_ck_W_b_O;
      local_50 = &cf_ck_W__O;
      local_48 = &cf_ck_W_O;
      local_40 = &cf_ck_Wr__O;
      local_38 = &cf__Y__O;
      local_30 = &cf__WS_U_O;
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      local_88 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
      uVar1 = _arc4random_uniform((u_int32_t)pcVar3);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_118 = &cf_ck_W_b_O;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_118;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_80 = 1;
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_60);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

