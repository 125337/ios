// ___WCMYYImageTypeFromUTType_block_invoke @0x92a7c

void ___WCMYYImageTypeFromUTType_block_invoke(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30;
  undefined **local_28;
  undefined **local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_98 = *(undefined8 *)PTR__kUTTypeJPEG_00110920;
  local_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ff38;
  local_90 = *(undefined8 *)PTR__kUTTypeJPEG2000_00110928;
  local_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ff50;
  local_88 = *(undefined8 *)PTR__kUTTypeTIFF_00110938;
  local_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ff68;
  local_80 = *(undefined8 *)PTR__kUTTypeBMP_00110908;
  local_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ff80;
  local_78 = *(undefined8 *)PTR__kUTTypeICO_00110918;
  local_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ff98;
  local_70 = *(undefined8 *)PTR__kUTTypeAppleICNS_00110900;
  local_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ffb0;
  local_68 = *(undefined8 *)PTR__kUTTypeGIF_00110910;
  local_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ffc8;
  local_60 = *(undefined8 *)PTR__kUTTypePNG_00110930;
  local_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010ffe0;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,param_2,&local_58,&local_98,8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCMYYImageTypeFromUTType_dic;
  _WCMYYImageTypeFromUTType_dic = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

