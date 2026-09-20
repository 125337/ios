// FUN_0041d784 @ 0041d784

void FUN_0041d784(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_40 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_capturedDuringWarmUp);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_50;
      FUN_00420570();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_60 = pcVar2;
      FUN_00420570();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_30;
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
      if (local_60 == (cfstringStruct *)0x0) {
        local_158 = &cf___;
      }
      else {
        local_158 = local_60;
      }
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_158,&cf_sessionName);
      if (local_68 == (cfstringStruct *)0x0) {
        local_168 = &cf___;
      }
      else {
        local_168 = local_68;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,local_168,&cf_senderName);
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
      local_40 = 1;
      local_28 = pcVar2;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
      pcVar3 = local_30;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionName);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar3;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,&cf_sessionName);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_senderName);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_suppressPopup);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      local_40 = 1;
      local_28 = pcVar2;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

