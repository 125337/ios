// wcrHandleCardLongPress: @ 017c3eec

/* Function Stack Size: 0x18 bytes */

void WCRefineAIPersonaLibraryViewController::wcrHandleCardLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 in_d0;
  undefined8 in_d1;
  ID local_50 [3];
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_locationInView__026ca798);
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,IVar2,PTR_s_indexPathForItemAtPoint__026a3d40)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_38 == 0) {
      local_2c = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groups_026a1048);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectAtIndexedSubscript__0269cc78,IVar3);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_item_026a1890);
      IVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_count_0269cfe0);
      IVar2 = local_18;
      if (IVar3 < IVar4) {
        IVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
        IVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_item_026a1890);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_wcrShowPersonaMenuAtGroup_index__026b4e30,IVar5,IVar6);
      }
      local_2c = (uint)(IVar3 >= IVar4);
      _objc_storeStrong(local_50,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

