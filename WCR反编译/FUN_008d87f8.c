// FUN_008d87f8 @ 008d87f8

void FUN_008d87f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "MMMenuItem";
  _objc_getClass();
  if (pcVar1 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
               PTR_s_initWithTitle_svgName_action__026a9d40);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithTitle_action__026a51e8);
      if (((ulong)pcVar2 & 1) == 0) {
        local_18 = (char *)0x0;
      }
      else {
        _objc_alloc();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_initWithTitle_action__026a51e8,local_20,param_3);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
    else {
      _objc_alloc();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_initWithTitle_svgName_action__026a9d40,local_20,local_28,param_3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

