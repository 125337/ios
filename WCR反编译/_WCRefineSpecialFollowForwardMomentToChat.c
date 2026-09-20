// _WCRefineSpecialFollowForwardMomentToChat @ 005a04dc

void _WCRefineSpecialFollowForwardMomentToChat
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *local_d8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  long local_70;
  long local_68;
  undefined4 local_5c;
  cfstringStruct *local_58 [3];
  long local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_30;
  FUN_005a0828();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_d8 = &cf___;
  }
  else {
    local_d8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_d8;
  lVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  lVar2 = local_40;
  pcVar4 = local_58[0];
  if ((lVar5 == 0) || (local_28 == 0)) {
    local_5c = 1;
  }
  else {
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_005a0c18;
    local_80 = &DAT_0257e1d8;
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = local_40;
    local_78 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_28;
    local_70 = lVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    FUN_005a09c4(lVar2,&local_98);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    local_5c = 0;
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

