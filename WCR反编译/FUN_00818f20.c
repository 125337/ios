// FUN_00818f20 @ 00818f20

/* WARNING: Removing unreachable block (ram,0x008191d4) */
/* WARNING: Removing unreachable block (ram,0x008191b4) */

void FUN_00818f20(undefined *param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_78;
  uint local_6c;
  undefined *local_68 [3];
  undefined *local_50;
  undefined *local_48;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_3c = param_5 & 1;
  local_48 = (undefined *)0x0;
  local_3b = param_5;
  local_3a = param_4;
  local_39 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if (local_3c != 0) {
    puVar2 = &DAT_026f4858;
    FUN_0083b2d0(&DAT_026f4858,2);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_g_lu__p_h_d_d_d);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)();
    FUN_0083b8d4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_68[0];
    bVar1 = local_68[0] == (undefined *)0x0;
    if (bVar1) {
      local_3b = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    local_6c = (uint)!bVar1;
    _objc_storeStrong(local_68,0);
    if (local_6c != 0) goto LAB_0081939c;
  }
  _WCRefineWechatThemeSetBubbleDarkOverride((local_3a & 1) != 0);
  local_78 = (undefined *)0x0;
  puVar3 = local_30;
  (*DAT_028cd160)(local_30,local_38,local_39 & 1,local_3a & 1,local_3b & 1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_78;
  local_78 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_6c = 0;
  _WCRefineWechatThemeSetBubbleDarkOverride(0xffffffffffffffff);
  local_6c = 0;
  if (((local_3c & 1) != 0) &&
     (puVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     puVar2 = local_78, puVar3 != (undefined *)0x0)) {
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) != 0) {
      FUN_0083b8d4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  puVar2 = local_78;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar2;
  local_6c = 1;
  _objc_storeStrong(&local_78,0);
LAB_0081939c:
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

