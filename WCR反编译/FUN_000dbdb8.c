// FUN_000dbdb8 @ 000dbdb8

void FUN_000dbdb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  puVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988),
     puVar2 != (undefined *)0x0)) {
    puVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_48 = 1;
    goto LAB_000dc1bc;
  }
  puVar2 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028c8373);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_28 = local_38;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    goto LAB_000dc1bc;
  }
  puVar2 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028c8374);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
LAB_000dc038:
    puVar2 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
  }
  else {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    puVar2 = local_50;
    if (puVar3 <= puVar1) goto LAB_000dc038;
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectAtIndexedSubscript__0269cc78,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_indexPathForRow_inSection__0269e9a0,puVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
  }
  local_48 = 1;
  _objc_storeStrong(&local_50,0);
LAB_000dc1bc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

