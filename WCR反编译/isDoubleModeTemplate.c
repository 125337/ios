// isDoubleModeTemplate @ 00715fc4

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotFrameProcessor::isDoubleModeTemplate(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  undefined4 local_58;
  ID local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_effectiveFrameTemplateRelativePa_026a7608);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  if ((IVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0), IVar2 == 0)) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__);
    if ((IVar2 & 1) == 0) {
      IVar3 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_48;
      local_48 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_60,0);
    }
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasSuffix__0269d018,&cf__);
    IVar2 = local_48;
    if ((IVar3 & 1) != 0) {
      IVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_substringToIndex__0269d6c0,IVar3 - 1);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_48;
      local_48 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_48;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____cfg);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630,local_70);
    if (((ulong)puVar1 & 1) == 0) {
      local_21 = 0;
      local_58 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_21 = 0;
        local_58 = 1;
      }
      else {
        local_88 = 0;
        local_98 = 0;
        puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                   PTR_s_JSONObjectWithData_options_error_026ca480,puVar1,0,&local_98);
        _objc_retainAutoreleasedReturnValue();
        _objc_storeStrong(&local_88,local_98);
        local_90 = puVar4;
        if ((puVar4 == (undefined *)0x0) || (local_88 != 0)) {
          local_21 = 0;
          local_58 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_mode);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToString__0269ccc8,&cf_double);
          local_21 = (byte)puVar4 & 1;
          local_58 = 1;
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

