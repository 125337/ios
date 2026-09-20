// FUN_00100508 @ 00100508

void FUN_00100508(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar3 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar3;
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      FUN_001006a8(uVar3);
    }
    else {
      FUN_001002ec();
      uVar2 = local_28;
      uVar1 = DAT_026df8b8;
      if ((uVar3 & 1) == 0) {
        FUN_0010095c(local_28,*(undefined8 *)(param_1 + 0x20),0);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        FUN_001008e0(local_28);
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

