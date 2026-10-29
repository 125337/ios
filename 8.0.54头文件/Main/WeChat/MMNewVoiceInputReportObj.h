@interface MMNewVoiceInputReportObj : NSObject <IAudioSenderExt>
{
    BOOL _clickToEdited; // +0x8
    BOOL _bEdited; // +0x9
    BOOL _bTransEnd; // +0xa
    BOOL _bTransTimeout; // +0xb
    BOOL _isShowingFormatResult; // +0xc
    BOOL _transTextEqualToFormatText; // +0xd
    BOOL _bHadReported; // +0xe
    unsigned int _networkType; // +0x10
    unsigned int _voiceDuration; // +0x14
    unsigned int _defaultLanguageType; // +0x18
    unsigned int _sendWithLanguageType; // +0x1c
    unsigned int _clickFormatTextCount; // +0x20
    unsigned int _clickOriginTextCount; // +0x24
    unsigned int _formatTextWordCount; // +0x28
    unsigned long long _exitType; // +0x30
    unsigned long long _transEndTime; // +0x38
    unsigned long long _clickLanguageSwitchTime; // +0x40
    unsigned long long _formatEndTime; // +0x48
    unsigned long long _sendTextCount; // +0x50
    unsigned long long _serverTransCout; // +0x58
    NSString * _nsSendText; // +0x60
    NSMutableArray * _voiceIdArray; // +0x68
    unsigned long long _pressToRecordTime; // +0x70
    double _pressToRecordOriginX; // +0x78
    double _pressToRecordOriginY; // +0x80
    unsigned long long _endRecordTime; // +0x88
    double _endRecordOriginX; // +0x90
    double _endRecordOriginY; // +0x98
    unsigned long long _recordAreaStayTime; // +0xa0
    unsigned long long _transAreaStayTime; // +0xa8
    unsigned long long _cancelAreaStayTime; // +0xb0
    unsigned long long _recordState; // +0xb8
    unsigned long long _recordStateTime; // +0xc0
    AudioRecorderUserData * _userData; // +0xc8
    ReportVoiceResultMgr * _resultReportMgr; // +0xd0
}
- (id)init;
- (void)startRecordWithPointInScreen:(CGPoint)arg1;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)endPressWithPointInScreen:(CGPoint)arg1;
- (void)reportWithExitType:(unsigned long long)arg1;
- (void)reportTransSendResult;
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
- (id)nsSendText;
- (void)setNsSendText:(id)arg1;
- (id)voiceIdArray;
- (void)setVoiceIdArray:(id)arg1;
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

