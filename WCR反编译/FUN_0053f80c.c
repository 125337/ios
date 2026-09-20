// FUN_0053f80c @ 0053f80c

void FUN_0053f80c(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  uint local_5c;
  char *local_58 [3];
  char *local_40;
  undefined8 local_38;
  ulong local_30;
  char *local_28;
  
  pcVar2 = "WCTempSaveModel";
  local_38 = param_2;
  local_30 = param_1;
  _objc_getClass();
  local_40 = pcVar2;
  _objc_alloc_init();
  local_58[0] = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    local_69 = 0;
    local_79 = 0;
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (uVar7 != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      bVar1 = uVar3 != 0;
      local_78 = uVar3;
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar7);
    if (bVar1) {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setContent__026a4ad8);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar7 != 0) {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      if ((local_88 != 0) &&
         (uVar7 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
         uVar7 != 0)) {
        uVar7 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setImageArray__026a4dd0,uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      _objc_storeStrong(&local_88,0);
    }
    local_90 = 0;
    local_99 = 0;
    local_a9 = 0;
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (uVar7 != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      bVar1 = uVar3 != 0;
      local_a8 = uVar3;
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(uVar7);
    if (bVar1) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageSelectorController_026a4d88);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_90;
      local_90 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sightDraft_026a4d98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar7 != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sightDraft_026a4d98);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_90;
        local_90 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
    }
    if (local_90 != 0) {
      uVar7 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_itemAry_026a4dd8);
      if ((uVar7 & 1) != 0) {
        uVar3 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_performSelector__026ca7b8,PTR_s_itemAry_026a4dd8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0;
        local_b8 = uVar3;
        if (uVar3 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
          uVar7 = 0;
          if (uVar3 != 0) {
            local_c0 = 0;
            while( true ) {
              uVar3 = local_c0;
              uVar4 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
              uVar7 = uVar3 - uVar4;
              if (uVar4 <= uVar3) break;
              uVar7 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c0);
              _objc_retainAutoreleasedReturnValue();
              local_d0 = 0;
              local_c8 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_respondsToSelector__026ca818,PTR_s_getVideoPath_026a4de0);
              if ((uVar7 & 1) == 0) {
                uVar7 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_videoDraftPath_026a4de8
                          );
                if ((uVar7 & 1) != 0) {
                  uVar3 = local_c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c8,PTR_s_performSelector__026ca7b8,PTR_s_videoDraftPath_026a4de8)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = local_d0;
                  local_d0 = uVar3;
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                }
              }
              else {
                uVar3 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_performSelector__026ca7b8,PTR_s_getVideoPath_026a4de0);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = local_d0;
                local_d0 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar7);
              }
              uVar7 = 0;
              if (local_d0 == 0) {
LAB_00540388:
                local_5c = 0;
              }
              else {
                uVar3 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
                uVar7 = 0;
                if (uVar3 == 0) goto LAB_00540388;
                puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
                uVar7 = (ulong)puVar6 & 0xff;
                if (((ulong)puVar6 & 1) == 0) goto LAB_00540388;
                uVar7 = local_90;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_90,PTR_s_respondsToSelector__026ca818,
                           PTR_s_setDraftItemVideoPath__026a4df0);
                if ((uVar7 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_90,PTR_s_performSelector_withObject__026ca7c0,
                             PTR_s_setDraftItemVideoPath__026a4df0,local_d0);
                }
                uVar7 = 3;
                local_5c = 3;
              }
              _objc_storeStrong(uVar7,&local_d0);
              _objc_storeStrong(&local_c8,0);
              uVar7 = (ulong)local_5c;
              if (local_5c != 0) break;
              local_c0 = local_c0 + 1;
            }
          }
        }
        _objc_storeStrong(uVar7,&local_b8,0);
      }
      puVar5 = PTR_WCRefineMomentsDraftManager_026ce740;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsDraftManager_026ce740,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setSightDraft__026a4e00,local_90);
    }
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_poiInfo_026a4da0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar7 != 0) {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_poiInfo_026a4da0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setPoiInfo__026a4e08);
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tempSelectContacts_026a4e10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar7 != 0) {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tempSelectContacts_026a4e10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setTempSelectContacts__026a4e18);
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    uVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_extBean_026a4e20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar7 != 0) {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_extBean_026a4e20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setExtBean__026a4e28);
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_setLastSaveDate__026a4e30);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_58[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_5c = 1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(local_58,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

