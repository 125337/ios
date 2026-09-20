// updateBottomBarBadge @ 01987ce4

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::updateBottomBarBadge(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_78;
  bool local_41;
  cfstringStruct *local_40;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bottomBar_026a0ef8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar1 & 1) != 0) {
    puVar2 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar4 == (undefined *)0x0) {
      local_78 = &cf__4_g;
    }
    else {
      local_78 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__4_g);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_78;
    }
    local_41 = puVar4 != (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAccessibilityLabel__0269e968,local_78);
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

