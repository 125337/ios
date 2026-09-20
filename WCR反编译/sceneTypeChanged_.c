// sceneTypeChanged: @ 01c4e82c

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUserDetailViewController::sceneTypeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineNameplateHelper_026ce5f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_revertSelfBuildTypeSelectionIfDe_026c1970,
             local_28);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    IVar1 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,lVar4);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_writeVisualSuffix_value_scene__026c1c68,&cf_Type,puVar2,lVar3 + -0x1fa4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

