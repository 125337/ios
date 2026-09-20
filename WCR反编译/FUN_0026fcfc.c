// FUN_0026fcfc @ 0026fcfc

void FUN_0026fcfc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c9570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeFromSuperview_026ca800);
    _objc_setAssociatedObject(local_18,&DAT_028c9570,0,1);
  }
  uVar3 = local_18;
  FUN_00270578(local_18,"_secondDetail");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38[0] = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar1 = local_38[0];
  if ((uVar3 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf__N_);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf__gN_),
       (uVar1 & 1) != 0)) {
      FUN_002706ec(local_18,"_secondDetail",0);
    }
    _objc_storeStrong(&local_40,0);
  }
  uVar1 = local_18;
  FUN_0026f338(local_18,&cf_secondDetailLabel);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHidden__026ca970,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

