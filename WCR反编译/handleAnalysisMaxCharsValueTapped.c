// handleAnalysisMaxCharsValueTapped @ 017c06e4

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::handleAnalysisMaxCharsValueTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x7;
  
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showPrompt_kind_initial_message__026b4c50,&cf_VYe_g>f_y,
             &cf_analysisMaxChars,puVar3,&cf__J___,4,in_x7,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

