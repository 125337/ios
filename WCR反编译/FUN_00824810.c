// FUN_00824810 @ 00824810

undefined8 FUN_00824810(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_18;
  
  lVar1 = DAT_028ccfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028ccfc8,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentMode);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar2 == 1) {
    local_18 = 1;
  }
  else if (lVar2 == 2) {
    local_18 = 0;
  }
  else {
    local_18 = 2;
  }
  return local_18;
}

