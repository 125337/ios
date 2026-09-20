// applyExtraButtonOffsetValue:forTag: @ 019b54a0

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarButtonActionViewController::applyExtraButtonOffsetValue_forTag_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 0x1f5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarExtraButtonOffs_026ba8d0);
  }
  else if (local_30 == 0x1f6) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarExtraButtonOffs_026ba8d8);
  }
  else if (local_30 == 0x1f7) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarExtraButtonSize_026ba8e0);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_isExtraButtonIconSizeSliderTag__026ba8c8,local_30);
    if ((IVar2 & 1) != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_tabIndexForExtraButtonIconSizeSl_026ba8e8,local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,local_18,PTR_s_setExtraButtonIconSize_forTabInd_026ba8f0,IVar2);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

