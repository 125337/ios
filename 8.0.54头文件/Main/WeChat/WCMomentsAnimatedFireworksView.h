@interface WCMomentsAnimatedFireworksView : UIView
{
    BOOL _isPlaying; // +0x8
    unsigned long long _displayCountPerTrigger; // +0x10
    double _triggerTimeInterval; // +0x18
    NSArray * _fireworkSizeList; // +0x20
    NSArray * _fireworkDisplayableRectList; // +0x28
    NSMutableArray * _playingFireworkViews; // +0x30
    MMTimer * _triggerTimer; // +0x38
}
+ (CGPoint)generateRandomPointInRect:(CGRect)arg1;
+ (id)defaultFireworkSizeList;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (id)createAnimatedFireworkView;
- (void)layoutAnimatedFireworkView:(id)arg1;
- (void)startPlaying;
- (void)stopPlaying;
- (void)_startTriggerTimer;
- (void)_stopTriggerTimer;
- (void)_handleTriggerTimer:(id)arg1;
- (void)fireworkViewDidFinishAnimating:(id)arg1;
- (void)_stopAllPlayingFireworkViews;
- (CGSize)generateRandomSize;
- (CGPoint)generateRandomPoint;
- (unsigned long long)displayCountPerTrigger;
- (void)setDisplayCountPerTrigger:(unsigned long long)arg1;
- (double)triggerTimeInterval;
- (void)setTriggerTimeInterval:(double)arg1;
- (id)fireworkSizeList;
- (void)setFireworkSizeList:(id)arg1;
- (id)fireworkDisplayableRectList;
- (void)setFireworkDisplayableRectList:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)playingFireworkViews;
- (void)setPlayingFireworkViews:(id)arg1;
- (id)triggerTimer;
- (void)setTriggerTimer:(id)arg1;
- (void).cxx_destruct;
@end

