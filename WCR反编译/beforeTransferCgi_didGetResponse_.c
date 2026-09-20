// beforeTransferCgi:didGetResponse: @ 00f72254

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRFriendRelationCgiBridge::beforeTransferCgi_didGetResponse_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  long local_40 [3];
  ID local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40[1] = 0;
  local_40[2] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  lVar2 = local_40[0];
  local_20 = &cf_retcode;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_00f723b8();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_finishWithResponse_error__026ab138,local_40[0],0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_finishWithResponse_error__026ab138,local_40[0],local_40[0]);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

