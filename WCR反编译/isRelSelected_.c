// isRelSelected: @ 01e02a6c

/* Function Stack Size: 0x18 bytes */

bool WCRefineSuperFloatBallWarehouseViewController::isRelSelected_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  byte local_7c;
  cfstringStruct *local_58;
  ID local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconPath_026b1a88);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isNoneItem__026c1b20,local_30);
  if ((IVar2 & 1) == 0) {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_30);
      pcVar1 = local_38;
      if (((ulong)pcVar3 & 1) == 0) {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasSuffix__0269d018);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if (((ulong)pcVar1 & 1) == 0) {
          IVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_absoluteForRel__026c5c40,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_48 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
          local_7c = 0;
          if (IVar2 != 0) {
            pcVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_48)
            ;
            local_7c = (byte)pcVar1;
          }
          local_11 = local_7c & 1;
          local_3c = 1;
          _objc_storeStrong(&local_48,0);
        }
        else {
          local_11 = 1;
          local_3c = 1;
        }
      }
      else {
        local_11 = 1;
        local_3c = 1;
      }
    }
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    local_11 = pcVar1 == (cfstringStruct *)0x0;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

