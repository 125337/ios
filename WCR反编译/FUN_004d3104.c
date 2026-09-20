// FUN_004d3104 @ 004d3104

void FUN_004d3104(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_004d3f10();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    _objc_storeStrong(&local_28,&cf__);
  }
  lVar2 = DAT_028caca0;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028caca0,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar2;
  if (lVar2 == 0) {
    lVar3 = DAT_028cacf0;
    FUN_004d4124();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40[0];
    local_40[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_40[0] == 0) {
      local_18 = 0;
      goto LAB_004d3468;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028caca0,PTR_s_setObject_forKeyedSubscript__0269d248,local_40[0],local_28);
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028caca8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_28);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  uVar5 = DAT_028caca8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028caca8,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  iVar1 = (int)uVar6 + 1;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,iVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028caca8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,local_28);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  lVar2 = local_40[0];
  FUN_004d41e0(local_40[0],iVar1);
  _objc_retainAutoreleasedReturnValue();
  local_18 = lVar2;
LAB_004d3468:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

