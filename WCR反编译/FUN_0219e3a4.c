// FUN_0219e3a4 @ 0219e3a4

undefined1 * FUN_0219e3a4(undefined8 param_1)

{
  undefined1 *local_48;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  _swift_getObjectType();
  local_48 = local_30;
  local_20 = param_1;
  _objc_msgSendSuper2(local_48,PTR_s_initWithCoder__026ca6c0);
  if (local_48 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_release_02578630)(0);
    (*(code *)PTR__objc_release_02578630)(param_1);
    local_48 = (undefined1 *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(local_48);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  return local_48;
}

