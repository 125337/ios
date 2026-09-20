// FUN_00846b4c @ 00846b4c

void FUN_00846b4c(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_50;
  char *local_48;
  ulong local_40;
  undefined4 local_38;
  undefined1 local_31;
  ulong local_30;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cd488);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_31 = uVar1;
    local_30 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    local_38 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_0082fb1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "WCCommentDetailViewControllerFB";
    local_40 = uVar3;
    _objc_getClass();
    local_48 = pcVar4;
    if ((pcVar4 == (char *)0x0) ||
       (uVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,pcVar4),
       (uVar3 & 1) == 0)) {
      local_38 = 1;
    }
    else {
      uVar3 = local_40;
      _objc_getAssociatedObject(local_40,&DAT_028cd0e0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      FUN_00814d40();
      if ((uVar3 & 1) == 0) {
        local_38 = 1;
      }
      else {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = false;
        if (uVar3 != local_18) {
          uVar5 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundView_026a0320);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = uVar5 != local_50;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (bVar2) {
          local_38 = 1;
        }
        else {
          FUN_0082552c(local_18,local_50);
          FUN_00827904(local_18,local_50);
          local_38 = 0;
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

