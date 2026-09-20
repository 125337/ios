// FUN_007334f0 @ 007334f0

void FUN_007334f0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  uVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_isEqualToString__0269ccc8,&cf_account_security);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_notification)
    ;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_plugin);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_about);
        if ((uVar1 & 1) == 0) {
          puVar2 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_50 = puVar2;
        }
        else {
          local_48 = &cf_about;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_48,1);
          _objc_retainAutoreleasedReturnValue();
          local_50 = puVar2;
        }
      }
      else {
        local_40 = &cf_plugin;
        local_38 = &cf_plugin_cell;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,2);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar2;
      }
    }
    else {
      local_30 = &cf_msgnotify;
      local_28 = &cf_set_msg_push;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar2;
    }
  }
  else {
    local_20 = &cf_account_safe;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_50);
  return;
}

