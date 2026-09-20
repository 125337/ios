// FUN_0171d9e0 @ 0171d9e0

void FUN_0171d9e0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  int iVar5;
  cfstringStruct *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  int local_84;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
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
  local_78 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_78,param_1);
  pcVar1 = local_78;
  FUN_0171e69c();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &cf__;
    local_84 = 1;
  }
  else {
    local_48 = &cf_TB__;
    local_40 = &cf_TP__;
    local_38 = &cf_OT__;
    local_30 = &cf_ST__;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_ThemeBox;
    local_60 = &cf_ThemePro;
    local_58 = &cf_vQN;
    local_50 = &cf_SUTU;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_90 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_a0 = (undefined *)0x0;
    local_98 = puVar3;
    while( true ) {
      puVar2 = local_a0;
      puVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
      pcVar1 = local_80;
      if (puVar3 <= puVar2) break;
      puVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectAtIndexedSubscript__0269cc78,local_a0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_80;
      local_a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasPrefix__0269d320,puVar2);
      pcVar1 = local_80;
      if (((ulong)pcVar4 & 1) == 0) {
        local_84 = 4;
      }
      else {
        puVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          _objc_storeStrong(&local_b0,&cf__);
        }
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar2 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,local_a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringWithFormat__0269cca8,&cf_______);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_84 = 1;
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
      iVar5 = local_84 + -4;
      if (iVar5 != 0) goto LAB_0171dd48;
      local_a0 = local_a0 + 1;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = pcVar1;
    iVar5 = 1;
    local_84 = 1;
LAB_0171dd48:
    _objc_storeStrong(iVar5,&local_98);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_70);
  return;
}

