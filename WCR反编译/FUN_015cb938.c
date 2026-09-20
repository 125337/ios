// FUN_015cb938 @ 015cb938

undefined8 FUN_015cb938(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  long local_30;
  ulong local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar2 = local_28;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  pcVar1 = &cf__3x;
  if (*(double *)(param_1 + 0x20) < 2.5) {
    pcVar1 = &cf__2x;
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,pcVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__2x);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__3x),
       (uVar2 & 1) == 0)) {
      local_18 = 1;
    }
    else {
      local_18 = 2;
    }
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

