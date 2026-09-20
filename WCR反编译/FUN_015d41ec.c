// FUN_015d41ec @ 015d41ec

void FUN_015d41ec(undefined8 param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined **local_40;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &local_68;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_015d4790;
  local_50 = &DAT_025872d8;
  local_38 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar3;
  _objc_retainBlock();
  uVar2 = local_30;
  local_40 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__dark);
    ppuVar1 = local_40;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByAppendingString__0269d398,&cf__dark);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar1[2])();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__hl);
      uVar2 = local_30;
      if ((uVar4 & 1) != 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar4 - 3);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = local_40;
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_stringByAppendingString__0269d398,&cf__dark_hl);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        _objc_storeStrong(&local_78,0);
      }
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__new_hl);
      uVar2 = local_30;
      if ((uVar4 & 1) == 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__new);
        uVar2 = local_30;
        if ((uVar4 & 1) != 0) {
          uVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar4 - 4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar1 = local_40;
          local_88 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByAppendingString__0269d398,&cf__dark);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)ppuVar1[2])();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          _objc_storeStrong(&local_88,0);
        }
      }
      else {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar4 - 7);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = local_40;
        local_80 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_stringByAppendingString__0269d398,&cf__dark_hl);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        ppuVar1 = local_40;
        uVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_stringByAppendingString__0269d398,&cf__hl_dark);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        _objc_storeStrong(&local_80,0);
      }
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__white);
      ppuVar1 = local_40;
      if ((uVar2 & 1) != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__white,&cf__dark);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar1[2])();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
    else {
      (*(code *)local_40[2])(local_40,local_30);
      puVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
  }
  local_6c = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

