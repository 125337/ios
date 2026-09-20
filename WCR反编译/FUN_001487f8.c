// FUN_001487f8 @ 001487f8

void FUN_001487f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined *puVar3;
  undefined *local_20;
  undefined *local_18;
  undefined *puVar2;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_5);
  if (local_20 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_capInsets_0269f428);
    uVar1 = (uint)puVar2;
    FUN_00148ae8(param_1,param_2,param_3,param_4,*(undefined8 *)PTR__UIEdgeInsetsZero_02578118,
                 *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 8),
                 *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x10),
                 *(undefined8 *)(PTR__UIEdgeInsetsZero_02578118 + 0x18));
    puVar2 = local_20;
    local_18 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    if ((uVar1 & 1) == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scale_026ca830);
      puVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imageOrientation_0269f430);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,local_18,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar2,puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

