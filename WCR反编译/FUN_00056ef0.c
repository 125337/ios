// FUN_00056ef0 @ 00056ef0

byte FUN_00056ef0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_44;
  undefined *local_30 [3];
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = (uint)puVar3;
  local_44 = 1;
  if (((ulong)puVar3 & 1) != 0) {
    FUN_0004bf04();
    local_44 = uVar1 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)();
  if ((local_44 & 1) == 0) {
    FUN_0004c65c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar3 == (undefined *)0x0) {
      local_11 = 0;
    }
    else {
      FUN_00051280();
      _objc_retainAutoreleasedReturnValue();
      local_30[0] = puVar2;
      if (((puVar2 == (undefined *)0x0) ||
          ((*(code *)PTR__objc_msgSend_02578628)
                     (puVar2,PTR_s_respondsToSelector__026ca818,
                      PTR_s_GetMsg_FromID_Limit_LeftCount__0269d230), ((ulong)puVar2 & 1) == 0)) &&
         ((local_30[0] == (undefined *)0x0 ||
          (puVar2 = local_30[0],
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30[0],PTR_s_respondsToSelector__026ca818,
                     PTR_s_GetDownMsg_FromID_Limit_LeftCoun_0269d9d8), ((ulong)puVar2 & 1) == 0))))
      {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      _objc_storeStrong(local_30,0);
    }
  }
  else {
    local_11 = 0;
  }
  return local_11 & 1;
}

