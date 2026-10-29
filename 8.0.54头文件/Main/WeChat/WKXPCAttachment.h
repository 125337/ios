@interface WKXPCAttachment : NSObject
{
    int _count; // +0x8
    NSHashTable * _dicts; // +0x10
    NSDictionary * _envs; // +0x18
    WKWebView * _webView; // +0x20
    long long _flag; // +0x28
}
- (id)init;
- (void)clear;
- (BOOL)isValid;
- (void)addObject:(id)arg1;
- (BOOL)isStarted;
- (BOOL)isEnded;
- (id)dicts;
- (void)setDicts:(id)arg1;
- (id)envs;
- (void)setEnvs:(id)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (int)count;
- (void)setCount:(int)arg1;
- (void).cxx_destruct;
@end

