// setOtherBackgroundColor @ 016dab0c

/* Function Stack Size: 0x10 bytes */

void RepeatEnhanceViewController::setOtherBackgroundColor(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_darkBackgroundColorOther_026b30b0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_showColorPickerWithTitle_lightCo_026b3078,&cf_b_eofre_,puVar3,IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

