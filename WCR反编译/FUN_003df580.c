// FUN_003df580 @ 003df580

/* WARNING: Removing unreachable block (ram,0x003df7c4) */

void FUN_003df580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_50 = (undefined *)0x0;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_60 = (undefined *)0x0;
  _objc_storeStrong(&local_60,param_7);
  puVar1 = local_50;
  FUN_003c7a00(local_50,local_58,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar1;
  if ((puVar1 == (undefined *)0x0) && (local_50 != (undefined *)0x0)) {
    puVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_UTF8String_026a2e68);
    _objc_getClass();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_78 == (undefined *)0x0) {
      local_78 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
    }
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_40,local_38,local_30);
    puVar1 = local_68;
    local_68 = local_78;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_68);
    puVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
    uVar2 = local_58;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_UTF8String_026a2e68);
    _class_getInstanceVariable(puVar1,uVar2);
    if (puVar1 == (undefined *)0x0) {
      FUN_00367110(local_50,local_58,local_68);
    }
    else {
      _object_setIvar(local_50,puVar1,local_68);
    }
    puVar1 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

