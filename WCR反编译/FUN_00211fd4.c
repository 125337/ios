// FUN_00211fd4 @ 00211fd4

void FUN_00211fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined *local_68;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar4 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028c919b);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_40 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = puVar4 != local_30;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    if (bVar3) {
      bVar2 = false;
      bVar1 = false;
      bVar3 = false;
      if (local_40 != (undefined *)0x0) {
        local_68 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar3 = false;
        if (local_68 != (undefined *)0x0) {
          local_78 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar3 = local_78 != local_30;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if (bVar3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeFromSuperview_026ca800);
      }
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar5,PTR_s_initWithFrame__026ca6e8);
      puVar4 = local_40;
      local_40 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUserInteractionEnabled__026caad8,0);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setClipsToBounds__026ca8c8,1);
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_insertSubview_atIndex__026ca748,local_40,0);
      _objc_setAssociatedObject(local_30,&DAT_028c919b,local_40,1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_40,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sendSubviewToBack__0269f5c0,local_40);
    }
    puVar4 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar4;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

