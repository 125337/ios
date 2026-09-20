// FUN_00802bcc @ 00802bcc

void FUN_00802bcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  puVar1 = PTR_s_topViewController_0269e588;
  puVar3 = puVar2;
  _class_getInstanceMethod(puVar2,PTR_s_topViewController_0269e588);
  if (puVar3 == (undefined *)0x0) {
    _class_addMethod(puVar2,puVar1,FUN_00802c48,"@@:");
  }
  return;
}

