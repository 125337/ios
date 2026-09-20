// FUN_015815dc @ 015815dc

void FUN_015815dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 local_78;
  undefined *local_70;
  ulong local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = 0;
  local_48 = param_6;
  local_40 = param_5;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  _objc_storeStrong(&local_50,param_7);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_8);
  if (((local_40 == 0) || (local_48 == 0)) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_48),
     (uVar2 & 1) == 0)) {
    local_18 = 0;
    local_5c = 1;
  }
  else {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_methodSignatureForSelector__0269e190,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    if (uVar2 == 0) {
      local_18 = 0;
      local_5c = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSInvocation_026ce208,
                 PTR_s_invocationWithMethodSignature__0269e1a0,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setSelector__0269e1b0,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_38,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_50,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setArgument_atIndex__0269eae8,&local_58,4);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_invoke_0269e1b8);
      local_78 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getReturnValue__0269e1c0,&local_78);
      uVar1 = local_78;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_5c = 1;
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

