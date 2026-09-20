// FUN_0032c298 @ 0032c298

void FUN_0032c298(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_50 [3];
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    while (puVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0),
          puVar2 != (undefined *)0x0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_frame_026ca640);
      dVar4 = param_1;
      _CGRectGetHeight(param_1,param_2,param_3,param_4);
      if ((dVar4 <= 0.0) ||
         (dVar4 = param_1, _CGRectGetHeight(param_1,param_2,param_3,param_4), 1.0 < dVar4)) {
LAB_0032c49c:
        dVar4 = param_1;
        uVar5 = param_2;
        uVar6 = param_3;
        uVar7 = param_4;
        _CGRectGetWidth();
        bVar1 = false;
        if (0.0 < dVar4) {
          dVar4 = param_1;
          uVar6 = param_3;
          uVar7 = param_4;
          _CGRectGetWidth(param_1,param_2);
          uVar5 = 0x3ff0000000000000;
          bVar1 = false;
          if (dVar4 <= 1.0) {
            _CGRectGetHeight(param_1,param_2);
            uVar5 = 0x4034000000000000;
            bVar1 = 20.0 <= param_1;
            dVar4 = param_1;
            uVar6 = param_3;
            uVar7 = param_4;
          }
        }
      }
      else {
        dVar4 = param_1;
        uVar6 = param_3;
        uVar7 = param_4;
        _CGRectGetWidth(param_1,param_2);
        uVar5 = 0x4034000000000000;
        bVar1 = true;
        if (dVar4 < 20.0) goto LAB_0032c49c;
      }
      puVar2 = local_50[0];
      if (bVar1) {
        puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        puVar3 = local_50[0];
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_setHidden__026ca970,1);
            puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_setBackgroundColor__026ca888);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
            puVar3 = local_50[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
        }
      }
      puVar2 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_38;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(local_50,0);
      param_1 = dVar4;
      param_2 = uVar5;
      param_3 = uVar6;
      param_4 = uVar7;
    }
    _objc_storeStrong(0,&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

