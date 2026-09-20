// processSingleImageFile: @ 01faf608

/* Function Stack Size: 0x18 bytes */

bool WCRefineWatermarkLibraryViewController::processSingleImageFile_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(local_20 + (long)_libraryDirectory);
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,puVar1);
      _objc_retainAutoreleasedReturnValue();
      local_68 = 1;
      local_60 = uVar3;
      while( true ) {
        puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        if (((ulong)puVar2 & 1) == 0) break;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_____ld_png);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_58;
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar4 = *(undefined8 *)(local_20 + (long)_libraryDirectory);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_60;
        local_60 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_68 = local_68 + 1;
      }
      puVar1 = local_48;
      _UIImagePNGRepresentation();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_writeToFile_atomically__0269f928,local_60,1);
      local_11 = (byte)puVar1 & 1;
      local_3c = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

