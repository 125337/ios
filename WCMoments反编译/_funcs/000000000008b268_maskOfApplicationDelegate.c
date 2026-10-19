// maskOfApplicationDelegate @0x8b268

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYBIBScreenRotationHandler::maskOfApplicationDelegate(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &DAT_00002710;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_delegate(uVar2,local_40);
  local_30 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar3 = _objc_opt_respondsToSelector
                    (local_30,"application:supportedInterfaceOrientationsForWindow:");
  uVar2 = local_30;
  if ((uVar3 & 1) != 0) {
    _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_40);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_loadWeakRetained(local_18 + 8);
    _objc_msgSend_window(uVar5,local_40);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_28 = (undefined *)
               _objc_msgSend_application_supportedInterfaceOrientationsForWindow_
                         (uVar2,local_40,uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  puVar1 = local_28;
  _objc_storeStrong(&local_30,0);
  return (unsigned_long_long)puVar1;
}

