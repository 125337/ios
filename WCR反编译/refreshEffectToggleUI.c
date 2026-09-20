// refreshEffectToggleUI @ 0164133c

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::refreshEffectToggleUI(ID param_1,SEL param_2)

{
  undefined **ppuVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  undefined **local_28;
  SEL local_20;
  ID local_18;
  
  ppuVar1 = &local_50;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01641458;
  local_38 = &DAT_02587a80;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = param_1;
  _objc_retainBlock();
  IVar2 = local_18;
  local_28 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didApplyWatermark_026b1d78);
  (*(code *)ppuVar1[2])(ppuVar1,&cf_4lpS,IVar2);
  ppuVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_didApplyShell_026b1d80);
  (*(code *)ppuVar1[2])(ppuVar1,&cf_WYX,IVar2);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

