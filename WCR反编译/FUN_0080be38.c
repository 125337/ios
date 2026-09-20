// FUN_0080be38 @ 0080be38

void FUN_0080be38(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5,double param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,byte param_12,
                 byte param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_180;
  double local_178;
  undefined *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  undefined8 local_90;
  long local_88;
  byte local_79;
  double local_78;
  undefined8 local_70;
  byte local_61;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = 0;
  local_30 = param_1;
  uStack_28 = param_2;
  _objc_storeStrong(&local_38,param_8);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_9);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_10);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_11);
  local_88 = 0;
  local_79 = param_13;
  local_78 = param_6;
  local_70 = param_5;
  local_61 = param_12;
  local_60 = param_4;
  local_58 = param_3;
  _objc_storeStrong(&local_88,param_14);
  local_9c = 0x3f99999a;
  local_ac = 0x3e99999a;
  local_b8 = local_78;
  if (local_78 <= 0.30000001192092896) {
    local_178 = 0.30000001192092896;
  }
  else {
    local_178 = local_78;
  }
  local_c0 = local_178;
  local_a8 = local_178;
  if (local_178 <= 1.2000000476837158) {
    local_180 = local_178;
  }
  else {
    local_180 = 1.2000000476837158;
  }
  local_c8 = local_180;
  local_98 = local_180;
  local_d0 = local_58 * local_180;
  local_d8 = (undefined *)0x0;
  local_90 = param_7;
  if (((local_79 & 1) == 0) || (local_88 == 0)) {
    puVar2 = PTR_WBTouchTrailDotView_026ce9a0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,uStack_28,local_d0,local_60 * local_98,local_70,puVar2,
               PTR_s_initWithPoint_dotColor_borderCol_026a8b90,local_48,local_50,local_61 & 1);
    puVar1 = local_d8;
    local_d8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    puVar2 = PTR_WBTouchTrailDotView_026ce9a0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,uStack_28,local_d0,local_60 * local_98,local_70,local_90,puVar2,
               PTR_s_initWithPoint_dotColor_borderCol_026a89f8,local_48,local_50,local_61 & 1,1,
               local_88);
    puVar1 = local_d8;
    local_d8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addSubview__026ca4c0,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_d8);
  FUN_0080b91c(DAT_028ccf68);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf68,PTR_s_addObject__0269d180,local_d8);
  FUN_0080c790(local_38);
  FUN_0080c790(DAT_028ccf68);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

