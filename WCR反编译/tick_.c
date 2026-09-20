// tick: @ 015c2c40

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRVPSTickTarget::tick_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cell_026a4fd0);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = IVar1;
  if (IVar1 != 0) {
    FUN_015c2cdc(IVar1);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

