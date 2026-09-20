// FUN_004d4124 @ 004d4124

void FUN_004d4124(ulong param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_18;
  
  if (param_1 < 2) {
    local_18 = (char *)0x0;
  }
  else {
    local_18 = "MessageGroupInfo";
    _objc_getClass(param_1 - 2);
    puVar1 = PTR_s_mediaGroupWithCount__026a4160;
    if ((local_18 == (char *)0x0) ||
       (pcVar2 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_mediaGroupWithCount__026a4160),
       ((ulong)pcVar2 & 1) == 0)) {
      local_18 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

