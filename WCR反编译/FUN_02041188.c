// FUN_02041188 @ 02041188

void FUN_02041188(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_1c = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKey__0269e048,&cf_clownMessageTimeModifyEnabled);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_18;
    local_28 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKey__0269e048,&cf_clownMessageDragSortEnabled);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_18;
    local_30 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKey__0269e048,&cf_clownMessageSortEnabled);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_38 = uVar3;
    if ((local_28 == 0) && (uVar3 != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setObject_forKey__026ca9e8,uVar3,&cf_clownMessageTimeModifyEnabled);
      uVar3 = local_18;
      if (local_30 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_clownMessageSortEnabled);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_clownMessageSortEnabled);
      }
      bVar1 = true;
    }
    else if (local_30 != 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectForKey__0269e048,&cf_clownMessageSortEnabled);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_clownMessageSortEnabled);
        bVar1 = true;
      }
      else {
        bVar1 = local_28 != 0;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_clownMessageSortEnabled)
          ;
        }
      }
    }
    if (local_30 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_removeObjectForKey__0269d700,&cf_clownMessageDragSortEnabled);
      bVar1 = true;
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_18);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

