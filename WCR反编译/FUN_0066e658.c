// FUN_0066e658 @ 0066e658

void FUN_0066e658(undefined8 param_1,byte param_2,byte param_3,undefined8 param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  cfstringStruct *local_128;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_55;
  cfstringStruct *local_48;
  byte local_3d;
  uint local_3c;
  undefined8 local_38;
  byte local_2a;
  byte local_29;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = param_4;
  local_2a = param_3;
  local_29 = param_2;
  if (local_28 == (cfstringStruct *)0x0) {
    FUN_00657450(&cf__e_gekl);
    local_3c = 1;
  }
  else {
    local_3d = 1;
    if ((param_2 & 1) == 0) {
      local_3d = param_3;
    }
    local_3d = local_3d & 1;
    pcVar2 = local_28;
    FUN_00670b64();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    FUN_00670e5c();
    local_55 = (byte)pcVar2;
    pcVar2 = local_28;
    FUN_0066db9c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    FUN_00667bb8();
    _objc_retainAutoreleasedReturnValue();
    FUN_00657450(&cf__e_gek);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if ((local_3d & 1) == 0) {
      if ((local_55 & 1) == 0) {
        FUN_00657450(&cf__e_gekntlgMR);
      }
      else {
        pcVar2 = local_48;
        FUN_006717b4(local_48,0);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        FUN_0066e134(local_28,pcVar2);
        pcVar2 = local_28;
        FUN_00670348();
        _objc_retainAutoreleasedReturnValue();
        FUN_00657450(&cf__e_geknta);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        _objc_storeStrong(&local_60,0);
      }
      local_3c = 1;
    }
    else {
      if (local_48 == (cfstringStruct *)0x0) {
        local_128 = &cf___;
      }
      else {
        local_128 = local_48;
      }
      FUN_006717b4(local_128,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_68 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      if ((local_2a & 1) != 0) {
        puVar5 = puVar4;
        FUN_00672b5c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendString__0269ccb0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar4 = local_70;
      if ((local_29 & 1) != 0) {
        uVar6 = local_38;
        FUN_00672c18();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendString__0269ccb0);
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        local_3c = 1;
      }
      else {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,local_70);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_28;
          FUN_00655fa0(local_28,PTR_s_font_0269ea00);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          local_78 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_80 = puVar4;
          FUN_00672d18();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                     *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (local_78 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,
                       *(undefined8 *)PTR__NSFontAttributeName_02578068);
          }
          puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithString_attributes__026a02b0,local_70,local_80);
          pcVar2 = local_28;
          local_88 = puVar4;
          FUN_00655fa0(local_28,PTR_s_textColor_0269f098);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
          local_90 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
          _objc_retainAutoreleasedReturnValue();
          local_98 = puVar4;
          if (local_90 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,
                       *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070);
          }
          if (local_78 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,
                       *(undefined8 *)PTR__NSFontAttributeName_02578068);
          }
          puVar4 = local_88;
          puVar5 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_initWithString_attributes__026a02b0,local_68,local_98);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_appendAttributedString__026a6388,puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          pcVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setAttributedText__026a0000);
          pcVar2 = local_28;
          bVar1 = ((ulong)pcVar3 & 1) == 0;
          if (bVar1) {
            puVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_stringByAppendingString__0269d398,local_68);
            _objc_retainAutoreleasedReturnValue();
            FUN_0066e134(pcVar2);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            pcVar2 = local_28;
            FUN_00670348();
            _objc_retainAutoreleasedReturnValue();
            FUN_00657450(&cf__e_gek_be__);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setAttributedText__026a0000,local_88);
            pcVar2 = local_28;
            FUN_00670348();
            _objc_retainAutoreleasedReturnValue();
            FUN_00657450(&cf__e_gek_be__);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          local_3c = (uint)!bVar1;
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_88,0);
          _objc_storeStrong(&local_80,0);
          _objc_storeStrong(&local_78,0);
        }
        else {
          pcVar2 = local_48;
          FUN_00667bb8();
          _objc_retainAutoreleasedReturnValue();
          FUN_00657450(&cf__e_gekRMR);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_3c = 1;
        }
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

