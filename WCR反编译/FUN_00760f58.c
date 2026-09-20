// FUN_00760f58 @ 00760f58

byte FUN_00760f58(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0075f444(local_20,&cf_MMRecordButton);
  if ((uVar1 & 1) == 0) {
    uVar2 = local_20;
    FUN_0075f444(local_20,&cf_MMTransparentButton);
    uVar1 = local_20;
    local_28 = 0;
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_28 = 0;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        FUN_007612d8();
        local_28 = (byte)uVar1;
      }
    }
    local_11 = local_28 & 1;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

