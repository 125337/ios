// FUN_002774b0 @ 002774b0

void FUN_002774b0(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (char *)0x0;
  }
  else {
    pcVar1 = "WCFinderFeedContentVM";
    _objc_getClass();
    if (pcVar1 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
                 PTR_s_initWithDataItem_scene__026a1780);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithDataItem_scene_isFinderI_026a1788);
        if (((ulong)pcVar2 & 1) == 0) {
          local_18 = (char *)0x0;
        }
        else {
          _objc_alloc();
          pcVar2 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_initWithDataItem_scene_isFinderI_026a1788,local_20,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      else {
        _objc_alloc();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_initWithDataItem_scene__026a1780,local_20,0);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

