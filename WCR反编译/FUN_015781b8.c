// FUN_015781b8 @ 015781b8

void FUN_015781b8(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CContact";
  _objc_getClass();
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  else {
    FUN_01533f64(local_20,PTR_s_isMMContact_026acbf0,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiType__026ac168);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_20;
        FUN_015623d8(local_20,PTR_s_m_uiType_026b06f0,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setM_uiType__026ac168,(uint)uVar3 | 1);
      }
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

