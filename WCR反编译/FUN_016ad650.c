// FUN_016ad650 @ 016ad650

void FUN_016ad650(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_referingMessageWrap_0269d110);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_referingMessageWrap_0269d110);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if ((local_30 == 0) &&
       (uVar1 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_m_dicForwardParas_026b2bb8),
       (uVar1 & 1) != 0)) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_dicForwardParas_026b2bb8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_48[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_objectForKey__0269e048,&cf_ReferMsg)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(local_48,0);
    }
    if ((local_30 != 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setReferingMessageWrap__026ab0c8
                 ), (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_setReferingMessageWrap__026ab0c8,local_30);
    }
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_referPartialInfo_026b2bc0);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setReferPartialInfo__026b2bc8),
       (uVar1 & 1) != 0)) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_referPartialInfo_026b2bc0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setReferPartialInfo__026b2bc8,uVar1);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

