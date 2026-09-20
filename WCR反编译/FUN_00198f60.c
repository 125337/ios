// FUN_00198f60 @ 00198f60

void FUN_00198f60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((((local_20 == 0) || (local_28 == 0)) ||
      (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_section_0269e988),
      lVar1 < 0)) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210),
     uVar3 = local_20, lVar1 < 0)) {
    local_18 = 0;
    local_38 = 1;
    goto LAB_00199240;
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_section_0269e988);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
  FUN_0018f6dc(uVar3,lVar1,lVar2 + 1);
  uVar4 = local_20;
  lVar1 = local_28;
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_section_0269e988);
  FUN_0018f978(uVar4,lVar1,local_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar4 & 1) == 0) {
LAB_0019919c:
    local_18 = 0;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    local_18 = local_48;
    if ((long)uVar3 <= lVar1) goto LAB_0019919c;
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectAtIndexedSubscript__0269cc78,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  local_38 = 1;
  _objc_storeStrong(&local_48,0);
LAB_00199240:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

