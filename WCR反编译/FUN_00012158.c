// FUN_00012158 @ 00012158

void FUN_00012158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_90;
  ulong local_88;
  undefined *local_80;
  ulong local_78;
  ulong local_70;
  undefined8 local_68 [3];
  long local_50;
  byte local_41;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_40;
  local_41 = param_5;
  FUN_0001ab70(local_40,local_38);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_50 = lVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_0001af08();
  _objc_retainAutoreleasedReturnValue();
  local_68[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar4 = local_30;
  FUN_0001b32c(local_30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_70 = uVar4;
  FUN_0001b700(uVar4,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  local_78 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_appendString__0269ccb0,&cf_N_O1__f_N_O_Sv_gN0_RN_u_Ov_5fy0Ylb_OT_);
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  puVar5 = local_80;
  if (lVar1 != 0) {
    lVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendFormat__0269d148,&cf__Ovy_T_);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  uVar4 = local_30;
  FUN_0001bc2c(local_30,local_40);
  if ((uVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_appendString__0269ccb0,&cf__eck_W_);
  }
  if ((local_41 & 1) != 0) {
    uVar4 = local_30;
    FUN_00011760();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    FUN_0001af08();
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    puVar5 = local_80;
    if (uVar4 != 0) {
      FUN_0001c124(local_30,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendFormat__0269d148,&cf___uv_f_);
    }
    _objc_storeStrong(&local_88,0);
  }
  puVar5 = local_80;
  uVar4 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (uVar4 != 0) {
    local_90 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_appendFormat__0269d148,&cf__e_);
  if (uVar4 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  puVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar5);
  return;
}

