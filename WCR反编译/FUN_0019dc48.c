// FUN_0019dc48 @ 0019dc48

void FUN_0019dc48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58 [3];
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_6);
  puVar2 = local_30;
  if (local_28 == (undefined *)0x0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,
                 &cf_person_circle_fill);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_40;
      local_40 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24fb35);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    local_58[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_28;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        _objc_storeStrong(local_58,local_28);
      }
    }
    puVar2 = local_58[0];
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24fb34);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58[0];
      local_58[0] = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_58[0];
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR_WCRefineContactsPackAvatarImageView_026ce3a0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__026ca6e8);
      puVar2 = local_58[0];
      local_58[0] = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setTag__026caa80,DAT_02323df0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setContentMode__026ca8e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setClipsToBounds__026ca8c8,1);
      FUN_0019d350(local_58[0]);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_58[0]);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setImage__026ca978,local_40);
    FUN_0019d350(local_58[0]);
    FUN_0019e234(local_28);
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      FUN_0019e234();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

