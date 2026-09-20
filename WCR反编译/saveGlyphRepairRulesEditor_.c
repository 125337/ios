// saveGlyphRepairRulesEditor: @ 019f3dd8

/* Function Stack Size: 0x18 bytes */

void WCRefineFontConvertViewController::saveGlyphRepairRulesEditor_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_70;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  _objc_getAssociatedObject(local_28,PTR_s_saveGlyphRepairRulesEditor__026bb398);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_70;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setGlyphRepairRules__026bb1c8,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_savePreferences_026bb238);
  IVar1 = local_18;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_019f3fe4;
  local_48 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_60);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

