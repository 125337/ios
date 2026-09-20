// FUN_008e53bc @ 008e53bc

void FUN_008e53bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined8 local_28;
  undefined8 local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = "MMMenuItem";
  _objc_getClass();
  pcVar2 = &cf_initWithTitle_svgName_action_;
  _NSSelectorFromString();
  if ((pcVar1 == (char *)0x0) ||
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_instancesRespondToSelector__0269da90,pcVar2)
     , ((ulong)pcVar3 & 1) == 0)) {
    local_18 = (char *)0x0;
  }
  else {
    _objc_alloc();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2,local_20,local_28,param_3);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

