// _WCRSideloadShareFixShareExtensionStatusText @ 015094e8

void _WCRSideloadShareFixShareExtensionStatusText(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_20;
  cfstringStruct *local_18;
  
  _WCRSideloadShareFixReadProbeLog();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  _WCRSideloadShareFixPreferredHostLinked();
  if ((((param_1 & 1) == 0) && (_WCRSideloadShareFixShareExtensionLinked(), (param_1 & 1) == 0)) &&
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_ext_1),
     (uVar2 & 1) == 0)) {
    FUN_015080a8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if (uVar3 == 0) {
      FUN_01508b28();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 == 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_eRNibU_;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__gleQ;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__leQ;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

