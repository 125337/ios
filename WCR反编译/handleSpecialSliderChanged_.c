// handleSpecialSliderChanged: @ 018430b0

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::handleSpecialSliderChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  float fVar7;
  double dVar8;
  long local_60;
  long local_58;
  long local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  byte local_31;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  dVar2 = DAT_02324140;
  dVar1 = DAT_02323ca0;
  local_28 = 0;
  dVar8 = DAT_02324140;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  fVar7 = SUB84(dVar8,0);
  lVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6578);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = local_28;
  local_30 = lVar3;
  _objc_getAssociatedObject(local_28,"WCRSpecialSliderIsScale");
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  local_31 = (byte)lVar3;
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    local_40 = (double)fVar7;
    if ((local_31 & 1) == 0) {
      local_48 = (double)((float)(int)(local_40 * 5.0) / 5.0);
      if (local_48 < -50.0) {
        local_48 = -50.0;
      }
      if (50.0 < local_48) {
        local_48 = 50.0;
      }
    }
    else {
      local_48 = (double)((float)(int)(local_40 * 5.0) / 5.0);
      if (local_48 < dVar1) {
        local_48 = dVar1;
      }
      if (5.0 < local_48) {
        local_48 = 5.0;
      }
    }
    local_50 = (long)(local_40 + dVar2);
    local_58 = (long)(local_48 + dVar2);
    if (0.001 < ABS((float)(local_48 - local_40))) {
      (*(code *)PTR__objc_msgSend_02578628)((float)local_48,local_28,PTR_s_setValue__026a51b0);
    }
    if (local_50 != local_58) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hapticGenerator_026b5f48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hapticGenerator_026b5f48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_60;
    if (local_60 != 0) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_displayTextForKey_isScale__026b6768,local_30,local_31 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_setTitle_forState__026caab8,IVar5,0);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshPreviewHeaderOnly_026b66f8);
    _objc_storeStrong(&local_60,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

