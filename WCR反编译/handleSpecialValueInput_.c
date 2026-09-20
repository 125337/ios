// handleSpecialValueInput: @ 01843a98

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::handleSpecialValueInput_
               (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  float fVar7;
  double local_80;
  double local_48;
  long local_40;
  undefined4 local_38;
  byte local_31;
  ID local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323ca0;
  local_28 = 0;
  local_80 = DAT_02323ca0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingValueKey_026b6788);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_30 = IVar2;
  _objc_getAssociatedObject(local_18,"WCRSpecialPendingIsScale");
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_31 = (byte)IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingValueKey__026b6778,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,0);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_38 = 1;
  }
  else {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_40 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_40;
    local_40 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    lVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar6 == 0) {
      fVar7 = 1.5;
      if ((local_31 & 1) == 0) {
        fVar7 = 0.0;
      }
      local_80 = (double)fVar7;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
    }
    local_48 = local_80;
    if ((local_31 & 1) == 0) {
      if (local_80 < -50.0) {
        local_48 = -50.0;
      }
      if (50.0 < local_48) {
        local_48 = 50.0;
      }
    }
    else {
      if (local_80 <= 0.0) {
        local_48 = 1.5;
      }
      if (local_48 < dVar1) {
        local_48 = dVar1;
      }
      if (5.0 < local_48) {
        local_48 = 5.0;
      }
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_markDirtyPersistAndReload_026b66f0);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

