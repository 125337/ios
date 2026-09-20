// FUN_006a7dbc @ 006a7dbc

void FUN_006a7dbc(ulong param_1)

{
  undefined *puVar1;
  
  _WCRSideloadShareFixIsNotificationServiceProcess();
  puVar1 = PTR___dispatch_main_q_02578680;
  if (((param_1 & 1) == 0) && ((DAT_028cbea1 & 1) == 0)) {
    DAT_028cbea1 = 1;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

