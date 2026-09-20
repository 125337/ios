// FUN_01cce100 @ 01cce100

void FUN_01cce100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setPlaceholder__0269e9c8,&cf_c6RhV__T);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

