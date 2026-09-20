// FUN_003dce94 @ 003dce94

void FUN_003dce94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  char *local_f8;
  char *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78 [4];
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  int local_34;
  char *local_30;
  char *local_28;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_34 = 1;
    goto LAB_003ddbb8;
  }
  pcVar1 = "MMUILongPressImageView";
  _objc_getClass();
  pcVar2 = local_30;
  local_40 = pcVar1;
  FUN_003ca4e8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  pcVar4 = local_40;
  pcVar1 = local_48;
  if (((ulong)pcVar2 & 1) == 0) {
    local_148 = (char *)0x0;
    if (local_40 != (char *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isSubclassOfClass__0269e590,puVar3);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithImage__0269e558
                  );
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar4 = local_40;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithFrame__026ca6e8);
          pcVar1 = local_148;
          local_148 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        else {
          pcVar4 = local_40;
          _objc_alloc();
          pcVar2 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithImage__0269e558,0);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_148;
          local_148 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
    }
    pcVar1 = local_148;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithFrame__026ca6e8);
      pcVar1 = local_148;
      local_148 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,local_148,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setAccessibilityLabel__0269e968,&cf_4YP);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_148);
    FUN_00367110(local_30,&cf_headImageView,local_148);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    if (pcVar1 != (char *)0x0) {
      _object_setIvar(local_30,pcVar1,local_148);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _class_getInstanceVariable();
    if (pcVar1 != (char *)0x0) {
      _object_setIvar(local_30,pcVar1,local_148);
    }
    pcVar1 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_34 = 1;
    _objc_storeStrong(&local_148,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_40;
    local_50 = pcVar1;
    if (local_40 == (char *)0x0) {
LAB_003dd574:
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (pcVar1 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_50);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      local_140 = param_1;
      uStack_138 = param_2;
      local_130 = param_3;
      uStack_128 = param_4;
      local_120 = param_1;
      uStack_118 = param_2;
      local_110 = param_3;
      uStack_108 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_50,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAutoresizingMask__026ca878,0x12);
      pcVar1 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_34 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isSubclassOfClass__0269e590,puVar3);
      if ((((ulong)pcVar4 & 1) == 0) ||
         (pcVar1 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_40),
         ((ulong)pcVar1 & 1) != 0)) goto LAB_003dd574;
      local_58 = (char *)0x0;
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_image_026ca678);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_58;
        local_58 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_78[0] = (char *)0x0;
      pcVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithImage__0269e558);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar4 = local_40;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        local_98 = param_1;
        local_90 = param_2;
        local_88 = param_3;
        local_80 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithFrame__026ca6e8);
        pcVar1 = local_78[0];
        local_78[0] = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if ((local_58 != (char *)0x0) &&
           (pcVar1 = local_78[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_78[0],PTR_s_respondsToSelector__026ca818,PTR_s_setImage__026ca978),
           ((ulong)pcVar1 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_setImage__026ca978,local_58);
        }
      }
      else {
        pcVar4 = local_40;
        _objc_alloc();
        pcVar2 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_initWithImage__0269e558,local_58);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_78[0];
        local_78[0] = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar1 = local_78[0];
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar1 & 1) == 0) {
        local_34 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeFromSuperview_026ca800);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
        local_e0 = param_1;
        uStack_d8 = param_2;
        local_d0 = param_3;
        uStack_c8 = param_4;
        local_c0 = param_1;
        uStack_b8 = param_2;
        local_b0 = param_3;
        uStack_a8 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78[0],PTR_s_setAccessibilityLabel__0269e968,&cf_4YP);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addSubview__026ca4c0,local_78[0]);
        FUN_00367110(local_30,&cf_headImageView,local_78[0]);
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
        _class_getInstanceVariable();
        local_e8 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          _object_setIvar(local_30,pcVar1,local_78[0]);
        }
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
        _class_getInstanceVariable();
        local_f8 = pcVar1;
        if (pcVar1 != (char *)0x0) {
          _object_setIvar(local_30,pcVar1,local_78[0]);
        }
        pcVar1 = local_78[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_34 = 1;
      }
      _objc_storeStrong(local_78);
      _objc_storeStrong(&local_58,0);
      if (local_34 == 0) goto LAB_003dd574;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_003ddbb8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

