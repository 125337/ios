// FUN_00511318 @ 00511318

void FUN_00511318(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *puVar5;
  ulong *local_120;
  ulong local_58;
  ulong *local_50;
  ulong local_48 [3];
  ulong *local_30;
  ulong local_28;
  
  puVar1 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_0050ed60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_contact_026a0b68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0050e284();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_50 = (ulong *)0x0;
  if (((local_30 != (ulong *)0x0) &&
      (uVar2 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0)
      , uVar2 != 0)) &&
     (puVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getHomepageData_type__026a46f8),
     puVar1 = local_30, uVar2 = local_48[0], puVar5 = PTR_s_getHomepageData_type__026a46f8,
     ((ulong)puVar4 & 1) != 0)) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homepageType_026a4700);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,puVar5,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_50;
    local_50 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar1 = local_50;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
     puVar1 == (ulong *)0x0)) {
    local_58 = 0;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_m_arrPhotoDatas);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_58;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((uVar2 & 1) != 0) {
      _objc_storeStrong(&local_50,local_58);
    }
    _objc_storeStrong(&local_58,0);
  }
  puVar1 = local_50;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar1 & 1) == 0) {
    local_120 = *(ulong **)PTR____NSArray0___02578280;
  }
  else {
    local_120 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_120);
  return;
}

