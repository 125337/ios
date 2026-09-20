// opacityChanged: @ 01a82f00

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineGlobalPageBackgroundViewController::opacityChanged_
          (WCRefineGlobalPageBackgroundViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  float in_s0;
  float fVar5;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_expandedScene_026bd750);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 != 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    fVar5 = SUB84((double)in_s0,0);
    FUN_01a82230();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAccessibilityValue__026bd798);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    IVar2 = local_18;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    fVar5 = SUB84((double)fVar5,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_updateValueButtonWithTag_inConta_026bd7a8,"/libswiftCore.dylib",uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar1 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_expandedScene_026bd750);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((double)fVar5,puVar1,PTR_s_setOpacity_forScene__026bd7b0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

