// FUN_00104048 @ 00104048

void FUN_00104048(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_s_wcr_removeInvitedMember_0269edc8;
  if ((param_1 != 0) &&
     (lVar2 = param_1, _class_getInstanceMethod(param_1,PTR_s_wcr_removeInvitedMember_0269edc8),
     lVar2 == 0)) {
    _class_addMethod(param_1,puVar1,FUN_00108784,"v@:");
  }
  return;
}

