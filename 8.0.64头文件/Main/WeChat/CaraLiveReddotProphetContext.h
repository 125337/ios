@interface CaraLiveReddotProphetContext : NSObject <CaraNativeLiveReddotProphetContextBase>
{
    BOOL _isReddotScoreValid; // +0x8
    BOOL _isHomePageLoaded; // +0x9
    float _reddotScore; // +0xc
    int _preloadControlFlag; // +0x10
    int _enterAction; // +0x14
    float _predictProbThreshold; // +0x18
    NSString * _anchor; // +0x20
}
- (id)initWithAnchor:(id)arg1 reddotScore:(float)arg2 isReddotScoreValid:(BOOL)arg3 preloadControlFlag:(int)arg4 enterAction:(int)arg5 isHomePageLoaded:(BOOL)arg6 predictProbThreshold:(float)arg7;
- (id)zidl;
- (id)anchor;
- (float)reddotScore;
- (BOOL)isReddotScoreValid;
- (int)preloadControlFlag;
- (int)enterAction;
- (BOOL)isHomePageLoaded;
- (float)predictProbThreshold;
- (void).cxx_destruct;
@end
