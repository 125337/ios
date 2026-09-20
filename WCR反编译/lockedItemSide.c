// lockedItemSide @ 01b62d7c

/* Function Stack Size: 0x10 bytes */

double WCRefineLocalEmoticonLibraryViewController::lockedItemSide(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  double in_d2;
  double dVar3;
  undefined8 in_d3;
  double local_90;
  double local_28;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar3 = in_d2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar2 = 0x4054000000000000;
  local_28 = in_d2;
  if (in_d2 < 80.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth(in_d2,uVar2,dVar3,in_d3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_28 = in_d2;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_itemSideForContainerWidth__026bf8f0);
  local_90 = local_28;
  if (local_28 <= 0.0) {
    local_90 = 64.0;
  }
  return local_90;
}

