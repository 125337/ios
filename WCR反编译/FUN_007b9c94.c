// FUN_007b9c94 @ 007b9c94

byte FUN_007b9c94(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_240;
  bool local_131;
  ulong local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double dStack_58;
  undefined4 local_50;
  ulong local_40;
  long local_38;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  uVar2 = local_30;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar2;
  if ((uVar2 == 0) || (local_38 == 0)) {
    local_21 = true;
    local_50 = 1;
  }
  else {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_offset);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = param_1;
    dStack_58 = param_2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_adjustedContentInset_0269dcd0);
    lVar3 = local_38;
    dVar5 = param_2;
    local_88 = param_2;
    local_80 = param_1;
    local_78 = param_3;
    local_70 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_insetTop);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    dVar4 = dStack_58 - (param_2 - dVar5);
    uVar2 = local_30;
    local_68 = param_2 - dVar5;
    dStack_58 = dVar4;
    _objc_getAssociatedObject(local_30,DAT_026f4658);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_38;
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_stripScreenY);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_38;
    local_240 = dVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_stripScreenY);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar3 != 0) {
      FUN_007b881c(local_30,local_90);
      dVar5 = 8.988465674311579e+307;
      if (local_240 < 8.988465674311579e+307) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentOffset_0269dd18);
        local_240 = dVar5 + (local_240 - dVar4);
        dStack_58 = local_240;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_adjustedContentInset_0269dcd0);
    local_240 = -local_240;
    if (local_240 < dStack_58) {
      local_240 = dStack_58;
    }
    dStack_58 = local_240;
    uVar2 = local_40;
    FUN_007b64cc(local_40,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentOffset_0269dd18);
    dVar5 = ABS(local_240 - local_60);
    dVar6 = 0.5;
    bVar1 = true;
    if (dVar5 < 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentOffset_0269dd18);
      dVar5 = ABS(dVar6 - dStack_58);
      bVar1 = 0.5 <= dVar5;
    }
    dVar6 = 0.5;
    if (bVar1) {
      dVar5 = local_60;
      dVar6 = dStack_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentOffset_animated__0269ddd8,0);
    }
    if (lVar3 != 0) {
      FUN_007b881c(local_30,local_90);
      if (dVar5 < 8.988465674311579e+307) {
        local_131 = ABS(dVar5 - dVar4) < 1.0;
      }
      else {
        local_131 = false;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentOffset_0269dd18);
      local_131 = ABS(dVar6 - dStack_58) < 1.0;
    }
    if ((uVar2 & 1) != 0) {
      local_131 = false;
    }
    local_21 = local_131;
    local_50 = 1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

