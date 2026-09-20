// FUN_01e8be4c @ 01e8be4c

void FUN_01e8be4c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint local_48;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_01e8c04c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  _UIImagePNGRepresentation();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  lVar1 = local_30;
  uVar4 = 0;
  local_48 = 0;
  if (lVar3 != 0) {
    FUN_01e89350();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_writeToFile_atomically__0269f928,uVar4,1);
    local_48 = (uint)lVar1;
    (*(code *)PTR__objc_release_02578630)();
  }
  if ((local_48 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    FUN_01e892e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_writeToFile_atomically__0269f928,uVar4,1);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

