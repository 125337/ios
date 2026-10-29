@interface MMNewVoiceInputReportObj : NSObject <IAudioSenderExt>
{
    BOOL _clickToEdited; // +0x8
    BOOL _bEdited; // +0x9
    BOOL _bTransEnd; // +0xa
    BOOL _bTransTimeout; // +0xb
    BOOL _isShowingFormatResult; // +0xc
    BOOL _transTextEqualToFormatText; // +0xd
    BOOL _simplifyBtnExpose; // +0xe
    BOOL _simplifyFail; // +0xf
    BOOL _frontModified; // +0x10
    BOOL _endModified; // +0x11
    BOOL _bHadReported; // +0x12
    unsigned int _networkType; // +0x14
    unsigned int _voiceDuration; // +0x18
    unsigned int _defaultLanguageType; // +0x1c
    unsigned int _sendWithLanguageType; // +0x20
    unsigned int _clickFormatTextCount; // +0x24
    unsigned int _clickOriginTextCount; // +0x28
    unsigned int _formatTextWordCount; // +0x2c
    unsigned int _simplifyUseType; // +0x30
    unsigned int _simplifyInputTextCount; // +0x34
    unsigned int _simplifyOutputTextCount; // +0x38
    unsigned long long _exitType; // +0x40
    unsigned long long _transEndTime; // +0x48
    unsigned long long _clickLanguageSwitchTime; // +0x50
    unsigned long long _formatEndTime; // +0x58
    unsigned long long _sendTextCount; // +0x60
    unsigned long long _serverTransCout; // +0x68
    NSString * _simplifySessionId; // +0x70
    NSString * _nsSendText; // +0x78
    NSMutableArray * _voiceIdArray; // +0x80
    NSString * _voiceSessionid; // +0x88
    NSString * _lastTransSnapshot; // +0x90
    NSMutableString * _toneModifyList; // +0x98
    NSMutableString * _punctuateModifyList; // +0xa0
    long long _voiceTextModifyTotalCnt; // +0xa8
    unsigned long long _pressToRecordTime; // +0xb0
    double _pressToRecordOriginX; // +0xb8
    double _pressToRecordOriginY; // +0xc0
    unsigned long long _endRecordTime; // +0xc8
    double _endRecordOriginX; // +0xd0
    double _endRecordOriginY; // +0xd8
    unsigned long long _recordAreaStayTime; // +0xe0
    unsigned long long _transAreaStayTime; // +0xe8
    unsigned long long _cancelAreaStayTime; // +0xf0
    unsigned long long _recordState; // +0xf8
    unsigned long long _recordStateTime; // +0x100
    AudioRecorderUserData * _userData; // +0x108
    ReportVoiceResultMgr * _resultReportMgr; // +0x110
}
- (id)toneModifyList;
- (id)punctuateModifyList;
- (id)init;
- (void)startRecordWithPointInScreen:(CGPoint)arg1;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)endPressWithPointInScreen:(CGPoint)arg1;
- (void)reportWithExitType:(unsigned long long)arg1;
- (void)reportTransSendResult;
- (void)onTransEndWithText:(id)arg1;
- (void)checkModifyWithCurrentText:(id)arg1;
- (void)OnRecordVoiceChangeWithUserData:(id)arg1;
- (unsigned long long)exitType;
- (void)setExitType:(unsigned long long)arg1;
- (unsigned long long)transEndTime;
- (void)setTransEndTime:(unsigned long long)arg1;
- (unsigned long long)clickLanguageSwitchTime;
- (void)setClickLanguageSwitchTime:(unsigned long long)arg1;
- (unsigned long long)formatEndTime;
- (void)setFormatEndTime:(unsigned long long)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (unsigned long long)sendTextCount;
- (void)setSendTextCount:(unsigned long long)arg1;
- (unsigned int)voiceDuration;
- (void)setVoiceDuration:(unsigned int)arg1;
- (unsigned long long)serverTransCout;
- (void)setServerTransCout:(unsigned long long)arg1;
- (unsigned int)defaultLanguageType;
- (void)setDefaultLanguageType:(unsigned int)arg1;
- (unsigned int)sendWithLanguageType;
- (void)setSendWithLanguageType:(unsigned int)arg1;
- (BOOL)clickToEdited;
- (void)setClickToEdited:(BOOL)arg1;
- (BOOL)bEdited;
- (void)setBEdited:(BOOL)arg1;
- (BOOL)bTransEnd;
- (void)setBTransEnd:(BOOL)arg1;
- (BOOL)bTransTimeout;
- (void)setBTransTimeout:(BOOL)arg1;
- (BOOL)isShowingFormatResult;
- (void)setIsShowingFormatResult:(BOOL)arg1;
- (unsigned int)clickFormatTextCount;
- (void)setClickFormatTextCount:(unsigned int)arg1;
- (unsigned int)clickOriginTextCount;
- (void)setClickOriginTextCount:(unsigned int)arg1;
- (unsigned int)formatTextWordCount;
- (void)setFormatTextWordCount:(unsigned int)arg1;
- (BOOL)transTextEqualToFormatText;
- (void)setTransTextEqualToFormatText:(BOOL)arg1;
- (BOOL)simplifyBtnExpose;
- (void)setSimplifyBtnExpose:(BOOL)arg1;
- (unsigned int)simplifyUseType;
- (void)setSimplifyUseType:(unsigned int)arg1;
- (unsigned int)simplifyInputTextCount;
- (void)setSimplifyInputTextCount:(unsigned int)arg1;
- (unsigned int)simplifyOutputTextCount;
- (void)setSimplifyOutputTextCount:(unsigned int)arg1;
- (id)simplifySessionId;
- (void)setSimplifySessionId:(id)arg1;
- (BOOL)simplifyFail;
- (void)setSimplifyFail:(BOOL)arg1;
- (id)nsSendText;
- (void)setNsSendText:(id)arg1;
- (id)voiceIdArray;
- (void)setVoiceIdArray:(id)arg1;
- (id)voiceSessionid;
- (void)setVoiceSessionid:(id)arg1;
- (id)lastTransSnapshot;
- (void)setLastTransSnapshot:(id)arg1;
- (BOOL)frontModified;
- (void)setFrontModified:(BOOL)arg1;
- (BOOL)endModified;
- (void)setEndModified:(BOOL)arg1;
- (void)setToneModifyList:(id)arg1;
- (void)setPunctuateModifyList:(id)arg1;
- (long long)voiceTextModifyTotalCnt;
- (void)setVoiceTextModifyTotalCnt:(long long)arg1;
- (unsigned long long)pressToRecordTime;
- (void)setPressToRecordTime:(unsigned long long)arg1;
- (double)pressToRecordOriginX;
- (void)setPressToRecordOriginX:(double)arg1;
- (double)pressToRecordOriginY;
- (void)setPressToRecordOriginY:(double)arg1;
- (unsigned long long)endRecordTime;
- (void)setEndRecordTime:(unsigned long long)arg1;
- (double)endRecordOriginX;
- (void)setEndRecordOriginX:(double)arg1;
- (double)endRecordOriginY;
- (void)setEndRecordOriginY:(double)arg1;
- (unsigned long long)recordAreaStayTime;
- (void)setRecordAreaStayTime:(unsigned long long)arg1;
- (unsigned long long)transAreaStayTime;
- (void)setTransAreaStayTime:(unsigned long long)arg1;
- (unsigned long long)cancelAreaStayTime;
- (void)setCancelAreaStayTime:(unsigned long long)arg1;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;
- (unsigned long long)recordStateTime;
- (void)setRecordStateTime:(unsigned long long)arg1;
- (BOOL)bHadReported;
- (void)setBHadReported:(BOOL)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)resultReportMgr;
- (void)setResultReportMgr:(id)arg1;
- (void).cxx_destruct;
@end
