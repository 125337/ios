// isConvertibleVideoFileCell: @ 00f41274

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::isConvertibleVideoFileCell_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isFileMessageCell__026ac208,local_30);
  if ((IVar1 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_messageWrapFromCell__026ac0d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_20;
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_appFileExtensionFromCell_wrap__026ac210,local_30,IVar1);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_20;
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isVideoFileExtension__026ac218,IVar2);
    if ((IVar1 & 1) == 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      IVar1 = local_20;
      if (IVar2 == 0) {
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_appFilePathFromMessageWrap_cell__026ac1f0,local_40,local_30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isReadableVideoAtPath__026ac1e0);
        local_11 = (byte)IVar1 & 1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

