// extraButtonOffsetSliderChanged: @ 019b5758

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFloatingTabBarButtonActionViewController::extraButtonOffsetSliderChanged_
          (WCRefineFloatingTabBarButtonActionViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  float in_s0;
  double dVar5;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hapticGenerator_026b5f48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar5 = (double)in_s0;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_snappedExtraButtonOffsetValue_fo_026ba8f8,uVar2)
  ;
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar5,local_28,PTR_s_setValue_animated__026ba900,0);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,IVar1,PTR_s_applyExtraButtonOffsetValue_forT_026ba908,uVar2);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar5,IVar1,PTR_s_updateExtraButtonOffsetValueButt_026ba910,uVar2,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_28,0);
  return;
}

