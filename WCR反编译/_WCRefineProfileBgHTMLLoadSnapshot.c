// _WCRefineProfileBgHTMLLoadSnapshot @ 01cf4184

void _WCRefineProfileBgHTMLLoadSnapshot
               (double param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined *local_d8;
  undefined *local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  bool local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  if (uVar2 == 0) {
    local_28 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    FUN_01cf4670();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_48;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) == 0) {
      local_28 = (undefined *)0x0;
      local_3c = 1;
    }
    else {
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_59 = false;
      bVar1 = ((ulong)puVar5 & 1) == 0;
      if (bVar1) {
        local_d8 = (undefined *)0x0;
      }
      else {
        local_d8 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_d8;
      }
      local_59 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = local_d8;
      if ((local_59 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_style);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_68 = puVar4;
      if (puVar4 == local_38) {
        uVar2 = local_30;
        FUN_01cf46d8(0,local_30,local_50);
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        if ((uVar2 & 1) == 0) {
          local_28 = (undefined *)0x0;
          local_3c = 1;
        }
        else {
          FUN_01cf4934();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_imageWithContentsOfFile__0269e0e0);
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_size_026cab00);
          dVar6 = 1.0;
          local_80 = param_1;
          local_78 = param_2;
          if ((param_1 <= 1.0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_size_026cab00),
             local_90 = param_1, local_88 = dVar6, dVar6 <= 1.0)) {
            local_28 = (undefined *)0x0;
          }
          else {
            puVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_30)
            ;
            if (((ulong)puVar3 & 1) == 0) {
              puVar4 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
              local_98 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,&cf_signature);
              puVar3 = local_98;
              FUN_01cf4670();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_writeToFile_atomically__0269f928,puVar4,1);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              _objc_storeStrong(&local_98,0);
            }
            puVar3 = local_70;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = puVar3;
          }
          local_3c = 1;
          _objc_storeStrong(&local_70,0);
        }
      }
      else {
        local_28 = (undefined *)0x0;
        local_3c = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

