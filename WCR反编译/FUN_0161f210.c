// FUN_0161f210 @ 0161f210

byte FUN_0161f210(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    _NSClassFromString();
    if (uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isSubclassOfClass__0269e590,puVar2);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_0161f328;
      }
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_containsString__0269d0b0,&cf_ViewController);
    local_11 = (byte)uVar1 & 1;
  }
LAB_0161f328:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

