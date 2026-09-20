// FUN_0043c2a4 @ 0043c2a4

void FUN_0043c2a4(undefined8 param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_38 [3];
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_18 = (undefined8 ***)0x0;
  _objc_storeStrong(&local_18,param_1);
  pppuVar2 = (undefined8 ***)local_18;
  FUN_004502e0();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pppuVar2;
  if ((pppuVar2 == (undefined8 ***)0x0) &&
     (pppuVar2 = (undefined8 ***)local_18, FUN_004504e8(), ((ulong)pppuVar2 & 1) != 0)) {
    pppuVar2 = &local_20;
    _objc_storeStrong(pppuVar2,local_18);
  }
  if ((undefined8 ***)local_20 == (undefined8 ***)0x0) {
    FUN_004507ac();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_20;
    local_20 = pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
  }
  pppuVar2 = (undefined8 ***)local_18;
  FUN_00450a84();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = pppuVar2;
  if (pppuVar2 == (undefined8 ***)0x0) {
    pppuVar2 = (undefined8 ***)local_20;
    FUN_00450a84();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = local_38[0];
    local_38[0] = pppuVar2;
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
  }
  if ((undefined8 ***)local_38[0] != (undefined8 ***)0x0) {
    _objc_setAssociatedObject(local_38[0],DAT_026e0368,0,3);
    pppuVar2 = (undefined8 ***)local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38[0],PTR_s_respondsToSelector__026ca818,PTR_s_WCRLE_reloadLocalChips_026a3bb0)
    ;
    if (((ulong)pppuVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_WCRLE_reloadLocalChips_026a3bb0);
    }
  }
  FUN_00450dc0(local_20);
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

