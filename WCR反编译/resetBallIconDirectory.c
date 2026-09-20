// resetBallIconDirectory @ 01e0025c

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatBallWarehouseViewController::resetBallIconDirectory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  uint local_8c;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  byte local_29;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconDirectory__026c5c20,&::cf___);
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconPath_026b1a88);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  local_29 = (byte)IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_80 = &::cf___;
  }
  else {
    local_80 = &cf_WCRefine_SuperFloat_FloatBall;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefine_SuperFloat_FloatBall,PTR_s_stringByAppendingPathComponent__026cab30,
               local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_80;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_29 & 1) == 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_8c = 0;
    if (pcVar3 != (cfstringStruct *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_40;
      FUN_01dfcf28();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630);
      local_8c = (uint)puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_8c & 1) == 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,&::cf___);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconId__026b1a98,&cf_sf_none)
        ;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,local_40);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_Y_nmtvU_);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

