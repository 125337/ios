// processBatchLocalFrames:atIndex: @ 017fa894

/* Function Stack Size: 0x20 bytes */

void WCRefineAssistFunctionViewController::processBatchLocalFrames_atIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ulong uVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  ulong local_50;
  long_long local_48;
  ulong local_40;
  uint local_34;
  long_long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (param_4 < uVar3) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_itemProvider_026b3100);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    IVar2 = local_18;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_017fab08;
    local_60 = &DAT_02589668;
    local_48 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_28;
    local_58 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_loadObjectOfClass_completionHand_026b3118,puVar5,&local_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_40,0);
  }
  else {
    _objc_retainAutoreleaseReturnValue(param_4 - uVar3);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  local_34 = (uint)(param_4 >= uVar3);
  _objc_storeStrong(&local_28,0);
  return;
}

