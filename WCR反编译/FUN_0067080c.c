// FUN_0067080c @ 0067080c

void FUN_0067080c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__U;
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_frame_026ca640);
    _NSStringFromCGRect(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_alpha_026ca4d8);
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_0066db9c();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_stringWithFormat__0269cca8,&cf_frame___hidden__dalpha___2fsuper___);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

