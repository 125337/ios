// FUN_01cf46d8 @ 01cf46d8

byte FUN_01cf46d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_68;
  undefined4 local_5c;
  ulong local_58;
  long local_50;
  byte local_41;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long *local_18;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_41 = 0;
    local_5c = 1;
  }
  else {
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_50);
    if ((uVar2 & 1) == 0) {
      local_18 = &DAT_028e4710;
      local_20 = 0;
      _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258c0e0);
      if (*local_18 + 1 != 0) {
        _dispatch_once(*local_18 + 1,local_18,local_20);
      }
      _objc_storeStrong(&local_20,0);
      uVar2 = local_58;
      lVar1 = DAT_028e4708;
      if (DAT_028e4708 == 0) {
        local_41 = 0;
        local_5c = 1;
      }
      else {
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        local_38 = 0;
        local_30 = 0;
        local_40 = uVar3;
        local_28 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar1,PTR_s_stringByReplacingMatchesInString_0269ef30,uVar2,0,0,uVar3,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_68 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_isEqualToString__0269ccc8,local_50);
        local_41 = (byte)lVar1 & 1;
        local_5c = 1;
        _objc_storeStrong(&local_68,0);
      }
    }
    else {
      local_41 = 1;
      local_5c = 1;
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

