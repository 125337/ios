// FUN_00efa8a0 @ 00efa8a0

ulong FUN_00efa8a0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar3 = &cf_WCNewCommitViewController;
  _NSClassFromString();
  pcVar4 = &cf_initWithTextType;
  local_20 = pcVar3;
  _NSSelectorFromString();
  bVar2 = false;
  bVar1 = false;
  local_28 = pcVar4;
  if (local_20 != (cfstringStruct *)0x0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_instancesRespondToSelector__0269da90,pcVar4);
    if (((ulong)pcVar3 & 1) != 0) {
      local_38 = local_20;
      _objc_alloc();
      bVar2 = true;
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_48 = local_58;
      goto LAB_00efa994;
    }
  }
  local_58 = (cfstringStruct *)0x0;
LAB_00efa994:
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar3 = local_30;
  FUN_00ef8900(local_30,local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return (ulong)pcVar3 & 0xffffffff;
}

