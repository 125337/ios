// FUN_00192440 @ 00192440

byte FUN_00192440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_130;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  long local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  if ((((local_30 == (undefined *)0x0) || (local_38 == 0)) || (local_40 == (cfstringStruct *)0x0))
     || ((lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988),
         lVar1 < 0 ||
         (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210),
         lVar1 < 0)))) {
    local_21 = 0;
    local_50 = 1;
  }
  else {
    pcVar2 = local_40;
    FUN_00192f68();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_50 = 1;
    }
    else {
      puVar3 = local_30;
      FUN_0018a86c(local_30,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      lVar1 = local_38;
      local_60 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_60;
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,puVar4)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_70;
        local_70 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,local_68);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      lVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_70;
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_objectForKeyedSubscript__0269d098,puVar4)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8,local_58);
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,local_78);
        pcVar2 = local_58;
        FUN_0018d720();
        _objc_retainAutoreleasedReturnValue();
        local_130 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_130 = &cf_<nil>;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_130;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_21 = 1;
        local_50 = 1;
        _objc_storeStrong(&local_88,0);
      }
      else {
        local_21 = 0;
        local_50 = 1;
      }
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

