// FUN_01578858 @ 01578858

byte FUN_01578858(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_isEqualToString__0269ccc8,&cf_WCTimeLineViewController);
  bVar1 = (byte)uVar2;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderTimelineTabViewController);
    bVar1 = (byte)uVar2;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_WCFinderLiveHomePageViewController);
      bVar1 = (byte)uVar2;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_isEqualToString__0269ccc8,&cf_KindaViewController);
        bVar1 = (byte)uVar2;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_isEqualToString__0269ccc8,&cf_CameraScanViewController);
          local_11 = (byte)uVar2;
          if ((uVar2 & 1) == 0) {
            local_11 = 0;
          }
          else {
            FUN_01579408();
            local_11 = local_11 & 1;
          }
        }
        else {
          FUN_01579258();
          local_11 = bVar1 & 1;
        }
      }
      else {
        FUN_01578f38();
        local_11 = bVar1 & 1;
      }
    }
    else {
      FUN_01578de0();
      local_11 = bVar1 & 1;
    }
  }
  else {
    FUN_01578b30();
    local_11 = bVar1 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

