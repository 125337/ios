@interface WXGImportAnalyseInfo : NSObject
{
    double _costTime; // +0x8
    NSMutableDictionary * _allChatInfo; // +0x10
    unsigned long long _textSize; // +0x18
    unsigned long long _mediaSize; // +0x20
    unsigned long long _totalMsgCount; // +0x28
    unsigned long long _totalMediaCount; // +0x30
    unsigned long long _totalMsgListCount; // +0x38
    unsigned long long _totalSessionCount; // +0x40
    NSMutableDictionary * _totalMediaType; // +0x48
    double _startTime; // +0x50
    NSString * _briefString; // +0x58
}
- (id)init;
- (unsigned long long)totalMsgCount;
- (id)brief;
- (double)costTime;
- (void)setCostTime:(double)arg1;
- (id)allChatInfo;
- (void)setAllChatInfo:(id)arg1;
- (unsigned long long)textSize;
- (void)setTextSize:(unsigned long long)arg1;
- (unsigned long long)mediaSize;
- (void)setMediaSize:(unsigned long long)arg1;
- (void)setTotalMsgCount:(unsigned long long)arg1;
- (unsigned long long)totalMediaCount;
- (void)setTotalMediaCount:(unsigned long long)arg1;
- (unsigned long long)totalMsgListCount;
- (void)setTotalMsgListCount:(unsigned long long)arg1;
- (unsigned long long)totalSessionCount;
- (void)setTotalSessionCount:(unsigned long long)arg1;
- (id)totalMediaType;
- (void)setTotalMediaType:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)briefString;
- (void)setBriefString:(id)arg1;
- (void).cxx_destruct;
@end
