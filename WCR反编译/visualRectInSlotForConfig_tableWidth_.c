// visualRectInSlotForConfig:tableWidth: @ 01e74d20

/* Function Stack Size: 0x20 bytes */

CGRect WCRefineToDoCardView::visualRectInSlotForConfig_tableWidth_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  CGRect CVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined *local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  
  local_48 = (undefined *)0x0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  if (local_48 == (undefined *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  FUN_01e74e64();
  dVar7 = param_4;
  FUN_01e74f0c(local_48);
  dVar6 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_rawCardWidthForAvailableWidth_co_026c6e20,local_48);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_rawCardHeightForConfig_tableWidt_026c6e18,local_48);
  dVar6 = dVar6 * dVar7;
  dVar7 = param_4 * dVar7;
  uVar5 = 0;
  uVar4 = 0;
  FUN_01e728c8();
  local_30 = uVar4;
  local_28 = uVar5;
  local_20 = dVar6;
  local_18 = dVar7;
  _objc_storeStrong(&local_48,0);
  CVar1.field0_0x0.field1_0x8 = (double)local_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = local_20;
  CVar1.field1_0x10.field1_0x8 = local_18;
  return CVar1;
}

