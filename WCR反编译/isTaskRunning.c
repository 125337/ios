// isTaskRunning @ 01716204

/* Function Stack Size: 0x10 bytes */

bool ToastManager::isTaskRunning(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  return (uint)(param_1 != 0);
}

