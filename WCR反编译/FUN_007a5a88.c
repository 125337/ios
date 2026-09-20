// FUN_007a5a88 @ 007a5a88

void FUN_007a5a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_5);
  uVar1 = (uint)puVar2;
  if ((local_28 == 0) || (FUN_007a6438(), (uVar1 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_007a50c4();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_MainFrameTableView;
    local_40 = uVar3;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
    if ((uVar3 & 1) == 0) {
      local_38 = 1;
    }
    else {
      _objc_storeWeak(&DAT_028cca98,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      uVar5 = local_40;
      uVar7 = param_1;
      uVar8 = param_2;
      uVar9 = param_3;
      uVar10 = param_4;
      FUN_007a6518();
      FUN_0079b440(param_1,param_2,param_3,param_4,uVar7,uVar8,uVar9,uVar10);
      uVar3 = local_28;
      if ((uVar5 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028ccb1f,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,param_2,uVar9,param_4,local_28,PTR_s_setFrame__026ca960);
        uVar3 = local_28;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028ccb1f,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

