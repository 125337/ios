// FUN_015d5dac @ 015d5dac

void FUN_015d5dac(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_global);
  if ((uVar2 & 1) == 0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_day);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if (lVar3 == 0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_night);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar4 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (bVar1) {
      **(undefined1 **)(param_1 + 0x20) = 1;
      *param_4 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

