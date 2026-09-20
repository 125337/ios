// FUN_000f11a4 @ 000f11a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_000f11a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  _objc_storeStrong(&local_40,param_5);
  uVar2 = local_40;
  _objc_getAssociatedObject(local_40,&DAT_028c83a3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  local_48 = uVar2;
  _objc_getAssociatedObject(local_40,&DAT_028c83a4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_60[0] = uVar3;
  _objc_getAssociatedObject(local_40,&DAT_028c83a5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_48;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar2 = local_60[0];
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar3 = local_68;
    if ((uVar2 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((uVar3 & 1) != 0) &&
         (uVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0),
         uVar2 != 0)) {
        uVar2 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_frame_026ca640);
        uVar1 = (uint)uVar2;
        local_b0 = param_1;
        local_a8 = param_2;
        local_a0 = param_3;
        local_98 = param_4;
        _CGRectInset();
        uStack_d8 = uStack_30;
        local_e0 = local_38;
        local_d0 = param_1;
        uStack_c8 = param_2;
        local_c0 = param_3;
        uStack_b8 = param_4;
        local_90 = param_1;
        uStack_88 = param_2;
        local_80 = param_3;
        uStack_78 = param_4;
        _CGRectContainsPoint(param_1,param_2,param_3,param_4,local_38,uStack_30);
        uVar3 = local_48;
        uVar2 = local_68;
        if ((uVar1 & 1) == 0) {
          local_28 = 0x7fffffffffffffff;
          local_6c = 1;
        }
        else {
          local_e8 = 0x7fffffffffffffff;
          local_f0 = 0x7fefffffffffffff;
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = uVar3;
          uStack_108 = uStack_30;
          local_110 = local_38;
          local_100 = &local_e8;
          local_f8 = &local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0);
          local_28 = local_e8;
          local_6c = 1;
          _objc_storeStrong(&local_118,0);
        }
        goto LAB_000f15dc;
      }
    }
  }
  local_28 = 0x7fffffffffffffff;
  local_6c = 1;
LAB_000f15dc:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

