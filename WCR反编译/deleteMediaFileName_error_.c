// deleteMediaFileName:error: @ 015db9c8

/* Function Stack Size: 0x20 bytes */

bool WCRGlobalPageBackgroundStore::deleteMediaFileName_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  long lVar1;
  ID IVar2;
  undefined *local_70;
  undefined *local_50;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar2 = local_30;
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_70 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_20 = local_40;
    local_70 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_70;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_deleteMediaFileNames_error__026b0ff8,local_70,param_4);
  local_21 = (byte)IVar2 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_21 & 1;
}

