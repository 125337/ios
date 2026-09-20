// FUN_003ea3e0 @ 003ea3e0

void FUN_003ea3e0(void)

{
  char *pcVar1;
  
  pcVar1 = "MMGrowTextView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_textView_shouldChangeTextInRange_026a0d30,FUN_003ea448,&DAT_028ca4b0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_textViewDidChange__026a3400,FUN_003eba2c,&DAT_028ca4b8);
  return;
}

