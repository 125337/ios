// FUN_0045d024 @ 0045d024

void FUN_0045d024(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double local_98;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar2 = local_28;
  uVar1 = DAT_026e0390;
  if ((uVar4 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_28;
    FUN_0045c7d8();
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      _CGRectGetMinX();
      dVar5 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      _CGRectGetWidth(dVar5,param_2,param_3);
      local_98 = param_1 - local_98;
      if (local_98 < 40.0) {
        local_98 = 40.0;
      }
      dVar6 = local_98 + 0.5;
      if (dVar6 < dVar5) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar5,dVar6,local_98,param_4,local_28,PTR_s_setFrame__026ca960);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

