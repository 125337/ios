// FUN_006a42f4 @ 006a42f4

void FUN_006a42f4(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  
  _objc_autoreleasePoolPush();
  uVar1 = param_1;
  _WCRSideloadShareFixIsNotificationServiceProcess();
  if ((uVar1 & 1) == 0) {
    _WCRSideloadShareFixIsShareExtensionProcess();
    if ((uVar1 & 1) == 0) {
      pcVar2 = &cf_UIApplication;
      _NSClassFromString();
      puVar3 = PTR___dispatch_main_q_02578680;
      if (pcVar2 != (cfstringStruct *)0x0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
  }
  else {
    FUN_006a43b4();
  }
  _objc_autoreleasePoolPop(param_1);
  return;
}

