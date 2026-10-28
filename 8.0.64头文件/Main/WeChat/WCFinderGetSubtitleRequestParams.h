@interface WCFinderGetSubtitleRequestParams : NSObject
{
    int _commentScene; // +0x8
    NSString * _tid; // +0x10
    unsigned long long _subtitleId; // +0x18
    unsigned long long _startTime; // +0x20
    NSData * _lastBuffer; // +0x28
    NSMutableArray * _languageReq; // +0x30
}
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)subtitleId;
- (void)setSubtitleId:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)languageReq;
- (void)setLanguageReq:(id)arg1;
- (void).cxx_destruct;
@end
