// FUN_00019aec @ 00019aec

void FUN_00019aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_30;
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if (((uVar2 & 1) == 0) ||
     (((uVar2 = local_30, FUN_0002d5e0(), (uVar2 & 1) == 0 &&
       (uVar2 = local_30, FUN_0002db1c(), (uVar2 & 1) == 0)) &&
      (uVar2 = local_30, FUN_0002df38(), (uVar2 & 1) == 0)))) {
    (*DAT_028c7a30)(local_18,local_20,local_28,local_30);
    uVar2 = local_30;
    pcVar1 = "CMessageWrap";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar2 & 1) != 0) {
      FUN_00029d80(local_30);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

