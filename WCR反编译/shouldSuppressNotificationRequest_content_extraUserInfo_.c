// shouldSuppressNotificationRequest:content:extraUserInfo: @ 0112284c

/* Function Stack Size: 0x28 bytes */

bool WCRefinePrivateFriendManager::shouldSuppressNotificationRequest_content_extraUserInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UNNotificationContent_026ce808;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNNotificationContent_026ce808,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_44 = 1;
  }
  else {
    FUN_0112263c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_suppress);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar3 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_50;
      FUN_01122a04(local_50,local_30,local_38,local_40);
      local_11 = (byte)uVar2 & 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

