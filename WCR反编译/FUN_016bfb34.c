// FUN_016bfb34 @ 016bfb34

void FUN_016bfb34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar2 == 0)) || (param_3 == 0)) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar3 = &cf_MMMenuItem;
    _NSClassFromString();
    pcVar4 = &cf_initWithTitle_svgName_action_;
    _NSSelectorFromString();
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       (pcVar5 = pcVar3,
       (*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
       puVar1 = PTR__objc_msgSend_02578628, ((ulong)pcVar5 & 1) == 0)) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      _objc_alloc();
      pcVar5 = pcVar3;
      (*(code *)puVar1)(pcVar3,pcVar4,local_20,local_28,param_3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

