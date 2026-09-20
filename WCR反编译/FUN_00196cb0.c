// FUN_00196cb0 @ 00196cb0

void FUN_00196cb0(undefined8 param_1)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***local_48;
  undefined8 ***local_40 [3];
  undefined8 ***local_28;
  undefined8 ***local_20;
  undefined8 ***local_18;
  
  local_20 = (undefined8 ****)0x0;
  _objc_storeStrong(&local_20,param_1);
  ppppuVar3 = (undefined8 ****)local_20;
  FUN_001881a0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = ppppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (ppppuVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_avatarPath);
  _objc_retainAutoreleasedReturnValue();
  ppppuVar4 = ppppuVar3;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = ppppuVar4;
  (*(code *)PTR__objc_release_02578630)(ppppuVar3);
  ppppuVar4 = (undefined8 ****)local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  ppppuVar3 = (undefined8 ****)0x0;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    local_48 = (undefined8 ***)0x0;
    FUN_00199908(ppppuVar4);
    ppppuVar3 = (undefined8 ****)local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_containsString__0269d0b0,&cf__);
    if (((ulong)ppppuVar3 & 1) == 0) {
      ppppuVar3 = (undefined8 ****)local_40[0];
      FUN_0019ab64(local_40[0],(uint)ppppuVar4 & 1);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar4 = ppppuVar3;
      FUN_0019a838();
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = local_48;
      local_48 = ppppuVar4;
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
      (*(code *)PTR__objc_release_02578630)(ppppuVar3);
    }
    else {
      ppppuVar3 = (undefined8 ****)local_40[0];
      FUN_00199ed4(local_40[0],(uint)ppppuVar4 & 1);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar4 = ppppuVar3;
      FUN_001999e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar2 = local_48;
      local_48 = ppppuVar4;
      (*(code *)PTR__objc_release_02578630)(pppuVar2);
      (*(code *)PTR__objc_release_02578630)(ppppuVar3);
    }
    pppuVar2 = local_48;
    bVar1 = (undefined8 ****)local_48 != (undefined8 ****)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pppuVar2;
    }
    ppppuVar3 = &local_48;
    _objc_storeStrong(ppppuVar3,0);
    if (bVar1) goto LAB_00196fe4;
  }
  FUN_0019ae70();
  _objc_retainAutoreleasedReturnValue();
  local_18 = ppppuVar3;
LAB_00196fe4:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

