// FUN_00572744 @ 00572744

void FUN_00572744(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_MMMenuItem;
  _NSClassFromString();
  pcVar2 = &cf_initWithTitle_svgName_action_;
  local_28 = pcVar1;
  _NSSelectorFromString();
  local_40 = pcVar2;
  if ((local_28 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_instancesRespondToSelector__0269da90,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    local_18 = (cfstringStruct *)0x0;
    local_44 = 1;
  }
  else {
    pcVar2 = local_28;
    _objc_alloc();
    pcVar1 = local_40;
    pcVar3 = pcVar2;
    FUN_00566204();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar1,&cf_Y,&cf_icons_filled_nearby_hot,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_20 != 0) &&
       (pcVar1 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTarget__0269e1a8),
       ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTarget__0269e1a8,local_20);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

