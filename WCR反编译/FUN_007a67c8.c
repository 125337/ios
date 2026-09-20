// FUN_007a67c8 @ 007a67c8

void FUN_007a67c8(ulong param_1,long param_2,long param_3,ulong *param_4,long *param_5)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_e0;
  ulong local_78;
  ulong local_68 [3];
  undefined *local_50;
  long *local_48;
  ulong *local_40;
  long local_38;
  long local_30;
  ulong local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (ulong *)0x0 && (param_5 != (long *)0x0)))) {
    local_48 = param_5;
    local_40 = param_4;
    local_38 = param_3;
    local_30 = param_2;
    local_28 = param_1;
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)();
    FUN_007a7228();
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_containsObject__0269cbb8,local_50);
    if ((param_1 & 1) == 0) {
      if (*local_48 == 0) {
        *local_48 = local_38;
      }
      local_78 = local_28;
      _class_getInstanceMethod(local_28,local_30);
      if (local_78 == 0) {
        local_e0 = &cf_MMUIViewController;
        _NSClassFromString();
        if (local_e0 == (cfstringStruct *)0x0) {
          local_e0 = (cfstringStruct *)0x0;
        }
        else {
          _class_getInstanceMethod(local_e0,local_30);
        }
        uVar4 = local_28;
        lVar1 = local_30;
        if (local_e0 != (cfstringStruct *)0x0) {
          pcVar3 = local_e0;
          _method_getImplementation();
          _method_getTypeEncoding();
          _class_addMethod(uVar4,lVar1,pcVar3,local_e0);
          local_78 = local_28;
          _class_getInstanceMethod(local_28,local_30);
        }
      }
      if (local_78 == 0) {
        _class_addMethod(local_28,local_30,local_38,"d@:@q");
        *local_40 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_addObject__0269d180,local_50);
      }
      else {
        uVar4 = local_78;
        _method_getImplementation();
        *local_40 = uVar4;
        _method_setImplementation(local_78,*local_48);
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_addObject__0269d180,local_50);
      }
    }
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

