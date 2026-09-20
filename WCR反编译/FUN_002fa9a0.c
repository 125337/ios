// FUN_002fa9a0 @ 002fa9a0

void FUN_002fa9a0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  undefined *puVar4;
  ulong uVar5;
  float fVar6;
  double dVar7;
  undefined *local_60;
  ulong local_38;
  undefined *local_28;
  ulong local_18;
  
  dVar3 = DAT_02323db0;
  local_18 = 0;
  dVar7 = DAT_02323db0;
  _objc_storeStrong(&local_18,param_1);
  uVar5 = local_18;
  if (local_18 != 0) {
    bVar1 = (param_2 & 1) == 0;
    if (bVar1) {
      local_60 = (undefined *)0x0;
    }
    else {
      local_60 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = local_60;
    }
    _objc_setAssociatedObject(uVar5,&DAT_026dfdc8,local_60,1);
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_28);
    }
    if ((param_2 & 1) == 0) {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3f800000);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      uVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
      bVar2 = false;
      bVar1 = false;
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alpha_026ca4d8);
        bVar1 = false;
        if (dVar7 <= dVar3) {
          local_38 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
          fVar6 = SUB84(dVar7,0);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = (double)fVar6 <= dVar3;
        }
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_38);
      }
      if (!bVar1) {
        FUN_002fad14(local_18,1);
        FUN_002fade8(0,local_18);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
        uVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0);
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

