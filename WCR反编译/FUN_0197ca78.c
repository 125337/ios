// FUN_0197ca78 @ 0197ca78

byte FUN_0197ca78(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte local_64;
  long local_48;
  long local_40;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (lVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_28;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,lVar3);
    uVar2 = local_38;
    local_64 = 1;
    bVar1 = (uVar4 & 1) == 0;
    if (bVar1) {
      local_48 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByAppendingString__0269d398,&cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasPrefix__0269d320);
      local_64 = (byte)uVar2;
    }
    local_11 = local_64 & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    local_2c = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

