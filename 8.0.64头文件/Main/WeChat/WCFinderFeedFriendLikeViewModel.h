@interface WCFinderFeedFriendLikeViewModel : NSObject
{
    BOOL _isComboLike; // +0x8
    BOOL _startComboLike; // +0x9
    BOOL _showThankButton; // +0xa
    BOOL _createdByLikeAnimation; // +0xb
    BOOL _shouldReadyForCarousel; // +0xc
    unsigned long long _maxAvatorCount; // +0x10
    unsigned long long _friendLikeCount; // +0x18
    NSString * _appendTips; // +0x20
    NSString * _nicknameTips; // +0x28
    NSString * _username; // +0x30
    NSString * _suffixTips; // +0x38
    NSString * _iconSVGName; // +0x40
    NSString * _dynamicIconName; // +0x48
    unsigned long long _style; // +0x50
    NSArray * _headerArray; // +0x58
    unsigned long long _comboLikeCount; // +0x60
    NSString * _viewAccessibilityLabel; // +0x68
    NSString * _tid; // +0x70
}
- (void)setMaxAvatorCount:(unsigned long long)arg1;
- (BOOL)showAvatorContainerView;
- (void)setNicknameTips:(id)arg1;
- (id)viewAccessibilityLabel;
- (id)normalIconImage;
- (unsigned long long)maxAvatorCount;
- (unsigned long long)friendLikeCount;
- (void)setFriendLikeCount:(unsigned long long)arg1;
- (id)appendTips;
- (void)setAppendTips:(id)arg1;
- (id)nicknameTips;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)suffixTips;
- (void)setSuffixTips:(id)arg1;
- (id)iconSVGName;
- (void)setIconSVGName:(id)arg1;
- (id)dynamicIconName;
- (void)setDynamicIconName:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)headerArray;
- (void)setHeaderArray:(id)arg1;
- (BOOL)isComboLike;
- (void)setIsComboLike:(BOOL)arg1;
- (BOOL)startComboLike;
- (void)setStartComboLike:(BOOL)arg1;
- (unsigned long long)comboLikeCount;
- (void)setComboLikeCount:(unsigned long long)arg1;
- (void)setViewAccessibilityLabel:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)showThankButton;
- (void)setShowThankButton:(BOOL)arg1;
- (BOOL)createdByLikeAnimation;
- (void)setCreatedByLikeAnimation:(BOOL)arg1;
- (BOOL)shouldReadyForCarousel;
- (void)setShouldReadyForCarousel:(BOOL)arg1;
- (void).cxx_destruct;
@end
