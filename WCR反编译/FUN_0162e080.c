// FUN_0162e080 @ 0162e080

void FUN_0162e080(void)

{
  undefined *puVar1;
  u_int32_t uVar2;
  undefined *puVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_68;
  undefined1 *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  uint local_2c;
  undefined1 *local_28;
  char *local_20;
  char *local_18;
  
  puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballAppearance_026b18a0);
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    _WCRSuperFloatPetModeAllowed(0);
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      if (pcVar4 != (char *)0x0) {
        local_18 = pcVar4;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_20 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_show_0269d280);
        _objc_storeStrong(&local_20,0);
      }
    }
    else {
      puVar3 = PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSuperFloatBallWarehouseViewController_026ce920,
                 PTR_s_allPetRelativePaths_026b1a80);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
      if (puVar3 == (undefined1 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_fe_irHQ_eQ);
        local_2c = 1;
      }
      else {
        pcVar5 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconPath_026b1a88);
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_68 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = local_68;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        local_40 = (undefined *)0x0;
        puVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
        if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          puVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_40;
          local_40 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          puVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
          local_48 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_removeObject__0269d678,local_38);
          puVar6 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
          if (puVar6 == (undefined1 *)0x0) {
            puVar7 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
            puVar6 = local_48;
            local_48 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          puVar6 = local_48;
          puVar7 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
          uVar2 = _arc4random_uniform((u_int32_t)puVar7);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_objectAtIndexedSubscript__0269cc78,uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_40;
          local_40 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_48,0);
        }
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (puVar3 != (undefined1 *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,local_40
                    );
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconId__026b1a98,
                     &cf_sf_custom);
          _WCRSuperFloatNotifySettingsChanged();
          puVar1 = PTR_WCRefineHelper_026ce000;
          puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
          puVar8 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_stringWithFormat__0269cca8,&cf__Rbc_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar8);
        }
        local_2c = (uint)(puVar3 == (undefined1 *)0x0);
        _objc_storeStrong(&local_40);
        _objc_storeStrong(&local_38,0);
      }
      _objc_storeStrong(&local_28,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQRbc0RN_Y);
  }
  return;
}

