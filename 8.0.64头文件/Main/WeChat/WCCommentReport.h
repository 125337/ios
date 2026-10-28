@interface WCCommentReport : NSObject
{
    unsigned char _mScene; // +0x8
    unsigned long long _endTimeMs; // +0x10
    unsigned long long _showTimeMs; // +0x18
    NSString * _cacheCommentText; // +0x20
}
+ (void)reportDeleteComment:(id)arg1 with:(id)arg2 confirm:(BOOL)arg3;
- (id)initWith:(unsigned char)arg1;
- (void)reportSendEmotion:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (void)reportCancelSendEmotion:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (void)reportSendText:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (void)reportCancelSendText:(id)arg1 with:(id)arg2 andRefUsr:(id)arg3;
- (unsigned char)mScene;
- (void)setMScene:(unsigned char)arg1;
- (unsigned long long)endTimeMs;
- (void)setEndTimeMs:(unsigned long long)arg1;
- (unsigned long long)showTimeMs;
- (void)setShowTimeMs:(unsigned long long)arg1;
- (id)cacheCommentText;
- (void)setCacheCommentText:(id)arg1;
- (void).cxx_destruct;
@end
