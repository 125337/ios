// estimatedBubbleWidthForRecord: @ 00ff8b3c

/* Function Stack Size: 0x18 bytes */

double WCRefineKeywordAlertDanmakuPresenter::estimatedBubbleWidthForRecord_
                 (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  double in_d2;
  ID local_70;
  ID local_68;
  ID local_60;
  double local_58;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_maxTextAreaWidthForScreenWidth__026ad7d0);
  IVar2 = local_18;
  local_58 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sessionNameForRecord__026ad7d8,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_60 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentForRecord__026ad7e0,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_68 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,local_18,PTR_s_contentPagesForText_maxWidth_rec_026ad7e8,IVar3,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_textAreaWidthForSessionName_cont_026ad7f0,local_60,IVar2);
  dVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_capsuleWidthForTextAreaWidth__026ad7f8);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_28,0);
  return dVar4;
}

