// FUN_005a19c8 @ 005a19c8

void FUN_005a19c8(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_48;
  char *local_40;
  undefined4 local_38;
  char *local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_005c00b4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_18 = (char *)0x0;
    local_38 = 1;
  }
  else {
    local_40 = (char *)0x0;
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_0059d260();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    FUN_0059d260(local_48,&cf_objectId);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = "MMRTCSnsMenuResponder";
    _objc_getClass();
    puVar1 = PTR_s_timelineFinderMessageWithDataIte_026a5998;
    if ((pcVar4 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_timelineFinderMessageWithDataIte_026a5998);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,local_20);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_40;
        local_40 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    if (local_40 == (char *)0x0) {
      pcVar3 = local_20;
      FUN_005c0694(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_40 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      FUN_005c0adc(local_40);
      pcVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

