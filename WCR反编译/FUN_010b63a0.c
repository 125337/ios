// FUN_010b63a0 @ 010b63a0

void FUN_010b63a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  byte local_44;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_010b66f4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_getAssociatedObject(lVar4,DAT_0280e198);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 0;
    if (lVar4 == 0) {
      local_44 = (byte)*(undefined8 *)(param_1 + 0x20);
      FUN_010b69a0();
    }
    *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = local_44 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = DAT_0280e198;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_010b6fcc();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_010b7984(uVar1,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar1;
    (*(code *)PTR__objc_release_02578630)();
    _objc_autoreleasePoolPush();
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,
               PTR_s_archivedDataWithRootObject_requi_026ae650,*(undefined8 *)(param_1 + 0x20),0,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_autoreleasePoolPop(uVar2);
    if ((*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28) == 0) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) & 1) != 0)) {
      _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),DAT_0280e198,0,1);
    }
  }
  return;
}

