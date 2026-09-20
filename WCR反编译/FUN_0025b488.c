// FUN_0025b488 @ 0025b488

void FUN_0025b488(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_18;
  
  local_18 = "UIFont";
  _objc_getClass();
  puVar1 = PTR_s_dynamicSystemFontOfSize__026a1058;
  if (local_18 != (char *)0x0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_dynamicSystemFontOfSize__026a1058);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_0025b53c;
    }
  }
  local_18 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
LAB_0025b53c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

