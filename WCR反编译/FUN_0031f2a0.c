// FUN_0031f2a0 @ 0031f2a0

void FUN_0031f2a0(double param_1,double param_2,long *param_3)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long local_58 [3];
  double local_40;
  double dStack_38;
  undefined *local_30;
  long *local_28;
  double local_20;
  double dStack_18;
  
  dVar1 = DAT_02323d10;
  local_28 = param_3;
  local_20 = param_1;
  dStack_18 = param_2;
  if ((*(byte *)(param_3 + 5) & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    param_2 = (double)local_28[2];
    param_1 = (double)local_28[1];
    puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_40 = param_1;
    dStack_38 = param_2;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _CFArrayAppendValue(*local_28,local_30);
    *(undefined1 *)(local_28 + 5) = 1;
    _objc_storeStrong(&local_30,0);
  }
  lVar5 = *local_28;
  lVar4 = *local_28;
  _CFArrayGetCount(lVar4);
  _CFArrayGetValueAtIndex(lVar5,lVar4 + -1);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_lastObject_0269d200);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  lVar4 = local_58[0];
  if ((dVar1 < ABS(param_1 - local_20)) || (dVar1 < ABS(param_2 - dStack_18))) {
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,dStack_18,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  local_28[2] = (long)dStack_18;
  local_28[1] = (long)local_20;
  _objc_storeStrong(local_58,0);
  return;
}

