@interface MMCreateLiteAppCallbackInfo : NSObject
{
    BOOL _isLoading; // +0x8
    OpenLiteAppInfo * _openInfo; // +0x10
    id /* block */ _callback; // +0x18
    unsigned long long _time; // +0x20
}
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (unsigned long long)time;
- (void)setTime:(unsigned long long)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

