@interface FlutterSnsAlbumCallPlugin : NSObject <MMFlutterPlugin>
{
    int _appearCount; // +0x8
    id <SNSPluginDelegate> _delegate; // +0x10
    FlutterEngine * _engine; // +0x18
    FlutterAlbumApi * _albumCaller; // +0x20
    unsigned long long _galleryHeroTargetQueryGeneration; // +0x28
}
+ (void)updateSnsInteractInAffDBWithSnsId:(unsigned long long)arg1 likeCount:(int)arg2 commentCount:(int)arg3 likeFlag:(BOOL)arg4;
+ (void)updateSnsInteractInAffDBWithSnsId:(unsigned long long)arg1 likeCount:(int)arg2 commentCount:(int)arg3 likeFlag:(BOOL)arg4 bypassConfigSwitch:(BOOL)arg5;
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)notifyAppearanceTransitionToPresentingVC:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)albumCaller;
- (void)setAlbumCaller:(id)arg1;
- (int)appearCount;
- (void)setAppearCount:(int)arg1;
- (unsigned long long)galleryHeroTargetQueryGeneration;
- (void)setGalleryHeroTargetQueryGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
