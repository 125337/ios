// FUN_015641e4 @ 015641e4

void FUN_015641e4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  uint local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  FUN_01559ec8();
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      local_60 = param_1;
      local_58 = param_2;
      local_50 = param_3;
      local_48 = param_4;
      _CGRectGetWidth();
      bVar1 = true;
      if (0.0 < param_1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
        local_80 = param_1;
        local_78 = param_2;
        local_70 = param_3;
        local_68 = param_4;
        _CGRectGetHeight();
        bVar1 = param_1 <= 0.0;
      }
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (!bVar1) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_fromView__026a9178,local_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar3,PTR_s_initWithFrame__026ca6e8);
      local_88 = puVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setImage__026ca978,local_30);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setContentMode__026ca8e0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setUserInteractionEnabled__026caad8,0);
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      _objc_storeStrong(&DAT_028e38d8,local_88);
      _objc_storeStrong(&local_88,0);
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

