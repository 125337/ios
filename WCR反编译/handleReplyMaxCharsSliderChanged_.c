// handleReplyMaxCharsSliderChanged: @ 017c020c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAIFeatureViewController::handleReplyMaxCharsSliderChanged_
          (WCRefineAIFeatureViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  float in_s0;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_clampedReplyMaxChars__0269d3b8,(long)in_s0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  if (DAT_02323d10 < ABS((double)(in_s0 - (float)(long)puVar1))) {
    (*(code *)PTR__objc_msgSend_02578628)((float)(long)puVar1,local_28,PTR_s_setValue__026a51b0);
  }
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_replyMaxCharsValueButton_026b4dc8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setTitle_forState__026caab8,puVar1,0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

