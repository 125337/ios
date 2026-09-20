// FUN_006391e4 @ 006391e4

/* WARNING: Removing unreachable block (ram,0x006396f4) */

void FUN_006391e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_138;
  cfstringStruct *local_90;
  undefined1 local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78 [2];
  cfstringStruct *local_68;
  byte local_59;
  undefined4 local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_4);
  if ((local_30 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_58 = 1;
    goto LAB_0063977c;
  }
  local_59 = 0;
  local_68 = (cfstringStruct *)0x0;
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationShowTypingIndicator_026a5f70);
  local_59 = (byte)pcVar1;
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationTypingIndicatorText_026a5f78);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_68;
  local_68 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  local_78[0] = pcVar1;
  if (((local_59 & 1) == 0) ||
     ((local_68 == (cfstringStruct *)0x0 ||
      (pcVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
      pcVar1 = local_30, pcVar2 == (cfstringStruct *)0x0)))) {
    if (local_78[0] != (cfstringStruct *)0x0) {
      _objc_setAssociatedObject(local_78[0],&DAT_02324213,0,3);
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_58 = 1;
  }
  else if ((local_40 == (cfstringStruct *)0x0) || (local_78[0] == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_58 = 1;
  }
  else {
    pcVar1 = local_78[0];
    _objc_getAssociatedObject(local_78[0],&DAT_0232420f);
    _objc_retainAutoreleasedReturnValue();
    local_81 = pcVar1 != (cfstringStruct *)0x0;
    local_80 = pcVar1;
    if ((bool)local_81) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf__g);
      if (((ulong)pcVar1 & 1) == 0) {
        _objc_setAssociatedObject(local_78[0],&DAT_02324213,0,3);
        pcVar1 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_58 = 1;
      }
      else {
        pcVar1 = local_78[0];
        _objc_getAssociatedObject(local_78[0],&DAT_02324213);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
LAB_006395e4:
          FUN_0064041c();
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_90;
          local_90 = pcVar1;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          _objc_setAssociatedObject(local_78[0],&DAT_02324213,local_90,3);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
          if (pcVar1 == (cfstringStruct *)0x0) {
            pcVar1 = (cfstringStruct *)0x0;
            goto LAB_006395e4;
          }
        }
        if (local_90 == (cfstringStruct *)0x0) {
          local_138 = &cf__eck_WeQ_N_;
        }
        else {
          local_138 = local_90;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_138;
        local_58 = 1;
        _objc_storeStrong(&local_90,0);
      }
    }
    else {
      _objc_setAssociatedObject(local_78[0],&DAT_02324213,0,3);
      pcVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_58 = 1;
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(local_78);
  _objc_storeStrong(&local_68,0);
LAB_0063977c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

