// FUN_004575a4 @ 004575a4

byte FUN_004575a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_100;
  undefined *local_e0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  ulong local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  long local_58 [3];
  undefined *local_40;
  ulong local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataForWrap__026a3da8,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    lVar2 = local_30;
    FUN_0045715c();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_58[0] = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_e0 = (undefined *)0x0;
    }
    else {
      local_e0 = PTR_WCRefineEmoticonToolsHelper_026ce448;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonToolsHelper_026ce448,
                 PTR_s_emoticonDataForMD5_convertWxAMTo_026a3db0,local_58[0],0);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,local_60
              );
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_100 = local_60;
    }
    _objc_storeStrong(&local_40,local_100);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(local_58,0);
  }
  uVar3 = local_38;
  FUN_0043b6d0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40;
  local_78 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) || (local_78 == 0)) {
    local_21 = 0;
    local_7c = 1;
  }
  else {
    local_88 = 0;
    local_98 = 0;
    puVar4 = PTR_WCRefineEmoticonToolsHelper_026ce448;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonToolsHelper_026ce448,
               PTR_s_emoticonMessageForData_asSelfie__026a3dc0,local_40,0,&local_98);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_88,local_98);
    puVar1 = PTR_s_SendNotGameEmoticonMessage_error_026a3dc8;
    local_90 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_21 = 0;
    }
    else {
      uVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_respondsToSelector__026ca818,
                 PTR_s_SendNotGameEmoticonMessage_error_026a3dc8);
      if ((uVar3 & 1) == 0) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,puVar1,local_90,0);
        local_21 = 1;
      }
    }
    local_7c = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

