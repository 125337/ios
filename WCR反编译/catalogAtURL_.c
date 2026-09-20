// catalogAtURL: @ 015cbaf4

/* Function Stack Size: 0x18 bytes */

ID WCRefineWechatThemeStore::catalogAtURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_58;
  undefined8 local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  char *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = "CUICatalog";
  _objc_getClass();
  pcVar3 = &cf_initWithURL_error_;
  local_38 = pcVar2;
  _NSSelectorFromString();
  local_40 = pcVar3;
  if ((local_38 == (char *)0x0) ||
     (pcVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_instancesRespondToSelector__0269da90,pcVar3),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_44 = 1;
  }
  else {
    local_50 = 0;
    pcVar2 = local_38;
    _objc_alloc();
    uVar1 = local_50;
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_50,uVar1);
    local_58 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

