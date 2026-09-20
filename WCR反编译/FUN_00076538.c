// FUN_00076538 @ 00076538

void FUN_00076538(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_130;
  undefined *local_118;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_1);
  if ((local_40 == (undefined *)0x0) ||
     (puVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    local_38 = (undefined *)0x0;
    local_50 = 1;
  }
  else {
    local_28 = &DAT_028c7f38;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02579a70);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    puVar3 = DAT_028c7d88;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c7d88,PTR_s_objectForKeyedSubscript__0269d098,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = local_58;
    if (puVar3 == puVar4) {
      local_38 = (undefined *)0x0;
      local_50 = 1;
    }
    else if (local_58 == (undefined *)0x0) {
      puVar2 = local_40;
      FUN_00076c18();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      if ((puVar2 == (undefined *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0),
         puVar2 == (undefined *)0x0)) {
        puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028c7d88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_40);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_38 = (undefined *)0x0;
        local_50 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 0;
        local_68 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_60,&local_69);
        if ((((ulong)puVar2 & 1) == 0) || ((local_69 & 1) != 0)) {
          puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c7d88,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_40);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_38 = (undefined *)0x0;
          local_50 = 1;
        }
        else {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          FUN_0007627c();
          if (((ulong)puVar3 & 1) == 0) {
            local_118 = (undefined *)0x0;
          }
          else {
            local_118 = local_60;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_78 = local_118;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          bVar1 = local_78 == (undefined *)0x0;
          if (bVar1) {
            local_130 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            local_80 = local_130;
          }
          else {
            local_130 = local_78;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028c7d88,PTR_s_setObject_forKeyedSubscript__0269d248,local_130,local_40);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_80);
          }
          puVar2 = local_78;
          (*(code *)PTR__objc_retain_02578638)();
          local_38 = puVar2;
          local_50 = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = puVar2;
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

