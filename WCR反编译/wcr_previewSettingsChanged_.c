// wcr_previewSettingsChanged: @ 00134218

/* Function Stack Size: 0x18 bytes */

void WCRChatToolbarView::wcr_previewSettingsChanged_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte local_c0;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_48[0];
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      if (DAT_028c8688 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = DAT_028c8688;
        DAT_028c8688 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c8688,PTR_s_setObject_forKeyedSubscript__0269d248,local_48[0],local_30);
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_chatToolbarHeight);
      local_c0 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_chatToolbarScalePercent);
        local_c0 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_chatToolbarInputSpacing);
          local_c0 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_chatToolbarBottomSpacing);
            local_c0 = (byte)uVar1;
          }
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_applySettingsChange__0269f130,local_c0 & 1);
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

