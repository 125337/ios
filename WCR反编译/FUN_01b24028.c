// FUN_01b24028 @ 01b24028

void FUN_01b24028(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
    goto LAB_01b24290;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_miniProgramTitle);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01b242ac();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_miniProgramContent);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01b242ac();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (uVar2 != 0) goto LAB_01b241c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
LAB_01b241c8:
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_weapp_t__lu____c__lu___);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
  }
  local_24 = 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
LAB_01b24290:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

