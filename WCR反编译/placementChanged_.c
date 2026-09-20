// placementChanged: @ 01c32ce4

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateBeautifyViewController::placementChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  long lVar3;
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
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setPlacement_forScene__026c1980,lVar3,lVar2 + -0x238c);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postSettingsChanged_026c1808);
  _objc_storeStrong(&local_28,0);
  return;
}

