// FUN_01566148 @ 01566148

void FUN_01566148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_50;
  long local_48;
  long local_40;
  uint local_38;
  undefined1 local_31;
  long local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  FUN_01566a58();
  local_21 = 0;
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_21 = 1;
    local_20 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_31 = uVar1;
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_20);
  }
  if (bVar2) {
    local_38 = 1;
  }
  else {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_01563f9c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    bVar2 = local_40 != 0;
    if (bVar2) {
      lVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      lVar3 = local_48;
      lVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      lVar6 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_convertRect_fromView__026a9178);
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,param_3,param_4,puVar5,PTR_s_initWithFrame__026ca6e8);
      local_50 = puVar5;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setImage__026ca978,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setContentMode__026ca8e0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addSubview__026ca4c0,local_50);
      _objc_storeStrong(&DAT_028e38e0,local_50);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    local_38 = (uint)!bVar2;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

