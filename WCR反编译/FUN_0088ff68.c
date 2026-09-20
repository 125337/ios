// FUN_0088ff68 @ 0088ff68

void FUN_0088ff68(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined **local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  if ((DAT_028cdd31 & 1) == 0) {
    pcVar1 = &cf_WXCDeviceInfo;
    _NSClassFromString();
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar2 = &cf_systemVersion;
      local_18 = pcVar1;
      _NSSelectorFromString();
      pcVar1 = local_18;
      local_20 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((((ulong)pcVar1 & 1) != 0) &&
         (pcVar1 = local_18, _class_getClassMethod(local_18,local_20),
         pcVar1 != (cfstringStruct *)0x0)) {
        local_28 = pcVar1;
        _method_getImplementation();
        ppuVar3 = &local_78;
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc0000000;
        local_6c = 0;
        local_68 = FUN_0089cd5c;
        local_60 = &DAT_02580b50;
        local_50 = local_18;
        local_48 = local_20;
        local_58 = pcVar1;
        local_38 = pcVar1;
        local_30 = pcVar1;
        _objc_retainBlock();
        ppuVar4 = ppuVar3;
        _imp_implementationWithBlock();
        (*(code *)PTR__objc_release_02578630)(ppuVar3);
        local_40 = ppuVar4;
        _method_setImplementation(local_28,ppuVar4);
        DAT_028cdd31 = 1;
      }
    }
  }
  return;
}

