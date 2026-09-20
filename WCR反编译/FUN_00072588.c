// FUN_00072588 @ 00072588

byte FUN_00072588(void)

{
  long lVar1;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  byte *local_20;
  byte local_12;
  byte local_11;
  
  if ((DAT_028c7e78 & 1) == 0) {
    FUN_0006e628();
  }
  if ((((DAT_028c7e79 & 1) == 0) && ((DAT_028c7e7a & 1) == 0)) && ((DAT_028c7e7c & 1) == 0)) {
    if (((DAT_028c7f30 & 1) == 0) ||
       (lVar1 = DAT_028c7d48,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7d48,PTR_s_count_0269cfe0), lVar1 == 0)) {
      local_11 = 0;
    }
    else {
      local_20 = &local_12;
      local_12 = 0;
      local_40 = PTR___NSConcreteGlobalBlock_02578658;
      local_38 = 0xd0800000;
      local_34 = 0;
      local_30 = FUN_000726bc;
      local_28 = &DAT_02579a50;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028c7d48,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_40);
      local_11 = local_12 & 1;
    }
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

