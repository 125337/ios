@interface WebViewSanboxTaskGcdTimerUserInfo : NSObject
{
    BOOL _bRepeat; // +0x8
    unsigned int _timerId; // +0xc
}
- (unsigned int)timerId;
- (void)setTimerId:(unsigned int)arg1;
- (BOOL)bRepeat;
- (void)setBRepeat:(BOOL)arg1;
@end
