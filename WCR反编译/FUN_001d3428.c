// FUN_001d3428 @ 001d3428

byte FUN_001d3428(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_40;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  FUN_001d24ac();
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    local_50 = 0;
    do {
      if (local_48 == 0 || 0x17 < local_50) {
        local_21 = 0;
        local_40 = 1;
        break;
      }
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_rangeOfString__0269d838,&cf_WCTimeLine);
      bVar1 = true;
      if (uVar3 == 0x7fffffffffffffff) {
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&cf_WCListView)
        ;
        bVar1 = true;
        if (uVar3 == 0x7fffffffffffffff) {
          uVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_rangeOfString__0269d838,&cf_WCContentItem);
          bVar1 = true;
          if (uVar3 == 0x7fffffffffffffff) {
            uVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_rangeOfString__0269d838,&cf_WCImageView);
            bVar1 = true;
            if (uVar3 == 0x7fffffffffffffff) {
              uVar3 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_rangeOfString__0269d838,&cf_WCPuzzleImageView);
              bVar1 = uVar3 != 0x7fffffffffffffff;
            }
          }
        }
      }
      if (!bVar1) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_50 = local_50 + 1;
      }
      else {
        local_21 = 1;
      }
      local_40 = (uint)bVar1;
      _objc_storeStrong(&local_58,0);
    } while (local_40 == 0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_21 = 0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

