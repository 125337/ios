// coreDefaultActionsSeeded @ 016153a8

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatProfileStore::coreDefaultActionsSeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_currentValueForKey__026b1898,&cf_coreDefaultActionsSeeded);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (bool)IVar1;
}

