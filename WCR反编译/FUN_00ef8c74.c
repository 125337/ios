// FUN_00ef8c74 @ 00ef8c74

void FUN_00ef8c74(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  else {
    local_40 = local_20;
  }
  _NSClassFromString();
  if (local_40 != (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isSubclassOfClass__0269e590,puVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderTimelineTabViewController);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = &cf_initWithTargetTabType_;
        _NSSelectorFromString(&cf_initWithTargetTabType_);
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
        if (((ulong)pcVar3 & 1) != 0) {
          _objc_alloc();
          pcVar2 = &cf_initWithTargetTabType_;
          _NSSelectorFromString(&cf_initWithTargetTabType_);
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar2,0);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(local_40);
          goto LAB_00ef8e00;
        }
      }
      _objc_alloc_init();
      local_18 = local_40;
      goto LAB_00ef8e00;
    }
  }
  local_18 = (cfstringStruct *)0x0;
LAB_00ef8e00:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

