// FUN_01e38038 @ 01e38038

void FUN_01e38038(ulong param_1,long param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong *local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _WCRSFURLSchemeCatalogGroups();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_38 = param_1;
  if (((long)local_20 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0),
     (long)param_1 <= (long)uVar2)) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    if (local_30 != (ulong *)0x0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_20);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_20);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_48;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    lVar1 = local_28;
    if ((((uVar2 & 1) == 0) || (local_28 < 0)) ||
       (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0),
       (long)uVar2 <= lVar1)) {
      local_18 = 0;
    }
    else {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

