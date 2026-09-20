// deleteRelativePath:error: @ 0108bdc8

/* Function Stack Size: 0x20 bytes */

bool WCRefineLocalEmoticonStore::deleteRelativePath_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID local_58;
  undefined1 local_4a;
  undefined1 local_49;
  ID local_48;
  undefined4 local_3c;
  ID *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  local_38 = param_4;
  FUN_01085b64();
  if ((uVar1 & 1) == 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_absolutePathFromRelative__026ae2c0,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 0;
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_4a = SUB81(puVar4,0);
      if (((ulong)puVar4 & 1) == 0) {
        FUN_0107ad08();
        local_11 = 1;
        local_3c = 1;
      }
      else {
        local_58 = 0;
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_58;
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_storeStrong(&local_58,IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        IVar2 = local_58;
        if (((ulong)puVar4 & 1) == 0) {
          if (local_38 != (ID *)0x0) {
            _objc_retainAutorelease();
            *local_38 = IVar2;
          }
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_removeIndexKeysForRel__026ae370,local_30);
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveIndex_026ae268);
          FUN_0107ad08();
          local_11 = 1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_deleteUngroupedItems__026a3ab0,local_38);
    local_11 = (byte)IVar2 & 1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

