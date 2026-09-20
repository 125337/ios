// FUN_0068974c @ 0068974c

/* WARNING: Type propagation algorithm not settling */

void FUN_0068974c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_50;
  long local_48 [3];
  long local_30;
  long local_28;
  long local_20 [2];
  
  local_20[1] = 0;
  _objc_storeStrong(local_20 + 1,param_1);
  local_20[0] = 0;
  _objc_storeStrong(local_20,param_2);
  lVar1 = local_20[0];
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_errcode);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0068b784();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_20[0];
  FUN_0068b580();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_48[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithFormat__0269cca8,
             &cf___HTTP_ld);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendFormat__0269d148,&cf_errcode___);
  }
  lVar1 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendFormat__0269d148,&cf___);
  }
  if (local_28 == 0) {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&cf_Bl_gbV_);
    }
  }
  puVar3 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(local_20,0);
  _objc_storeStrong(local_20 + 1,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

