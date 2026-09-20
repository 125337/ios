// FUN_00241700 @ 00241700

void FUN_00241700(void)

{
  char *pcVar1;
  
  pcVar1 = "MMGrowTextView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_textView_shouldChangeTextInRange_026a0d30,FUN_00241748,&DAT_028c9348
                  );
  return;
}

