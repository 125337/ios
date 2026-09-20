// alignmentChanged: @ 01de9ab8

/* Function Stack Size: 0x18 bytes */

void WCRefineSpecialTextListViewController::alignmentChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_identifiers_026c58d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar3 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_objectAtIndexedSubscript__0269cc78,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,uVar2);
  _objc_retainAutoreleasedReturnValue();
  FUN_01de9c14(IVar3,&cf_alignment);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_storeStrong(&local_28,0);
  return;
}

