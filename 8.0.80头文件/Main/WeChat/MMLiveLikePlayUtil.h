@interface MMLiveLikePlayUtil : NSObject
{
    BOOL _showHeadImage; // +0x8
    BOOL _likeAnimating; // +0x9
    BOOL _likeHeadImageAnimating; // +0xa
    id /* block */ _invokeLikeBlock; // +0x10
    id /* block */ _invokeHeadImageBlock; // +0x18
    id /* block */ _showLikeBlock; // +0x20
    id /* block */ _hideLikeBlock; // +0x28
    double _likeAnimateLimitFrequence; // +0x30
    MMLiveTaskId * _taskId; // +0x38
    unsigned long long _lastLikeCount; // +0x40
    unsigned long long _allAnimatedLikeCount; // +0x48
    unsigned long long _animatedLikeCount; // +0x50
    double _animatedLikeFrequence; // +0x58
    unsigned long long _allAnimatedHeadImageCount; // +0x60
    unsigned long long _animatedHeadImageCount; // +0x68
    double _animatedHeadImageFrequence; // +0x70
    NSMutableArray * _headImageContactList; // +0x78
    unsigned long long _scene; // +0x80
    MMLiveDisplayLink * _timer; // +0x88
}
- (id)initWithTaskId:(id)arg1;
- (id)initWithScene:(unsigned long long)arg1;
- (void)dealloc;
- (id)timer;
- (void)updateLikeCount:(unsigned long long)arg1;
- (void)updateLikeCountWithoutAnimation:(unsigned long long)arg1;
- (void)startLikeAnimation;
- (void)startLikeHeadImageAnimation;
- (void)updateLikeHeadImageAnimation:(id)arg1;
- (void)endPlayLike;
- (id /* block */)invokeLikeBlock;
- (void)setInvokeLikeBlock:(id /* block */)arg1;
- (id /* block */)invokeHeadImageBlock;
- (void)setInvokeHeadImageBlock:(id /* block */)arg1;
- (id /* block */)showLikeBlock;
- (void)setShowLikeBlock:(id /* block */)arg1;
- (id /* block */)hideLikeBlock;
- (void)setHideLikeBlock:(id /* block */)arg1;
- (double)likeAnimateLimitFrequence;
- (void)setLikeAnimateLimitFrequence:(double)arg1;
- (BOOL)showHeadImage;
- (void)setShowHeadImage:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)lastLikeCount;
- (void)setLastLikeCount:(unsigned long long)arg1;
- (unsigned long long)allAnimatedLikeCount;
- (void)setAllAnimatedLikeCount:(unsigned long long)arg1;
- (unsigned long long)animatedLikeCount;
- (void)setAnimatedLikeCount:(unsigned long long)arg1;
- (double)animatedLikeFrequence;
- (void)setAnimatedLikeFrequence:(double)arg1;
- (unsigned long long)allAnimatedHeadImageCount;
- (void)setAllAnimatedHeadImageCount:(unsigned long long)arg1;
- (unsigned long long)animatedHeadImageCount;
- (void)setAnimatedHeadImageCount:(unsigned long long)arg1;
- (double)animatedHeadImageFrequence;
- (void)setAnimatedHeadImageFrequence:(double)arg1;
- (BOOL)likeAnimating;
- (void)setLikeAnimating:(BOOL)arg1;
- (BOOL)likeHeadImageAnimating;
- (void)setLikeHeadImageAnimating:(BOOL)arg1;
- (id)headImageContactList;
- (void)setHeadImageContactList:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
