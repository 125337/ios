// FUN_01578de0 @ 01578de0

byte FUN_01578de0(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar2 = &cf_WCFinderTimelineTabViewController;
  _NSClassFromString();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    local_28 = (cfstringStruct *)0x0;
    pcVar3 = &cf_initWithTargetTabType_;
    local_20 = pcVar2;
    _NSSelectorFromString();
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_instancesRespondToSelector__0269da90,pcVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = local_20;
      _objc_alloc_init();
      pcVar2 = local_28;
      local_28 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      pcVar3 = local_20;
      _objc_alloc();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_28;
      local_28 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    bVar1 = local_28 != (cfstringStruct *)0x0;
    if (bVar1) {
      FUN_01556938(local_28);
    }
    local_11 = bVar1;
    _objc_storeStrong(&local_28,0);
  }
  return local_11 & 1;
}

