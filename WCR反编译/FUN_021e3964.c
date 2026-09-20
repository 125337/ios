// FUN_021e3964 @ 021e3964

void FUN_021e3964(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_50;
  
  lVar1 = *param_1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_opt_self(PTR__OBJC_CLASS___UILabel_026cdfb8);
  lVar3 = lVar1;
  _swift_dynamicCastObjCClass(lVar1,puVar2);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(lVar3);
    FUN_02222080(param_2,local_50,lVar1);
  }
  return;
}

