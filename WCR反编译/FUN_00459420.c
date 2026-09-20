// FUN_00459420 @ 00459420

/* WARNING: Removing unreachable block (ram,0x00459488) */

void FUN_00459420(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_18;
  
  if ((param_2 & 1) == 0) {
    local_18 = "UIFont";
    _objc_getClass();
    puVar1 = PTR_s_dynamicSystemFontOfSize__026a1058;
    if ((local_18 == (char *)0x0) ||
       (pcVar2 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,
                  PTR_s_dynamicSystemFontOfSize__026a1058), ((ulong)pcVar2 & 1) == 0)) {
      local_18 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    local_18 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

