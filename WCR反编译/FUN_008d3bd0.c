// FUN_008d3bd0 @ 008d3bd0

void FUN_008d3bd0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *local_98;
  ulong local_40 [3];
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  FUN_008ceaa4(local_20,PTR_s_attachmentButton_026a9d28,"_attachmentButton");
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_28 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    _objc_storeStrong(&local_28,0);
  }
  uVar3 = local_20;
  FUN_008d410c();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar3;
  FUN_008d48e4();
  if ((uVar3 & 1) != 0) {
    uVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_isUserInteractionEnabled_026ca770);
    uVar3 = local_40[0];
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      goto LAB_008d3e14;
    }
  }
  uVar3 = local_28;
  FUN_008d48e4();
  if ((uVar3 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isUserInteractionEnabled_026ca770);
    uVar3 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      goto LAB_008d3e14;
    }
  }
  if (local_40[0] == 0) {
    local_98 = &local_28;
  }
  else {
    local_98 = local_40;
  }
  uVar3 = *local_98;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar3;
LAB_008d3e14:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

