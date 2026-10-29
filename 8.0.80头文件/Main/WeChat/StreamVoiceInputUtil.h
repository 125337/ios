@interface StreamVoiceInputUtil : MMUserService <IMMLanguageMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicInputType; // +0x8
    NSMutableArray * _arrInputLanguage; // +0x10
}
+ (id)tempAudioFileFolderPath;
+ (id)tempAudioFilePath:(unsigned int)arg1;
+ (BOOL)IsSupportVoiceMsgRecordTranslate;
+ (id)genVoiceId:(id)arg1;
+ (id)genSessionId;
+ (float)getVoiceTransTimeoutInsec;
+ (unsigned int)getDynamicLanguageSupportType;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onLanguageChange;
- (void)registerAllInputLanguages;
- (void)addSupportInputLanguage:(unsigned int)arg1 Name:(id)arg2;
- (void)addSupportInputLanguage:(unsigned int)arg1 Name:(id)arg2 TransIcon:(id)arg3 TransIconEn:(id)arg4;
- (id)getSupportInputLanguages;
- (id)dicInputType;
- (unsigned int)getVoiceInputLanguageTypeWithChatName:(id)arg1;
- (void)syncVoiceInputLanguageType:(unsigned int)arg1 ChatName:(id)arg2;
- (unsigned int)getLastVoiceTransLanguageType;
- (void)setDicInputType:(id)arg1;
- (id)arrInputLanguage;
- (void)setArrInputLanguage:(id)arg1;
- (void).cxx_destruct;
@end
