@interface MMMsgContentTipsItem : NSObject
{
    BOOL _showRightArrow; // +0x8
    BOOL _allowLineBreak; // +0x9
    BOOL _showCloseBtn; // +0xa
    BOOL _disableClickState; // +0xb
    BOOL _showBorder; // +0xc
    BOOL _enableRoomTipsBarDynamicOrder; // +0xd
    BOOL _joinedRoomTipsBar; // +0xe
    unsigned int _voiceMsgClientId; // +0x10
    long long _bizType; // +0x18
    long long _style; // +0x20
    NSString * _title; // +0x28
    UIColor * _titleColor; // +0x30
    UIImage * _iconImage; // +0x38
    NSArray * _animationImages; // +0x40
    double _animationDuration; // +0x48
    id _userData; // +0x50
    NSString * _topLineTitle; // +0x58
    UIColor * _backgroundColor; // +0x60
    NSString * _rightBtnText; // +0x68
    NSString * _rightBtnConfirmText; // +0x70
    NSString * _rightDescText; // +0x78
    double _duration; // +0x80
    UIColor * _rightArrowColor; // +0x88
    UIColor * _borderColor; // +0x90
    double _borderWidth; // +0x98
    UIView * _expandView; // +0xa0
    NSString * _customMenuItemTitle; // +0xa8
    CGSize _iconSize; // +0xb0
}
- (id)init;
- (id)description;
- (long long)compareTipsBarDisplayPriorityWithItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isConsideredEqualForReport:(id)arg1;
- (long long)bizType;
- (void)setBizType:(long long)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (id)animationImages;
- (void)setAnimationImages:(id)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (BOOL)showRightArrow;
- (void)setShowRightArrow:(BOOL)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)topLineTitle;
- (void)setTopLineTitle:(id)arg1;
- (BOOL)allowLineBreak;
- (void)setAllowLineBreak:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)showCloseBtn;
- (void)setShowCloseBtn:(BOOL)arg1;
- (id)rightBtnText;
- (void)setRightBtnText:(id)arg1;
- (id)rightBtnConfirmText;
- (void)setRightBtnConfirmText:(id)arg1;
- (id)rightDescText;
- (void)setRightDescText:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)disableClickState;
- (void)setDisableClickState:(BOOL)arg1;
- (id)rightArrowColor;
- (void)setRightArrowColor:(id)arg1;
- (BOOL)showBorder;
- (void)setShowBorder:(BOOL)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)expandView;
- (void)setExpandView:(id)arg1;
- (unsigned int)voiceMsgClientId;
- (void)setVoiceMsgClientId:(unsigned int)arg1;
- (BOOL)enableRoomTipsBarDynamicOrder;
- (void)setEnableRoomTipsBarDynamicOrder:(BOOL)arg1;
- (BOOL)joinedRoomTipsBar;
- (void)setJoinedRoomTipsBar:(BOOL)arg1;
- (id)customMenuItemTitle;
- (void)setCustomMenuItemTitle:(id)arg1;
- (void).cxx_destruct;
@end
