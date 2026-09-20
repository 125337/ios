// FUN_0045fdc4 @ 0045fdc4

undefined8
FUN_0045fdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_58;
  
  uVar2 = *(ulong *)(param_5 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_58 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    local_58 = param_1;
  }
  return local_58;
}

