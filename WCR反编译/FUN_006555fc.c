// FUN_006555fc @ 006555fc

void FUN_006555fc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_88;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00655d64(local_20,"m_arrMessageNodeData");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_28;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_00655d64(local_20,"m_newArrMessageNodeData");
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_28 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      local_88 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_88 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

