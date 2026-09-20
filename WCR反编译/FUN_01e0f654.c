// FUN_01e0f654 @ 01e0f654

byte FUN_01e0f654(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomIconKey);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_01e0d320();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatIconKey);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      FUN_01e0d320();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__),
       (uVar2 & 1) == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_image_);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_imagepair_),
         (uVar2 & 1) == 0)) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_01e0d320();
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomPayloadKey);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_01e0d320();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if ((uVar2 == 0) &&
           (uVar3 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_38,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_toolbar_), uVar2 = local_38,
           (uVar3 & 1) != 0)) {
          pcVar5 = &cf_wcr_sf_toolbar_;
          (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_sf_toolbar_,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringFromIndex__0269d120,pcVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_48;
          local_48 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_chat_);
        if ((uVar2 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            local_11 = 1;
          }
          else {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
            if (((((uVar2 & 1) == 0) &&
                 (uVar2 = local_30,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_30,PTR_s_containsString__0269d0b0,&cf__), (uVar2 & 1) == 0)) &&
                (uVar2 = local_30,
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_image_)
                , (uVar2 & 1) == 0)) &&
               (uVar2 = local_30,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_30,PTR_s_hasPrefix__0269d320,&cf_imagepair_), (uVar2 & 1) == 0)) {
              local_11 = 0;
            }
            else {
              local_11 = 1;
            }
          }
        }
        local_24 = 1;
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_40,0);
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

