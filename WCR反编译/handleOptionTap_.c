// handleOptionTap: @ 018695dc

/* Function Stack Size: 0x18 bytes */

void WCRefineBottomBarLongPressActionSelectorViewController::handleOptionTap_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_userInfo_0269f138);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_option);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(local_48,0);
  }
  if (local_30 == 0) {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e42d8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_28;
  if (local_30 == 0) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  }
  if (local_30 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_handleOptionSelected__0269e3e8,local_30);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

