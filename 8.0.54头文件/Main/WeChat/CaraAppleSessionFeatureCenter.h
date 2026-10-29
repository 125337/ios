@interface CaraAppleSessionFeatureCenter : NSObject <CaraNativeSessionFeatureCenterBase, ICaraSessionExt>
{
    CaraCppSessionFeatureCenter * _underlying; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)onConsumeSession:(id)arg1 stayTimeInterval:(float)arg2;
- (void)onSessionSend:(id)arg1;
- (id)underlying;
- (void).cxx_destruct;
@end

