@interface WCMomentsAnimatedFireworksManager : MMUserService <MMServiceProtocol>
{
    NSArray * _animationFireworkImages; // +0x8
}
- (void)onServiceMemoryWarning;
- (id)createAnimatedFireworkView;
- (void)loadAnimatedFireworkImagesIfNeeded;
- (void)clearAnimatedFireworkImages;
- (id)animationFireworkImages;
- (void)setAnimationFireworkImages:(id)arg1;
- (void).cxx_destruct;
@end

