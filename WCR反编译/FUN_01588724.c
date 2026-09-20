// FUN_01588724 @ 01588724

void FUN_01588724(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = DAT_028e3878;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = lVar1;
  if ((((lVar1 != 0) && (local_18 != 0)) &&
      (uVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isGroup_026af768),
      (uVar2 & 1) == 0)) &&
     (uVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSelf_0269ff30),
     lVar1 = local_20, (uVar2 & 1) == 0)) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_commonGroupCount_026af808);
    FUN_0157f538(lVar1,uVar2,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

