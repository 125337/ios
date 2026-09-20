// FUN_0079adf0 @ 0079adf0

void FUN_0079adf0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint local_104;
  uint local_94;
  long local_60;
  byte local_51;
  long local_50;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    FUN_007993a0(local_28,puVar1);
    local_51 = 0;
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_94 = 0;
    if (lVar3 != 0) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar1 = local_38;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      FUN_0079ddcc(lVar3,puVar1);
      local_94 = (uint)lVar3 ^ 1;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar1 = local_38;
    if ((local_94 & 1) != 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar2;
    if (lVar2 == 0) {
      local_2c = 1;
    }
    else {
      FUN_007993a0(lVar2,local_38);
      lVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_104 = 0;
      if (lVar3 != 0) {
        lVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar1 = local_38;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
        FUN_0079ddcc(lVar4,puVar1);
        local_104 = (uint)lVar4 ^ 1;
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      (*(code *)PTR__objc_release_02578630)(lVar2);
      puVar1 = local_38;
      if ((local_104 & 1) != 0) {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
        lVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      local_2c = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

