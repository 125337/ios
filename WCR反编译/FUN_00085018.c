// FUN_00085018 @ 00085018

byte FUN_00085018(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong *param_4,
                 ulong *param_5,ulong *param_6,undefined4 *param_7,undefined8 *param_8,
                 undefined8 *param_9,undefined8 *param_10)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_1a0;
  cfstringStruct *local_160;
  cfstringStruct *local_130;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90 [3];
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  ulong *local_50;
  ulong *local_48;
  ulong *local_40;
  undefined1 *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_70 = param_10;
  local_68 = param_9;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_3;
  if (local_30 == (cfstringStruct *)0x0) {
    local_21 = 0;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,&cf_chatListEnabled)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (((ulong)pcVar2 & 1) == 0) {
      local_21 = 0;
    }
    else {
      if (local_38 != (undefined1 *)0x0) {
        *local_38 = 1;
      }
      if (local_40 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_90[0] = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_130 = &cf___;
        }
        else {
          local_130 = local_90[0];
        }
        _objc_retainAutorelease();
        *local_40 = (ulong)local_130;
        _objc_storeStrong(local_90,0);
      }
      if (local_48 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListNightPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_98 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_160 = &cf___;
        }
        else {
          local_160 = local_98;
        }
        _objc_retainAutorelease();
        *local_48 = (ulong)local_160;
        _objc_storeStrong(&local_98,0);
      }
      if (local_50 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListRandomMode);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((long)local_a0 < 0) || (2 < (long)local_a0)) {
          local_a0 = (cfstringStruct *)0x0;
        }
        *local_50 = (ulong)local_a0;
      }
      if (local_58 != (undefined4 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListAddMode);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((long)local_1a0 < 0) || (1 < (long)local_1a0)) {
          local_1a0 = (cfstringStruct *)0x0;
        }
        *local_58 = (int)local_1a0;
      }
      if (local_60 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListOffsetX);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_60 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_68 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListOffsetY);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_68 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_70 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListScale);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_70 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_21 = 1;
    }
  }
  local_74 = 1;
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

