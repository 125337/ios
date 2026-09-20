// FUN_00515540 @ 00515540

byte FUN_00515540(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  FUN_00513618();
  if ((uVar3 & 1) != 0) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_005159a4;
  }
  uVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_likeFlag_026a4708);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_likeFlag_026a4708),
     (uVar3 & 1) != 0)) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_005159a4;
  }
  uVar3 = local_20;
  FUN_0050e284(local_20,&cf_username);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    uVar4 = local_20;
    FUN_0050e284(local_20,&cf_sourceUserName);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_0050ed60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_38;
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((uVar4 == 0) || (local_40 == 0)) {
    local_11 = 0;
  }
  else {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_logLikeFeed__026a4760);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_logLikeFeed__026a4760,local_20);
    }
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,
               PTR_s_likeObject_ofUser_source_extraIn_026a4768);
    uVar2 = local_20;
    uVar4 = local_38;
    uVar3 = local_40;
    puVar1 = PTR_s_likeObject_ofUser_source_extraIn_026a4768;
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_likeObject_ofUser_source__026a4770);
      if ((uVar3 & 1) == 0) {
        local_11 = 0;
        goto LAB_00515964;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_likeObject_ofUser_source__026a4770,local_20,local_38,0);
    }
    else {
      FUN_00516d18();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,puVar1,uVar2,uVar4,0);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_setLikeFlag__026a4778);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setLikeFlag__026a4778,1);
    }
    local_11 = 1;
  }
LAB_00515964:
  local_30 = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_005159a4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

