// handlePathLongPress: @ 019b0660

/* Function Stack Size: 0x18 bytes */

void WCRFilePathListViewController::handlePathLongPress_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_88;
  ID local_80 [3];
  ID local_68;
  ID local_60 [3];
  ID local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_48);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,in_d1,local_48,PTR_s_indexPathForRowAtPoint__026a13a8);
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = IVar2;
    if (IVar2 == 0) {
      local_3c = 1;
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_section_0269e988);
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_getSectionAt__026a0a78,IVar3);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_68;
      IVar3 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_getCellAt__026a0b80,IVar3);
      _objc_retainAutoreleasedReturnValue();
      local_80[0] = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_valueForKey__0269d128,&cf_userInfo);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_88 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((IVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showActionsForEntry__026ba550,local_88)
        ;
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(local_80,0);
      _objc_storeStrong(&local_68,0);
      local_3c = 0;
    }
    _objc_storeStrong(local_60);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

