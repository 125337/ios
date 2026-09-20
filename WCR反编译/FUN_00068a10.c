// FUN_00068a10 @ 00068a10

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00068a10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  DAT_028c7c81 = 1;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  DAT_028c7c80 = (byte)uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((DAT_028c7c80 & 1) != 0) {
    FUN_00068acc();
  }
  _objc_storeStrong(&local_20,0);
  return;
}

