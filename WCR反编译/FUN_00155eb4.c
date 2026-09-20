// FUN_00155eb4 @ 00155eb4

void FUN_00155eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_90;
  undefined *local_80;
  undefined *local_70;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_5);
  puVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar5 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_40 = 1;
  }
  else {
    puVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    bVar4 = true;
    if (local_48 != (undefined *)0x0) {
      puVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = puVar5 != puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    if (bVar4) {
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      bVar4 = false;
      if (local_48 != (undefined *)0x0) {
        local_70 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        bVar4 = false;
        if (local_70 != (undefined *)0x0) {
          local_80 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          local_90 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar4 = local_80 != local_90;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if (bVar4) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeFromSuperview_026ca800);
      }
      puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      puVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar6,PTR_s_initWithFrame__026ca6e8);
      puVar5 = local_48;
      local_48 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUserInteractionEnabled__026caad8,0);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setClipsToBounds__026ca8c8,1);
      puVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAutoresizingMask__026ca878,0x12);
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,local_48,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    puVar5 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

