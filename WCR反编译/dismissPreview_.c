// dismissPreview: @ 01fadabc

/* Function Stack Size: 0x18 bytes */

void WCRefineWatermarkLibraryViewController::dismissPreview_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ulong local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  local_30 = 0;
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_28;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  puVar2 = PTR___NSConcreteStackBlock_02578660;
  if (local_30 != 0) {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01fadd3c;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_30;
    local_38 = uVar3;
    local_80 = puVar2;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_01fadd80;
    local_68 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd3333333333333,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_58,
               &local_80);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

