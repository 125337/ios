// writeVisualSuffix:value:scene: @ 01c4d82c

/* Function Stack Size: 0x28 bytes */

void WCRefineNameplateSpecialUserDetailViewController::writeVisualSuffix_value_scene_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_3c;
  long_long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = local_28;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((lVar1 == 0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sceneKey__026c1be0,local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addExclusiveScene__026c1c60,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDraftDirty__026c1be8,1);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

