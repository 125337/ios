// FUN_00242e00 @ 00242e00

void FUN_00242e00(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_00243818();
  uVar4 = local_28;
  if ((uVar1 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_S0RJ_Y);
      if ((uVar4 & 1) != 0) {
        uVar4 = local_18;
        _objc_getAssociatedObject(local_18,&DAT_028c9370);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        if ((uVar5 & 1) == 0) {
          FUN_00244460(local_18,&cf_delegate);
        }
        else {
          _objc_setAssociatedObject(local_18,&DAT_028c9370,0,1);
          _NSLog(&cf__wcr__edit_image_send_duplicatedelegateclickignored);
        }
        goto LAB_00242fe0;
      }
    }
  }
  (*DAT_028c9360)(local_18,local_20,local_28);
LAB_00242fe0:
  _objc_storeStrong(&local_28,0);
  return;
}

