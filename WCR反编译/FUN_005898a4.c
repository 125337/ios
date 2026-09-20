// FUN_005898a4 @ 005898a4

byte FUN_005898a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  FUN_00589bc8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_48 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_50,uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_writeToFile_atomically__0269f928,local_30,1);
      if ((uVar3 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    local_40 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

