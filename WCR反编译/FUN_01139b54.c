// FUN_01139b54 @ 01139b54

undefined4 FUN_01139b54(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  byte local_25;
  undefined4 local_24;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 < 3) {
    local_14 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasSuffix__0269d018,&cf__i);
    uVar1 = local_20;
    local_25 = (byte)uVar2;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar2 - 2);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    FUN_0113bce0(uVar1,local_25 & 1);
    local_14 = (undefined4)uVar1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

