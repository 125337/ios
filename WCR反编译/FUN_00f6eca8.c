// FUN_00f6eca8 @ 00f6eca8

void FUN_00f6eca8(undefined8 param_1,undefined8 param_2,long param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = &cf_MMMenuItem;
  _NSClassFromString();
  pcVar2 = &cf_initWithTitle_svgName_action_;
  _NSSelectorFromString();
  if ((((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar3 = pcVar1,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar1,PTR_s_instancesRespondToSelector__0269da90,pcVar2),
       ((ulong)pcVar3 & 1) == 0)) ||
      (lVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      lVar4 == 0)) ||
     ((lVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar4 == 0 || (param_3 == 0)))) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

