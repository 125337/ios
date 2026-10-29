@interface MMAxAuthWrap : NSObject
{
    MMMultiHostAuthInfo * _authInfo; // +0x8
    MMAxAuthLogic * _axAuthLogic; // +0x10
}
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)axAuthLogic;
- (void)setAxAuthLogic:(id)arg1;
- (void).cxx_destruct;
@end

