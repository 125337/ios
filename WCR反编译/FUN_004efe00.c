// FUN_004efe00 @ 004efe00

void FUN_004efe00(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_38;
  ulong local_30;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = (undefined *)0x0;
  if (local_24 == 1) {
    _objc_storeStrong(0,&local_38,&cf_e_gmo_);
  }
  else if (local_24 == 3) {
    _objc_storeStrong(0,&local_38,&cf_VGrmo_);
  }
  else if (local_24 == 0x22) {
    _objc_storeStrong(0,&local_38,&cf_mo_);
  }
  else if (local_24 == 0x2a) {
    _objc_storeStrong(0,&local_38,&cf_TGrmo_);
  }
  else {
    if (local_24 != 0x2b) {
      if (local_24 == 0x2f) {
        _objc_storeStrong(0,&local_38,&cf_R_h_mo_);
        goto LAB_004f0050;
      }
      if (local_24 == 0x30) {
        _objc_storeStrong(0,&local_38,&cf_MOn_mo_);
        goto LAB_004f0050;
      }
      if (local_24 == 0x31) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_<refermsg)
        ;
        pcVar1 = &cf___umo_;
        if ((uVar3 & 1) == 0) {
          pcVar1 = &cf_eNmo_;
        }
        _objc_storeStrong(&local_38,pcVar1);
        goto LAB_004f0050;
      }
      if (local_24 != 0x32) {
        if (local_24 == 0x3e) {
          _objc_storeStrong(0,&local_38,&cf_b);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf__gw__Wmo__);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_38;
          local_38 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        goto LAB_004f0050;
      }
    }
    _objc_storeStrong(0,&local_38,&cf_mo_);
  }
LAB_004f0050:
  puVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

