// FUN_007d0814 @ 007d0814

byte FUN_007d0814(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  _objc_storeStrong(&local_88,param_1);
  uVar2 = local_88;
  local_28 = &cf_service;
  local_20 = &cf_pay;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  FUN_007d1c90();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_88;
  if ((uVar2 & 1) == 0) {
    local_78 = &cf_gR;
    local_70 = &cf__eN;
    local_68 = &cf__eNNgR;
    local_60 = &cf_gR;
    local_58 = &cf__eNgR;
    local_50 = &cf_Services;
    local_48 = &cf_PayandServices;
    local_40 = &cf_Pay_Services;
    local_38 = &cf_Pay_Services;
    local_30 = &cf_WeixinPay;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,
               10);
    _objc_retainAutoreleasedReturnValue();
    FUN_007c8de0();
    local_79 = (byte)uVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_79 = 1;
  }
  _objc_storeStrong(&local_88,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_79 & 1;
}

