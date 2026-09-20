// FUN_0058f760 @ 0058f760

byte FUN_0058f760(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [2];
  undefined *local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0058fbdc();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_0058ffc0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == 0) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      local_40 = (undefined *)0x0;
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,
                 PTR_s_unarchiveObjectWithData__026a4f98,uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_40 == (undefined *)0x0) {
        local_11 = 0;
        local_30 = 1;
      }
      else {
        puVar3 = local_40;
        FUN_00590370(local_40,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = puVar3;
        if (puVar3 == (undefined *)0x0) {
          local_11 = 0;
          local_30 = 1;
        }
        else {
          FUN_0058f5d8();
          _objc_retainAutoreleasedReturnValue();
          local_60 = (undefined *)0x0;
          local_58 = puVar3;
          if ((puVar3 != (undefined *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_uploadMgr_026a54c8),
             ((ulong)puVar3 & 1) != 0)) {
            puVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_uploadMgr_026a54c8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_60;
            local_60 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          if ((local_60 == (undefined *)0x0) ||
             (puVar3 = local_60,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_addUploadTask__026a54d0),
             ((ulong)puVar3 & 1) == 0)) {
            local_11 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_addUploadTask__026a54d0,local_50[0]);
            local_11 = 1;
          }
          local_30 = 1;
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(local_50,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

