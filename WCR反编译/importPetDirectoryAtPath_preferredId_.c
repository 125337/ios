// importPetDirectoryAtPath:preferredId: @ 01e0a148

/* Function Stack Size: 0x20 bytes */

long_long WCRefineSuperFloatBallWarehouseViewController::importPetDirectoryAtPath_preferredId_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ID IVar8;
  long local_b8;
  undefined8 local_90;
  long local_88;
  ID local_80;
  ID local_78;
  byte local_69;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  long_long local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    lVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_stringByAppendingPathComponent__026cab30,&cf_pet_json);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_58 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      local_28 = 0;
      local_4c = 1;
    }
    else {
      lVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      local_69 = 0;
      if (lVar4 == 0) {
        local_b8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_b8;
      }
      else {
        local_b8 = local_48;
      }
      local_69 = lVar4 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_b8;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      lVar4 = local_60;
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_60;
      local_60 = lVar7;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      IVar8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar8,PTR_s_stringByAppendingPathComponent__026cab30,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_88 = 1;
      local_80 = IVar8;
      while( true ) {
        puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        IVar8 = local_78;
        if (((ulong)puVar6 & 1) == 0) break;
        local_88 = local_88 + 1;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_80;
        local_80 = IVar8;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_90 = 0;
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_90;
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_90,uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_28 = (long_long)(((ulong)puVar6 & 1) != 0);
      local_4c = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

