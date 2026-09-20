// resetCurrentScene @ 01c2d3a0

/* Function Stack Size: 0x10 bytes */

void WCRNameplateAdjustmentViewController::resetCurrentScene(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setOffsetX__026c16e8);
  (*(code *)PTR__objc_msgSend_02578628)(0,param_1,PTR_s_setOffsetY__026c16f0);
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,param_1,PTR_s_setScale__026caa28);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_refreshVisibleNameplates_026a5db0);
  FUN_01c2c9a8();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

