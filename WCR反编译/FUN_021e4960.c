// FUN_021e4960 @ 021e4960

void FUN_021e4960(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_3 + WCRSuperFloatFanMenuView::previewContainer);
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = param_1;
  local_30 = param_2;
  FUN_02222e40(param_1,param_2,uVar1,local_78);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_3 + WCRSuperFloatFanMenuView::previewContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222cc0(uVar1,local_78);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = *(undefined8 *)(param_3 + WCRSuperFloatFanMenuView::previewContainer);
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = 0x3ff0000000000000;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x3ff0000000000000;
  local_48 = 0;
  local_40 = 0;
  FUN_02223680(uVar1,local_78,&local_68);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

