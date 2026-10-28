@interface WKWebSearchView : YYWKWebView <YYWebViewInterface>
{
    BOOL _forceDarkModeMark; // +0x8
    BOOL _performActionEnabled; // +0x9
    unsigned int _enterReusablePoolTime; // +0xc
    unsigned long long _bizType; // +0x10
    NSString * _keyword; // +0x18
    NSMutableArray * _keywordStack; // +0x20
    unsigned long long _context; // +0x28
    NSString * _subSessionId; // +0x30
    unsigned long long _evaluateJSTimes; // +0x38
    NSString * _lastEvaluateJSString; // +0x40
    NSString * _loadURLString; // +0x48
    unsigned long long _initTime; // +0x50
}
- (void)setPerformActionEnabled:(BOOL)arg1;
- (void)setKeyboardFocusEnabled:(BOOL)arg1;
- (id)base64Decode:(id)arg1;
- (void)setAllKeyboardFocus;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)configurationWillCreate:(id)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)webviewWillEnterPool;
- (void)webviewWillLeavePool;
- (unsigned long long)survivalTime;
- (unsigned long long)stayInReuablePoolTime;
- (id)uniqueID;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)keyword;
- (void)setKeyword:(id)arg1;
- (id)keywordStack;
- (void)setKeywordStack:(id)arg1;
- (unsigned long long)context;
- (void)setContext:(unsigned long long)arg1;
- (id)subSessionId;
- (void)setSubSessionId:(id)arg1;
- (BOOL)forceDarkModeMark;
- (void)setForceDarkModeMark:(BOOL)arg1;
- (unsigned long long)evaluateJSTimes;
- (void)setEvaluateJSTimes:(unsigned long long)arg1;
- (id)lastEvaluateJSString;
- (void)setLastEvaluateJSString:(id)arg1;
- (id)loadURLString;
- (void)setLoadURLString:(id)arg1;
- (unsigned long long)initTime;
- (void)setInitTime:(unsigned long long)arg1;
- (unsigned int)enterReusablePoolTime;
- (void)setEnterReusablePoolTime:(unsigned int)arg1;
- (BOOL)performActionEnabled;
- (void).cxx_destruct;
@end
