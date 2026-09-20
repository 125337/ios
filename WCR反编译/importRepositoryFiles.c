// importRepositoryFiles @ 01ee9a80

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::importRepositoryFiles(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  uVar1 = 1;
  local_20 = param_2;
  local_18 = param_1;
  FUN_01edf8d0(1,1);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_28,1);
  _objc_storeStrong(&local_28,0);
  return;
}

