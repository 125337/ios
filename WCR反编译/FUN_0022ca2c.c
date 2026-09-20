// FUN_0022ca2c @ 0022ca2c

void FUN_0022ca2c(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  char *local_40;
  char *local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_0022a660();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_30 = 1;
  }
  else {
    pcVar2 = "MMHeadImageView";
    _objc_getClass();
    puVar3 = PTR___dispatch_main_q_02578680;
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_30 = 1;
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_20;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_0022f208;
      local_50 = &DAT_02579ee0;
      local_40 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar1;
      _dispatch_async(puVar3,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_48,0);
      local_30 = 0;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

