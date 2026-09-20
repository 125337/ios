// initialize @ 015dcc08

/* Function Stack Size: 0x10 bytes */

void WCRiFontConverter::initialize(ID param_1,SEL param_2)

{
  dispatch_queue_t pdVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  
  puVar2 = PTR_WCRiFontConverter_026cedf8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRiFontConverter_026cedf8,PTR_s_class_0269cd60);
  if ((undefined *)param_1 == puVar2) {
    pdVar3 = _dispatch_queue_create("com.qimiao.wcrefine.ifont.js",(dispatch_queue_attr_t)0x0);
    pdVar1 = DAT_028e3b98;
    DAT_028e3b98 = pdVar3;
    (*(code *)PTR__objc_release_02578630)(pdVar1);
  }
  return;
}

