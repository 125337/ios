@interface VoiceTransInfo : MMObject <PBCoding>
{
    BOOL _bAutoScrollUp; // +0x8
    BOOL _bAutoTranslate; // +0x9
    BOOL _bShowAnimation; // +0xa
    BOOL _showTransResult; // +0xb
    BOOL _hadLocalTranslateRet; // +0xc
    BOOL _isDialect; // +0xd
    BOOL _dialectFeedbackPending; // +0xe
    unsigned int _mesLocalId; // +0x10
    long long _msgServerId; // +0x18
    unsigned long long _msgCreateTime; // +0x20
    NSString * _voiceId; // +0x28
    NSString * _displayText; // +0x30
    NSString * _translatedText; // +0x38
    NSData * _sliceData; // +0x40
    VoiceTimeSlice * _timeSlice; // +0x48
    long long _status; // +0x50
    unsigned long long _translatedTime; // +0x58
    unsigned long long _transStartTime; // +0x60
    unsigned long long _fristTransTime; // +0x68
    CMessageWrap * _messageWrap; // +0x70
}
+ (void)PBArrayAdd_mesLocalId;
+ (void)PBArrayAdd_msgServerId;
+ (void)PBArrayAdd_msgCreateTime;
+ (void)PBArrayAdd_translatedText;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_sliceData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)getIdentifier;
- (void)setIdentifierParamsWithMsg:(id)arg1;
- (void)setSliceData:(id)arg1;
- (id)timeSlice;
- (unsigned int)mesLocalId;
- (void)setMesLocalId:(unsigned int)arg1;
- (long long)msgServerId;
- (void)setMsgServerId:(long long)arg1;
- (unsigned long long)msgCreateTime;
- (void)setMsgCreateTime:(unsigned long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (BOOL)bAutoScrollUp;
- (void)setBAutoScrollUp:(BOOL)arg1;
- (BOOL)bAutoTranslate;
- (void)setBAutoTranslate:(BOOL)arg1;
- (BOOL)bShowAnimation;
- (void)setBShowAnimation:(BOOL)arg1;
- (BOOL)showTransResult;
- (void)setShowTransResult:(BOOL)arg1;
- (id)sliceData;
- (void)setTimeSlice:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (unsigned long long)translatedTime;
- (void)setTranslatedTime:(unsigned long long)arg1;
- (unsigned long long)transStartTime;
- (void)setTransStartTime:(unsigned long long)arg1;
- (unsigned long long)fristTransTime;
- (void)setFristTransTime:(unsigned long long)arg1;
- (BOOL)hadLocalTranslateRet;
- (void)setHadLocalTranslateRet:(BOOL)arg1;
- (BOOL)isDialect;
- (void)setIsDialect:(BOOL)arg1;
- (BOOL)dialectFeedbackPending;
- (void)setDialectFeedbackPending:(BOOL)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (void).cxx_destruct;
@end
