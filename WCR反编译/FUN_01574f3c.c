// FUN_01574f3c @ 01574f3c

void FUN_01574f3c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_01566074(local_18,&cf_contentObj);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_01566074(uVar1,&cf_mediaList);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_38 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_38 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

