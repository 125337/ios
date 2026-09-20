// toggleSelectionForPath: @ 019d0338

/* Function Stack Size: 0x18 bytes */

void WCRefineFontListViewController::toggleSelectionForPath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(local_18 + (long)_selectedPaths);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsObject__0269cbb8,local_28);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_selectedPaths),PTR_s_addObject__0269d180,local_28
                );
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_selectedPaths),PTR_s_removeObject__0269d678,
                 local_28);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateNavigationItems_026badf0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

