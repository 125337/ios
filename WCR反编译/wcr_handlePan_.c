// wcr_handlePan: @ 01698ff4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRWordSegPickerController::wcr_handlePan_
          (WCRWordSegPickerController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  double in_d0;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar2 = local_28;
  lVar4 = local_38;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chipHost_026b29e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_locationInView__026ca798);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_chipIndexAtPoint__026b2a40);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  lVar4 = local_38;
  if (lVar3 == 1) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chipHost_026b29e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_velocityInView__026cabd0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPanSelecting__026b2a50,0.0 <= in_d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPanAnchor__026b2928,IVar2);
    if (IVar2 != 0x7fffffffffffffff) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panSelecting_026b2a58);
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_removeSelectionFrom_to__026b2a68,IVar2,IVar2);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_addSelectionFrom_to__026b2a60,IVar2,IVar2);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (((lVar4 == 3) ||
        (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
        lVar4 == 4)) ||
       (lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
       lVar4 == 5)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPanAnchor__026b2928,DAT_023397d8);
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panAnchor_026b2a70);
      if ((IVar1 != 0x7fffffffffffffff) && (IVar2 != 0x7fffffffffffffff)) {
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panSelecting_026b2a58);
        IVar1 = local_28;
        if ((IVar5 & 1) == 0) {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panAnchor_026b2a70);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_removeSelectionFrom_to__026b2a68,IVar5,IVar2);
        }
        else {
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_panAnchor_026b2a70);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_wcr_addSelectionFrom_to__026b2a60,IVar5,IVar2);
        }
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

