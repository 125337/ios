// FUN_021c7944 @ 021c7944

void FUN_021c7944(long *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = *param_2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
  _objc_opt_self(PTR__OBJC_CLASS___UIWindowScene_026ce018);
  lVar3 = lVar1;
  _swift_dynamicCastObjCClass(lVar1,puVar2);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_release_02578630)(lVar1);
    *param_1 = 0;
  }
  else {
    *param_1 = lVar3;
  }
  return;
}

