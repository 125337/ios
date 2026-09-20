// usesEqualSplitLayout @ 01e55a9c

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramTabStripView::usesEqualSplitLayout(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined4 local_38;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tabButtons_026c6940);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (bool)(IVar3 != 0);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_38;
}

