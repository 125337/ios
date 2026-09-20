// saveImportedData:preferredExt:apply:preferredName: @ 01e0b86c

/* Function Stack Size: 0x2c bytes */

ID WCRefineSuperFloatBallWarehouseViewController::saveImportedData_preferredExt_apply_preferredName_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_e0;
  undefined *local_c0;
  long local_b8;
  ID local_b0;
  ID local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_49 = (byte)param_5;
  local_58 = (undefined *)0x0;
  _objc_storeStrong(&local_58,param_6);
  uVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_28 = (undefined *)0x0;
    local_5c = 1;
  }
  else {
    uVar1 = local_48;
    FUN_01dfde78();
    if ((uVar1 & 1) == 0) {
      _objc_storeStrong(&local_48,&cf_png);
    }
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_e0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_71 = 0;
    local_81 = 0;
    local_91 = 0;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_stringWithFormat__0269cca8,&cf_icon___);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_e0;
    }
    else {
      local_e0 = local_58;
    }
    local_91 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_e0;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    puVar2 = local_68;
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_68;
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_30;
    local_a0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_stringByAppendingPathComponent__026cab30,local_a0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = 1;
    local_b0 = IVar6;
    while( true ) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) break;
      local_b8 = local_b8 + 1;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld___)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_a0;
      local_a0 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar7 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_stringByAppendingPathComponent__026cab30,local_a0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_b0;
      local_b0 = IVar7;
      (*(code *)PTR__objc_release_02578630)(IVar6);
    }
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_writeToFile_atomically__0269f928,local_b0,1);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((uVar1 & 1) == 0) {
      local_28 = (undefined *)0x0;
      local_5c = 1;
    }
    else {
      IVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,local_c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconId__026b1a98,
                   &cf_sf_custom);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallAppearance__026c5c78,2);
      }
      puVar2 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_5c = 1;
      _objc_storeStrong(&local_c0,0);
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

