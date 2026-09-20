// FUN_021e4b8c @ 021e4b8c

void FUN_021e4b8c(double param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_3 + WCRSuperFloatFanMenuView::previewContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02221ea0(uVar1,local_38);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (param_1 < DAT_02323d38) {
    uVar1 = *(undefined8 *)(param_3 + WCRSuperFloatFanMenuView::previewIconView);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02223120(uVar1,local_38);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = *(undefined8 *)(param_3 + WCRSuperFloatFanMenuView::previewTitleLabel);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02223560(uVar1,local_38,0);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

