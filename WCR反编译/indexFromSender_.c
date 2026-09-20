// indexFromSender: @ 01bfbd54

/* Function Stack Size: 0x18 bytes */

long_long WCRefineMomentsTailPickerViewController::indexFromSender_
                    (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_78;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_userInfo_0269f138);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_38;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  local_41 = 0;
  bVar2 = false;
  uVar1 = (uVar3 & 1) != 0;
  if ((bool)uVar1) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_idx);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 != 0;
    local_41 = uVar1;
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_idx);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_48 = 1;
  }
  else {
    local_78 = local_30;
    _objc_getAssociatedObject(local_30,PTR_s_onPickPreset__026c0be8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_78;
    if (local_78 == 0) {
      local_78 = 0xffffffffffffffff;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_integerValue_026ca750);
    }
    local_18 = local_78;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

