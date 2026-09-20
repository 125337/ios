// FUN_014f7388 @ 014f7388

/* WARNING: Type propagation algorithm not settling */

void FUN_014f7388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long local_28 [3];
  
  local_28[1] = 0;
  local_28[2] = param_1;
  _objc_storeStrong();
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_3);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_overviewTypes_026afd50);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  lVar4 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_unsignedIntegerValue_026cabb8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_numberWithUnsignedInteger__0269e4d0,lVar3 + lVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_overviewTypes_026afd50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(local_28,0);
  _objc_storeStrong(local_28 + 1,0);
  return;
}

