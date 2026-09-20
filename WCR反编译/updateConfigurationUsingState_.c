// updateConfigurationUsingState: @ 01eb0c84

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCell::updateConfigurationUsingState_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_88;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined1 local_39;
  ID local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_30 = PTR_WCRefineToDoCell_026d01c0;
  _objc_msgSendSuper2(&local_38,PTR_s_updateConfigurationUsingState__026c7708,local_28);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = IVar3 == 2;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_51 = 0;
  local_61 = 0;
  local_88 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_39 = bVar1;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323c68,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_88;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02324258,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_88;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  puVar4 = PTR__OBJC_CLASS___UIBackgroundConfiguration_026cf6c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBackgroundConfiguration_026cf6c0,
             PTR_s_listGroupedCellConfiguration_026c7710);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setBackgroundColor__026ca888,local_48);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setBackgroundConfiguration__026c7718,local_70);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

