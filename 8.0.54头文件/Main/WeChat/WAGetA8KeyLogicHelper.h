@interface WAGetA8KeyLogicHelper : NSObject <GetA8KeyLogicDelegate, IWAWAGetA8KeyLogicHelper>
{
    GetA8KeyLogic * _logic; // +0x8
    id <WAWAGetA8KeyLogicHelperDelegate> _delegate; // +0x10
}
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (id)allA8KeyLogic;
- (void)onGetA8KeyResult:(id)arg1;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyFail;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (unsigned long long)getSourceType;
- (void)weappGetA8KeyWithCodeStr:(id)arg1 weappCodeVerision:(long long)arg2 geta8keyScene:(long long)arg3;
- (void)weappGetA8KeyWithCodeStr:(id)arg1 geta8keyScene:(long long)arg2;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

