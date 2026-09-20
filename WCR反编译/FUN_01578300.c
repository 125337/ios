// FUN_01578300 @ 01578300

void FUN_01578300(char *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_20 = param_1;
  FUN_01569a40();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    FUN_01533df4();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  puVar1 = PTR_s_getService__0269d170;
  if (((local_28 == (char *)0x0) || (local_20 == (char *)0x0)) ||
     (pcVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar3 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

