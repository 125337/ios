@interface MsgImgDelayEntryReporter : NSObject
{
    BOOL _hasNotifyDetectResult; // +0x8
    BOOL _translateFromFastEntry; // +0x9
    BOOL _translateFromMenu; // +0xa
    unsigned int _validWordRate; // +0xc
    unsigned int _uiSessionID; // +0x10
    unsigned int _accessType; // +0x14
    unsigned int _clickResult; // +0x18
    unsigned int _entryType; // +0x1c
    NSString * _sessionId; // +0x20
    NSString * _imgId; // +0x28
    NSString * _fileId; // +0x30
    NSString * _aesKey; // +0x38
    unsigned long long _openTimeMs; // +0x40
    unsigned long long _exposeTimeMs; // +0x48
    unsigned long long _clickTimeMs; // +0x50
    unsigned long long _clickRstTimeMs; // +0x58
    unsigned long long _exposeResult; // +0x60
    unsigned long long _detectBitSet; // +0x68
}
- (void)dealloc;
- (void)reportLastInfo;
- (void)reset;
- (void)reportDetectResult;
- (void)reportClick;
- (unsigned int)formatDetectResult;
- (unsigned int)formatExposeResult;
- (void)onOpenImg:(unsigned int)arg1;
- (void)onExposeResult:(unsigned long long)arg1;
- (void)onDetectResult:(unsigned long long)arg1;
- (void)onClickWithEntryType:(unsigned int)arg1;
- (void)onClickResult:(BOOL)arg1;
- (void)onDetectWordRate:(double)arg1;
- (id)sessionId;
- (id)imgId;
- (void)setImgId:(id)arg1;
- (unsigned int)validWordRate;
- (void)setValidWordRate:(unsigned int)arg1;
- (BOOL)translateFromFastEntry;
- (void)setTranslateFromFastEntry:(BOOL)arg1;
- (BOOL)translateFromMenu;
- (void)setTranslateFromMenu:(BOOL)arg1;
- (id)fileId;
- (void)setFileId:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (unsigned int)uiSessionID;
- (void)setUiSessionID:(unsigned int)arg1;
- (unsigned int)accessType;
- (void)setAccessType:(unsigned int)arg1;
- (unsigned long long)openTimeMs;
- (void)setOpenTimeMs:(unsigned long long)arg1;
- (unsigned long long)exposeTimeMs;
- (void)setExposeTimeMs:(unsigned long long)arg1;
- (unsigned long long)clickTimeMs;
- (void)setClickTimeMs:(unsigned long long)arg1;
- (unsigned long long)clickRstTimeMs;
- (void)setClickRstTimeMs:(unsigned long long)arg1;
- (unsigned long long)exposeResult;
- (void)setExposeResult:(unsigned long long)arg1;
- (unsigned long long)detectBitSet;
- (void)setDetectBitSet:(unsigned long long)arg1;
- (unsigned int)clickResult;
- (void)setClickResult:(unsigned int)arg1;
- (unsigned int)entryType;
- (void)setEntryType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

