// FUN_01dffa34 @ 01dffa34

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01dffa34(long param_1)

{
  bool bVar1;
  byte bVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  uint local_13c;
  cfstringStruct *local_130;
  cfstringStruct *local_120;
  cfstringStruct *local_100;
  bool local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  byte local_51;
  undefined *local_50;
  byte local_41;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  pcVar3 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
  local_51 = 0;
  bVar2 = 1;
  if (pcVar3 != (cfstringStruct *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = 1;
    if (((ulong)puVar4 & 1) != 0) {
      bVar2 = local_41 ^ 1;
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((bVar2 & 1) == 0) {
    uVar5 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    local_68 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,uVar6);
    if ((((ulong)pcVar3 & 1) == 0) &&
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_60),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_ec_OlvQveN9Y);
      local_58 = 1;
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_60);
      local_100 = local_40;
      local_79 = 0;
      bVar1 = ((ulong)pcVar3 & 1) == 0;
      if (bVar1) {
        uVar6 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_substringFromIndex__0269d120,uVar6);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_100;
      }
      else {
        local_100 = &cf___;
      }
      local_79 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_100;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconPath_026b1a88);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
      local_89 = (byte)uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconDirectory__026c5c20,
                 local_70);
      puVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      local_a9 = false;
      if (puVar4 == (undefined *)0x0) {
        local_120 = &cf___;
      }
      else {
        local_120 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_stringByAppendingPathComponent__026cab30,local_98);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_120;
      }
      local_a9 = puVar4 != (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_120;
      if ((local_a9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_130 = &cf___;
      }
      else {
        local_130 = local_a0;
        FUN_01dfcf28();
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_130;
      }
      local_c1 = pcVar3 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = local_130;
      if (local_c1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      if ((local_89 & 1) == 0) {
        pcVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
        local_13c = 0;
        if (pcVar3 != (cfstringStruct *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_13c = (uint)puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        if ((local_13c & 1) == 0) {
          puVar4 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,&cf___
                      );
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconId__026b1a98,
                       &cf_sf_none);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,local_a0
                    );
        }
      }
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
      puVar4 = PTR_WCRefineHelper_026ce000;
      pcVar8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      pcVar3 = &cf__n__nmtvU_;
      if (pcVar8 == (cfstringStruct *)0x0) {
        pcVar3 = &cf___O_uvU_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78,pcVar3);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      local_58 = 0;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_b);
    local_58 = 1;
  }
  _objc_storeStrong(&local_40,0);
  if (local_58 == 0) {
    local_58 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

