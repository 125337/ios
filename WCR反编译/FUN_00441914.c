// FUN_00441914 @ 00441914

void FUN_00441914(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar5;
  ulong local_68;
  undefined4 local_5c;
  double local_58;
  undefined8 local_50 [3];
  double local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  ulong uVar4;
  
  local_28 = 0;
  local_20 = param_3;
  local_18 = param_2;
  _objc_storeStrong(&local_28,param_4);
  local_29 = param_5;
  _CFAbsoluteTimeGetCurrent();
  uVar3 = local_28;
  local_38 = param_1;
  FUN_0045447c();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar3;
  _CFAbsoluteTimeGetCurrent();
  dVar5 = (param_1 - local_38) * 1000.0;
  local_58 = dVar5;
  _CFAbsoluteTimeGetCurrent();
  uVar4 = local_18;
  local_38 = dVar5;
  (*DAT_028caa00)(local_18,local_20,local_50[0],local_29 & 1);
  uVar2 = (uint)uVar4;
  FUN_00454a6c();
  uVar4 = local_18;
  if ((uVar2 & 1) == 0) {
    local_5c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = PTR_s_changePageToPid_scrollToTop_anim_026a3b60;
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_respondsToSelector__026ca818,
               PTR_s_changePageToPid_scrollToTop_anim_026a3b60);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,puVar1,_WCRLocalEmoticonPid,1,0);
    }
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

