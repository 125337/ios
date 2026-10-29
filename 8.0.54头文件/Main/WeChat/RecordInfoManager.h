@interface RecordInfoManager : NSObject <IAudioSenderExt>
{
    BOOL _bTransStartSucc; // +0x8
    BOOL _bCanStartTextViewAnimation; // +0x9
    BOOL _bRealTimeTranslate; // +0xa
    unsigned int _inputLanguageType; // +0xc
    unsigned int _translatingWordingIndex; // +0x10
    unsigned int _localId; // +0x14
    id <RecordInfoManagerDelegate> _delegate; // +0x18
    NSString * _translatedText; // +0x20
    unsigned long long _recordState; // +0x28
    unsigned long long _transState; // +0x30
    NSString * _translatingWording; // +0x38
    MMNewVoiceInputReportObj * _reportObj; // +0x40
    AudioRecorderUserData * _recordInfo; // +0x48
    NSString * _chatName; // +0x50
    NSMutableArray * _arrVoiceIds; // +0x58
    MMTimer * _translatingTimer; // +0x60
}
+ (void)showRecordStartFailTips:(id)arg1;
- (id)init;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)startRealTimeTranslate;
- (void)stopTranslate;
- (void)startTranslate;
- (void)startTranslateTimer;
- (void)realStartTranslate;
- (void)checkChangeTranslatingWording;
- (void)updateTranslatingWording:(BOOL)arg1;
- (void)displayTranslateResultText;
- (void)displayTranslateResultText:(BOOL)arg1;
- (void)setAttributedText:(id)arg1 animated:(BOOL)arg2;
- (void)setErrorMessage:(id)arg1;
- (unsigned int)getUncertainLength;
- (void)invalidateTranslateTimer;
- (void)makeTranslateStopWithError:(id)arg1;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (void)OnVoiceTransResultChange:(id)arg1 InputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)OnVoiceTransTimeout:(unsigned int)arg1;
- (void)onStartRecordingFromUsr:(id)arg1 ToUsr:(id)arg2;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(unsigned int)arg2 andTranslatingWording:(id)arg3;
- (unsigned int)getSuffixDotCountWithString:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;
- (unsigned long long)transState;
- (void)setTransState:(unsigned long long)arg1;
- (unsigned int)inputLanguageType;
- (void)setInputLanguageType:(unsigned int)arg1;
- (unsigned int)translatingWordingIndex;
- (void)setTranslatingWordingIndex:(unsigned int)arg1;
- (id)translatingWording;
- (void)setTranslatingWording:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (id)recordInfo;
- (void)setRecordInfo:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)arrVoiceIds;
- (void)setArrVoiceIds:(id)arg1;
- (id)translatingTimer;
- (void)setTranslatingTimer:(id)arg1;
- (BOOL)bTransStartSucc;
- (void)setBTransStartSucc:(BOOL)arg1;
- (BOOL)bCanStartTextViewAnimation;
- (void)setBCanStartTextViewAnimation:(BOOL)arg1;
- (BOOL)bRealTimeTranslate;
- (void)setBRealTimeTranslate:(BOOL)arg1;
- (void).cxx_destruct;
@end

