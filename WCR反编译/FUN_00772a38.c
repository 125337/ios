// FUN_00772a38 @ 00772a38

void FUN_00772a38(ulong param_1)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  double dVar3;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  double local_28;
  double local_20;
  double local_18;
  
  if (((DAT_028cc8a8 != 0) && ((DAT_028cc960 & 1) == 0)) && (FUN_00772b8c(), (param_1 & 1) != 0)) {
    DAT_028cc960 = 1;
    local_18 = DAT_028cc950;
    dVar3 = DAT_028cc950;
    FUN_00771954();
    local_20 = dVar3;
    _objc_storeStrong(&DAT_028cc8a8,0);
    if ((0.0 < local_18) || (0.0 < local_20)) {
      dVar1 = _dispatch_time(0,350000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_48 = PTR___NSConcreteStackBlock_02578660;
      local_40 = 0xc0000000;
      local_3c = 0;
      local_38 = FUN_00772df8;
      local_30 = &DAT_02578c00;
      local_28 = local_18;
      _dispatch_after(dVar1,puVar2,&local_48);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      DAT_028cc960 = 0;
      DAT_028cc950 = 0.0;
    }
  }
  return;
}

