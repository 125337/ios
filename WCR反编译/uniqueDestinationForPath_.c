// uniqueDestinationForPath: @ 0199ad80

/* Function Stack Size: 0x18 bytes */

ID WCRefineFileManagerViewController::uniqueDestinationForPath_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_a8;
  ID local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  uint local_3c;
  undefined *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_30);
  IVar3 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_30;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar3;
    for (local_60 = 2; IVar3 = local_30, local_60 < 1000; local_60 = local_60 + 1) {
      IVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      local_71 = 0;
      local_81 = 0;
      local_a8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (IVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_a8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____ld___
                  );
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_a8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_a8;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByAppendingPathComponent__026cab30,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_90 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,IVar3);
      IVar3 = local_90;
      bVar1 = ((ulong)puVar2 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar3;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_68,0);
      if (local_3c != 0) goto LAB_0199b120;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_3c = 1;
LAB_0199b120:
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

