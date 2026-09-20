// handleCardLongPress: @ 01fbd50c

/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::handleCardLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_60;
  byte local_51;
  ID local_50;
  ID local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar2 == 1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_locationInView__026ca798);
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,IVar3,PTR_s_indexPathForItemAtPoint__026a3d40)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_51 = 0;
    bVar1 = true;
    if (local_38 != 0) {
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_item_026a1890);
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayNames_026ca000);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar4 <= IVar3;
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar1) {
      local_2c = 1;
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayNames_026ca000);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_item_026a1890);
      IVar5 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectAtIndexedSubscript__0269cc78,IVar4);
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (IVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_showThemeActionsNamed__026ca020,local_60);
      }
      _objc_storeStrong(&local_60,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

