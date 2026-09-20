// scenePlaceChanged: @ 01c4e970

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::scenePlaceChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar1 = local_18;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,lVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_writeVisualSuffix_value_scene__026c1c68,&cf_Placement,puVar4,
             lVar2 + -0x2008);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_28,0);
  return;
}

