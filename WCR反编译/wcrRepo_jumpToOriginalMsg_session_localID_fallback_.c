// wcrRepo_jumpToOriginalMsg:session:localID:fallback: @ 01bb2ffc

/* Function Stack Size: 0x30 bytes */

bool WCRefineMessageRepositoryViewController::wcrRepo_jumpToOriginalMsg_session_localID_fallback_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,ID param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  long_long local_40;
  undefined8 local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  puVar2 = &local_48;
  local_48 = 0;
  local_40 = param_5;
  _objc_storeStrong(puVar2,param_6);
  if (local_30 == 0) {
    local_11 = 0;
    local_4c = 1;
  }
  else {
    local_58 = (undefined8 *)0x0;
    if (0 < (long)local_40) {
      FUN_01bad5fc(local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_GetMsg_LocalID__0269d5e8;
      local_60 = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
        if (((ulong)puVar2 & 1) != 0) {
          puVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,puVar1,local_38,local_40);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_58;
          local_58 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
      }
      _objc_storeStrong(&local_60,0);
    }
    if (local_58 == (undefined8 *)0x0) {
      _objc_storeStrong(&local_58,local_48);
    }
    puVar1 = PTR_s_returnToOriginalMsg__0269d600;
    if (local_58 == (undefined8 *)0x0) {
      local_11 = 0;
    }
    else {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_returnToOriginalMsg__0269d600);
      if ((uVar4 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar1,local_58);
        local_11 = 1;
      }
    }
    local_4c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

