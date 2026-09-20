// FUN_01582414 @ 01582414

void FUN_01582414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = local_28;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  FUN_015601d8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsHeadHDImgUrl_026b0660);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsHeadImgUrl_026a6b60);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_official_________);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    puVar2 = local_38;
    FUN_01560624(puVar1,local_38,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

