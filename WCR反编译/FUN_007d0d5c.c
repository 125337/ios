// FUN_007d0d5c @ 007d0d5c

byte FUN_007d0d5c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_90;
  byte local_81;
  cfstringStruct *local_80;
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
  local_90 = 0;
  _objc_storeStrong(&local_90,param_1);
  uVar2 = local_90;
  local_38 = &cf_wallet;
  local_30 = &cf_card;
  local_28 = &cf_order;
  local_20 = &cf_shop;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_007d1c90();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_90;
  if ((uVar2 & 1) == 0) {
    local_80 = &cf_aSS;
    local_78 = &cf_USNaSS;
    local_70 = &cf___NaSS;
    local_68 = &cf___USNaSS;
    local_60 = &cf_UaSS;
    local_58 = &cf___aSS;
    local_50 = &cf___UaSS;
    local_48 = &cf_Cards;
    local_40 = &cf_Orders_Cards;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,9
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_007c8de0();
    local_81 = (byte)uVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_81 = 1;
  }
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_81 & 1;
}

