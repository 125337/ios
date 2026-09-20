// FUN_01625a38 @ 01625a38

void FUN_01625a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a0,param_1);
  local_a8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_a8,param_2);
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_3);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_4);
  local_98 = &cf_title;
  if (local_a0 == (cfstringStruct *)0x0) {
    local_100 = &cf___;
  }
  else {
    local_100 = local_a0;
  }
  local_60 = local_100;
  local_90 = &cf__wcrDefaultTitle;
  if (local_a0 == (cfstringStruct *)0x0) {
    local_110 = &cf___;
  }
  else {
    local_110 = local_a0;
  }
  local_58 = local_110;
  local_88 = &cf__wcrDefaultIcon;
  if (local_a8 == (cfstringStruct *)0x0) {
    local_120 = &cf___;
  }
  else {
    local_120 = local_a8;
  }
  local_50 = local_120;
  local_80 = &cf_icon;
  if (local_a8 == (cfstringStruct *)0x0) {
    local_130 = &cf___;
  }
  else {
    local_130 = local_a8;
  }
  local_48 = local_130;
  local_78 = &cf_action;
  if (local_b0 == (cfstringStruct *)0x0) {
    local_140 = &cf___;
  }
  else {
    local_140 = local_b0;
  }
  local_40 = local_140;
  local_70 = &cf__wcrEnabled;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,param_5 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_68 = &cf__wcrSource;
  pcVar2 = local_b8;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_150 = &cf_WCRefine;
  }
  else {
    local_150 = local_b8;
  }
  local_30 = local_150;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_60,&local_98,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

