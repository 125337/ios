// FUN_01531854 @ 01531854

void FUN_01531854(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  if ((DAT_028e3940 & 1) != 0) {
    puVar2 = &DAT_028e38a8;
    _objc_loadWeakRetained();
    puVar3 = &DAT_028e38b0;
    local_18 = puVar2;
    _objc_loadWeakRetained();
    local_20 = puVar3;
    _objc_storeWeak(&DAT_028e38a8);
    _objc_storeWeak(&DAT_028e38b0,0);
    DAT_028e3940 = 0;
    if ((local_18 == (undefined *)0x0) ||
       (puVar3 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108),
       puVar2 = PTR___dispatch_main_q_02578680, ((ulong)puVar3 & 1) == 0)) {
      local_24 = 1;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_18;
      local_58 = PTR___NSConcreteStackBlock_02578660;
      local_50 = 0xc2000000;
      local_4c = 0;
      local_48 = FUN_01562c04;
      local_40 = &DAT_0257a7a0;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_20;
      local_38 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = puVar3;
      _dispatch_async(puVar2,&local_58);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_30);
      _objc_storeStrong(&local_38,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_20);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

