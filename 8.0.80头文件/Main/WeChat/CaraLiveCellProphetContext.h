@interface CaraLiveCellProphetContext : NSObject <CaraNativeLiveCellProphetContextBase>
{
    BOOL _isInHomePage; // +0x8
    BOOL _isHomePageLoaded; // +0x9
    float _predictProbThreshold; // +0xc
}
- (id)initWithIsInHomePage:(BOOL)arg1 isHomePageLoaded:(BOOL)arg2 predictProbThreshold:(float)arg3;
- (id)zidl;
- (BOOL)isInHomePage;
- (BOOL)isHomePageLoaded;
- (float)predictProbThreshold;
@end
