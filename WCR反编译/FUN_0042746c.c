// FUN_0042746c @ 0042746c

void FUN_0042746c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  cfstringStruct *local_118;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined4 local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
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
  pcVar1 = local_68;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_70, FUN_0040ca7c(), pcVar1 != (cfstringStruct *)0x39)) {
    local_60 = (undefined *)0x0;
    local_80 = 1;
  }
  else {
    pcVar1 = local_70;
    FUN_0040d5d4(0,local_70,&cf_appmsg);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_60 = (undefined *)0x0;
      local_80 = 1;
    }
    else {
      pcVar1 = local_88;
      FUN_0040d830(local_88,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_88;
      local_90 = pcVar1;
      FUN_0040d5d4(local_88,&cf_refermsg);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar2;
      FUN_0040d830(pcVar2,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_118 = (cfstringStruct *)0x7fffffffffffffff;
      }
      else {
        local_118 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_integerValue_026ca750);
      }
      local_a8 = local_118;
      pcVar1 = local_98;
      FUN_0040d830(local_98,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar1;
      FUN_0042948c(pcVar1,local_a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_b0;
      local_b8 = pcVar1;
      FUN_004299f0(local_b0,local_a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_90;
      local_c0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) &&
         (pcVar1 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
         pcVar1 == (cfstringStruct *)0x0)) {
        local_60 = (undefined *)0x0;
      }
      else {
        local_58 = &cf_title;
        if (local_90 == (cfstringStruct *)0x0) {
          local_150 = &cf___;
        }
        else {
          local_150 = local_90;
        }
        local_40 = local_150;
        local_50 = &cf_referContent;
        if (local_c0 == (cfstringStruct *)0x0) {
          local_160 = &cf___;
        }
        else {
          local_160 = local_c0;
        }
        local_38 = local_160;
        local_48 = &cf_referContentDisplay;
        if (local_b8 == (cfstringStruct *)0x0) {
          local_170 = &cf___;
        }
        else {
          local_170 = local_b8;
        }
        local_30 = local_170;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar3;
      }
      local_80 = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_88,0);
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

