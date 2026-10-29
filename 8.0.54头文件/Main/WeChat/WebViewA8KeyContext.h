@interface WebViewA8KeyContext : NSObject
{
    BOOL _notGoToUrlOnGetA8Key; // +0x8
    BOOL _exceptionBackOnGetA8Key; // +0x9
    int _reason; // +0xc
    id /* block */ _onGetBlock; // +0x10
}
- (BOOL)notGoToUrlOnGetA8Key;
- (void)setNotGoToUrlOnGetA8Key:(BOOL)arg1;
- (BOOL)exceptionBackOnGetA8Key;
- (void)setExceptionBackOnGetA8Key:(BOOL)arg1;
- (id /* block */)onGetBlock;
- (void)setOnGetBlock:(id /* block */)arg1;
- (int)reason;
- (void)setReason:(int)arg1;
- (void).cxx_destruct;
@end

