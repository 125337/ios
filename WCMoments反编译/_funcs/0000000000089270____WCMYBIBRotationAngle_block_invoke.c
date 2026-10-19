// ___WCMYBIBRotationAngle_block_invoke @0x89270

void ___WCMYBIBRotationAngle_block_invoke(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  local_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fe78;
  local_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fed8;
  local_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fe90;
  local_30 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f488;
  local_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fea8;
  local_28 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f498;
  local_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fec0;
  local_20 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_0010f4a8;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,param_2,&local_38,&local_58,4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _WCMYBIBRotationAngle_angleMap;
  _WCMYBIBRotationAngle_angleMap = uVar2;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

