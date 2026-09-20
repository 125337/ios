// FUN_00887184 @ 00887184

void FUN_00887184(float param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  long local_50 [3];
  long local_38;
  undefined4 local_30;
  byte local_29;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_29 = param_3;
  if (local_28 == 0) {
    local_30 = 1;
  }
  else {
    lVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cd8c4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_38 = lVar1;
    _objc_getAssociatedObject(local_28,&DAT_028cd8c5);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50[0] = lVar2;
    if ((local_29 & 1) == 0) {
      if ((local_38 != 0) || (lVar2 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
        lVar1 = local_38;
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_b0 = PTR___NSConcreteGlobalBlock_02578658;
        local_a8 = 0xd0800000;
        local_a4 = 0;
        local_a0 = FUN_00888868;
        local_98 = &DAT_025800c0;
        (*(code *)PTR__objc_retain_02578638)();
        lVar2 = local_28;
        local_90 = lVar1;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_50[0];
        local_88 = lVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_b0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
        if (local_38 != 0) {
          _objc_setAssociatedObject(local_28,&DAT_028cd8c4,0,1);
        }
        if (local_50[0] != 0) {
          _objc_setAssociatedObject(local_28,&DAT_028cd8c5,0,1);
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_90,0);
      }
    }
    else {
      if (local_38 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar1,&DAT_028cd8c4,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      lVar1 = local_28;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      if (local_50[0] == 0) {
        lVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  ((double)param_1,puVar3,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar1,&DAT_028cd8c5,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      lVar1 = local_28;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_78 = PTR___NSConcreteGlobalBlock_02578658;
      local_70 = 0xd0800000;
      local_6c = 0;
      local_68 = FUN_00888708;
      local_60 = &DAT_0257a9d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_78);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

