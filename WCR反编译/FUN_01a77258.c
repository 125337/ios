// FUN_01a77258 @ 01a77258

byte FUN_01a77258(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (undefined *)0x0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_30 = (undefined *)0x0;
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_cellConfig_026a6398);
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cellConfig_026a6398);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_30 == (undefined *)0x0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_cellConfig);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_clickAction_026a0b90);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clickAction_026a0b90), local_50 = puVar1
       , puVar1 != PTR_s_onLastSelectTagCellClick_026bd548)) {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_makeSel_026bd550);
      if ((((ulong)puVar1 & 1) == 0) ||
         (puVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_makeSel_026bd550),
         local_58 = puVar1, puVar1 != PTR_s_makeLastSelectTagCell__026bd538)) {
        local_60 = (undefined *)0x0;
        puVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_valueForKeyPath__026a0b98,&cf_cellConfig_leftConfig_title);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_60;
        local_60 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_60;
        FUN_01a77654();
        local_11 = (byte)puVar1 & 1;
        local_24 = 1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

