// FUN_00085d74 @ 00085d74

byte FUN_00085d74(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
                 undefined1 *param_6,ulong *param_7,ulong *param_8,ulong *param_9,
                 undefined4 *param_10,undefined8 *param_11,undefined8 *param_12,undefined8 *param_13
                 )

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_2d0;
  cfstringStruct *local_290;
  cfstringStruct *local_260;
  cfstringStruct *local_1d8;
  cfstringStruct *local_198;
  cfstringStruct *local_168;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98 [3];
  undefined4 local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined4 *local_60;
  ulong *local_58;
  ulong *local_50;
  ulong *local_48;
  undefined1 *local_40;
  byte local_33;
  byte local_32;
  byte local_31;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_60 = param_10;
  local_68 = param_11;
  local_70 = param_12;
  local_78 = param_13;
  local_58 = param_9;
  local_50 = param_8;
  local_48 = param_7;
  local_40 = param_6;
  local_33 = param_5;
  local_32 = param_4;
  local_31 = param_3;
  if ((local_30 == (cfstringStruct *)0x0) || ((param_4 & 1) != 0)) {
    local_21 = 0;
  }
  else if (((param_3 & 1) == 0) || ((param_5 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if (param_6 != (undefined1 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListEnabled);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_40 = (char)pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_48 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_b8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_260 = &cf___;
        }
        else {
          local_260 = local_b8;
        }
        _objc_retainAutorelease();
        *local_48 = (ulong)local_260;
        _objc_storeStrong(&local_b8,0);
      }
      if (local_50 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListNightPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_c0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_290 = &cf___;
        }
        else {
          local_290 = local_c0;
        }
        _objc_retainAutorelease();
        *local_50 = (ulong)local_290;
        _objc_storeStrong(&local_c0,0);
      }
      if (local_58 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListRandomMode);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((long)local_c8 < 0) || (2 < (long)local_c8)) {
          local_c8 = (cfstringStruct *)0x0;
        }
        *local_58 = (ulong)local_c8;
      }
      if (local_60 != (undefined4 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListAddMode);
        _objc_retainAutoreleasedReturnValue();
        local_2d0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((long)local_2d0 < 0) || (1 < (long)local_2d0)) {
          local_2d0 = (cfstringStruct *)0x0;
        }
        *local_60 = (int)local_2d0;
      }
      if (local_68 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListOffsetX);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_68 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_70 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListOffsetY);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_70 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_78 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatListScale);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_78 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_21 = 1;
    }
    else {
      if (param_6 != (undefined1 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatPageEnabled);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_40 = (char)pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_48 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatPagePath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_98[0] = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_168 = &cf___;
        }
        else {
          local_168 = local_98[0];
        }
        _objc_retainAutorelease();
        *local_48 = (ulong)local_168;
        _objc_storeStrong(local_98,0);
      }
      if (local_50 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatPageNightPath);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_a0 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar1 & 1) == 0) {
          local_198 = &cf___;
        }
        else {
          local_198 = local_a0;
        }
        _objc_retainAutorelease();
        *local_50 = (ulong)local_198;
        _objc_storeStrong(&local_a0,0);
      }
      if (local_58 != (ulong *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatPageRandomMode);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((long)pcVar2 < 0) || (local_a8 = pcVar2, 2 < (long)pcVar2)) {
          local_a8 = (cfstringStruct *)0x0;
        }
        *local_58 = (ulong)local_a8;
      }
      if (local_60 != (undefined4 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatPageAddMode);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (((long)pcVar2 < 0) || (local_1d8 = pcVar2, 1 < (long)pcVar2)) {
          local_1d8 = (cfstringStruct *)0x0;
        }
        *local_60 = (int)local_1d8;
        local_b0 = pcVar2;
      }
      if (local_68 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatPageOffsetX);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_68 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_70 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatPageOffsetY);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_70 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      if (local_78 != (undefined8 *)0x0) {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKey__0269e048,&cf_chatPageScale);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        *local_78 = param_1;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      local_21 = 1;
    }
  }
  else {
    local_21 = 0;
  }
  local_7c = 1;
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

