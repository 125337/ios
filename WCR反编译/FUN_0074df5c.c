// FUN_0074df5c @ 0074df5c

void FUN_0074df5c(long param_1)

{
  long lVar1;
  double dVar2;
  double dVar3;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_0074a900();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 != 0) {
    dVar2 = *(double *)(param_1 + 0x28);
    dVar3 = dVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_doubleValue_026ca608);
    if (dVar2 - dVar3 < 2.0) {
      **(undefined1 **)(param_1 + 0x30) = 1;
      goto LAB_0074e08c;
    }
  }
  if (local_30 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
  }
LAB_0074e08c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

