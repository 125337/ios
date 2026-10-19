// ___Install_block_invoke @0x60ba8

void ___Install_block_invoke(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_d8;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_00110518;
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong();
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_50 = param_1;
  local_48 = param_4;
  (**(code **)(param_1 + 0x20))(local_38,*(undefined8 *)(param_1 + 0x28),local_40,param_4);
  uVar4 = local_40;
  local_28 = &cf_type;
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_d8,local_48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_d8,&local_20,&local_28,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _TraceVideo(&cf_video_native_facadeFinished,uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  puVar1 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar4 = _objc_retainAutoreleasedReturnValue(puVar1);
  local_58 = (*(code *)PTR__objc_retain_00110460)(local_38);
  _dispatch_async(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_18);
  }
  return;
}

