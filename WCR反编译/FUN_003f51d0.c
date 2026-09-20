// FUN_003f51d0 @ 003f51d0

byte FUN_003f51d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  double local_130;
  long local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  bVar1 = true;
  if (local_30 != 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    local_21 = false;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar3 == 0x7fffffffffffffff) {
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_font_0269ea00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar2);
      uVar5 = 0x3ff0000000000000;
      local_130 = param_1;
      if (param_1 < 1.0) {
        local_130 = 1.0;
      }
      lVar2 = local_30;
      dVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layoutManager_026a34a8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textContainer_026a34b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_usedRectForTextContainer__026a34b8);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      _CGRectGetHeight(dVar4,uVar5,param_3,param_4);
      local_21 = local_130 + 0.5 < dVar4;
    }
    else {
      local_21 = true;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

