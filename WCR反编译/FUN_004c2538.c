// FUN_004c2538 @ 004c2538

void FUN_004c2538(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_38 [3];
  long local_20;
  long local_18;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar4,&DAT_028cac19,puVar1,1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  do {
    if (local_38[0] == 0) {
LAB_004c27ac:
      _objc_storeStrong(local_38,0);
      return;
    }
    uVar2 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38[0];
    if ((uVar3 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028cac19,puVar1,1);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      goto LAB_004c27ac;
    }
    uVar3 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38[0];
    local_38[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

