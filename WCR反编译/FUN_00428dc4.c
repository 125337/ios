// FUN_00428dc4 @ 00428dc4

void FUN_00428dc4(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined4 local_84;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_1);
  pcVar2 = local_58;
  FUN_0040d5d4(local_58,&cf_appmsg);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  bVar1 = true;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_60;
    puVar4 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_rangeOfString_options__0269d118,&cf_<weappinfo,1);
    bVar1 = pcVar2 == (cfstringStruct *)0x7fffffffffffffff;
    local_80 = pcVar2;
    local_78 = puVar4;
  }
  if (bVar1) {
    local_50 = (undefined *)0x0;
    local_84 = 1;
    goto LAB_004290c4;
  }
  pcVar2 = local_60;
  FUN_0040d830(local_60,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_60;
  local_90 = pcVar2;
  FUN_0040d830(local_60,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_90;
  local_98 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) goto LAB_00428fc8;
    local_50 = (undefined *)0x0;
  }
  else {
LAB_00428fc8:
    local_48 = &cf_title;
    if (local_90 == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    else {
      local_f0 = local_90;
    }
    local_38 = local_f0;
    local_40 = &cf_content;
    if (local_98 == (cfstringStruct *)0x0) {
      local_100 = &cf___;
    }
    else {
      local_100 = local_98;
    }
    local_30 = local_100;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar4;
  }
  local_84 = 1;
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
LAB_004290c4:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_50);
  return;
}

