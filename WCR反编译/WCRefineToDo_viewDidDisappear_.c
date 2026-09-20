// WCRefineToDo_viewDidDisappear: @ 007f3dac

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoHook::WCRefineToDo_viewDidDisappear_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_WCRefineToDo_viewDidDisappear__026a85c8,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_007f36b0();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

