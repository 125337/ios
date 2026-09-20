// FUN_008d5050 @ 008d5050

byte FUN_008d5050(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_11 = true;
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    if (uVar1 == 0x2c63d) {
      local_11 = true;
      local_2c = 1;
    }
    else {
      uVar1 = local_20;
      FUN_008ceaa4(local_20,PTR_s_inputModeChangeButton_026a9620,"_inputModeChangeButton");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_48[0] = uVar1;
      FUN_008ceaa4(local_20,PTR_s_expressionButton_0269f470,"_expressionButton");
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_20;
      local_50 = uVar2;
      FUN_008ceaa4(local_20,PTR_s_recordButton_026a0330,"_recordButton");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_20;
      local_58 = uVar1;
      FUN_008ceaa4(local_20,PTR_s_textView_0269d0f8,"_textView");
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_20;
      local_60 = uVar2;
      _objc_getAssociatedObject(local_20,DAT_026f4ae8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_68 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_containsString__0269d0b0,&cf_WCRChatToolbar)
      ;
      if (((uVar2 & 1) == 0) &&
         (uVar1 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_70,PTR_s_containsString__0269d0b0,&cf_MMGrowTextView), (uVar1 & 1) == 0))
      {
        local_11 = true;
        if ((((local_28 != local_48[0]) && (local_11 = true, local_28 != local_50)) &&
            (local_11 = true, local_28 != local_58)) && (local_11 = true, local_28 != local_60)) {
          local_11 = local_28 == local_68;
        }
      }
      else {
        local_11 = true;
      }
      local_2c = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

