// gridColumns @ 016136b4

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatProfileStore::gridColumns(ID param_1,SEL param_2)

{
  ID local_80;
  ID local_78;
  ID local_18;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentValueForKey__026b1898,&cf_gridColumns);
  _objc_retainAutoreleasedReturnValue();
  local_78 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((long)local_78 < 1) {
    local_18 = 0;
  }
  else {
    if (6 < (long)local_78) {
      local_78 = 6;
    }
    if ((long)local_78 < 3) {
      local_80 = 2;
    }
    else {
      local_80 = local_78;
    }
    local_18 = local_80;
  }
  return local_18;
}

