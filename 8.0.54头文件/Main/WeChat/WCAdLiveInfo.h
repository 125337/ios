@interface WCAdLiveInfo : NSObject <NSCoding>
{
    BOOL _showLikeAnimation; // +0x8
    int _liveType; // +0xc
    int _liveStatus; // +0x10
    NSString * _liveParams; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _finderLiveId; // +0x28
    NSArray * _pendingDescList; // +0x30
    NSArray * _livingDescList; // +0x38
    NSArray * _endDescList; // +0x40
    double _likeAnimationInterval; // +0x48
    NSArray * _liveCheerIconList; // +0x50
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isLiveQueryInfoValid;
- (int)liveType;
- (void)setLiveType:(int)arg1;
- (id)liveParams;
- (void)setLiveParams:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderLiveId;
- (void)setFinderLiveId:(id)arg1;
- (id)pendingDescList;
- (void)setPendingDescList:(id)arg1;
- (id)livingDescList;
- (void)setLivingDescList:(id)arg1;
- (id)endDescList;
- (void)setEndDescList:(id)arg1;
- (BOOL)showLikeAnimation;
- (void)setShowLikeAnimation:(BOOL)arg1;
- (double)likeAnimationInterval;
- (void)setLikeAnimationInterval:(double)arg1;
- (id)liveCheerIconList;
- (void)setLiveCheerIconList:(id)arg1;
- (int)liveStatus;
- (void)setLiveStatus:(int)arg1;
- (void).cxx_destruct;
@end

