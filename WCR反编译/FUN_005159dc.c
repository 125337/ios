// FUN_005159dc @ 005159dc

byte FUN_005159dc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  FUN_00513618();
  if ((uVar4 & 1) == 0) {
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_likeFlag_026a4708);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_likeFlag_026a4708),
       (uVar4 & 1) == 0)) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      FUN_0050ed60();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      if ((uVar4 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_respondsToSelector__026ca818,
                     PTR_s_cancelLikeWithDataItem_extraInfo_026a4780), uVar3 = local_20,
         uVar2 = local_38, puVar1 = PTR_s_cancelLikeWithDataItem_extraInfo_026a4780,
         (uVar4 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        FUN_00516d18();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,puVar1,uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setLikeFlag__026a4778);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setLikeFlag__026a4778,0);
        }
        local_11 = 1;
      }
      local_30 = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    local_11 = 0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

