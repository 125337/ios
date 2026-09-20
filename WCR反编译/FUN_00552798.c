// FUN_00552798 @ 00552798

void FUN_00552798(long param_1)

{
  long lVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  long local_28;
  double local_20;
  long local_18;
  
  if (((&DAT_028cb410)[param_1] & 1) == 0) {
    local_18 = param_1;
    FUN_005522d4();
    lVar1 = *(long *)(&DAT_028cb390 + local_18 * 8);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if (lVar1 != 0) {
      (&DAT_028cb410)[local_18] = 1;
      lVar1 = local_18;
      FUN_00553b00();
      local_20 = (double)lVar1;
      dVar2 = _dispatch_time(0,(long)(local_20 * 1000000000.0));
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_48 = PTR___NSConcreteStackBlock_02578660;
      local_40 = 0xc0000000;
      local_3c = 0;
      local_38 = FUN_00553c74;
      local_30 = &DAT_02578c00;
      local_28 = local_18;
      _dispatch_after(dVar2,puVar3,&local_48);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  return;
}

