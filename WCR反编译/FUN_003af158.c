// FUN_003af158 @ 003af158

undefined8
FUN_003af158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  _objc_storeStrong(&local_40,param_5);
  uVar1 = local_40;
  _objc_getAssociatedObject(local_40,&DAT_028ca128);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_48 = uVar1;
  _objc_getAssociatedObject(local_40,&DAT_028ca129);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_40;
  local_50 = uVar2;
  _objc_getAssociatedObject(local_40,&DAT_028ca12a);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_48;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_50;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar2 = local_58;
    if ((uVar1 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar2 & 1) != 0) &&
         (uVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
         uVar1 != 0)) {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
        local_a0 = param_1;
        local_98 = param_2;
        local_90 = param_3;
        local_88 = param_4;
        _CGRectInset();
        local_80 = param_1;
        local_78 = param_2;
        local_70 = param_3;
        local_68 = param_4;
        _CGRectContainsPoint(param_1,param_2,param_3,param_4,local_38,uStack_30);
        uVar2 = local_48;
        uVar1 = local_58;
        if ((uVar4 & 1) == 0) {
          local_28 = 0x7fffffffffffffff;
          local_5c = 1;
        }
        else {
          local_a8 = 0x7fffffffffffffff;
          local_b0 = 0x7fefffffffffffff;
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = uVar2;
          uStack_c8 = uStack_30;
          local_d0 = local_38;
          local_c0 = &local_a8;
          local_b8 = &local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0);
          local_28 = local_a8;
          local_5c = 1;
          _objc_storeStrong(&local_d8,0);
        }
        goto LAB_003af448;
      }
    }
  }
  local_28 = 0x7fffffffffffffff;
  local_5c = 1;
LAB_003af448:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

