@interface WCFinderPostAttachCellConfig : NSObject
{
    BOOL _showRightArrow; // +0x8
    BOOL _showRedDot; // +0x9
    BOOL _showSwitch; // +0xa
    BOOL _switchOn; // +0xb
    BOOL _switchEnabled; // +0xc
    BOOL _enableHighlightAnimation; // +0xd
    BOOL _shareToCommentSelected; // +0xe
    unsigned long long _cellUIType; // +0x10
    unsigned long long _businessType; // +0x18
    UIImage * _leftIcon; // +0x20
    NSURL * _leftIconUrl; // +0x28
    NSURL * _leftIconLightUrl; // +0x30
    NSURL * _leftIconDarkUrl; // +0x38
    NSString * _title; // +0x40
    UIColor * _themeColor; // +0x48
    NSString * _rightTips; // +0x50
    UIImage * _rightImage; // +0x58
    id /* block */ _switchChangeAction; // +0x60
    NSString * _recommendTips; // +0x68
    id /* block */ _recommendTipsAction; // +0x70
    NSString * _descText; // +0x78
    NSArray * _bubbleTexts; // +0x80
    UIView * _customSecondRowView; // +0x88
    double _customSecondRowViewHeight; // +0x90
    UIView * _rightCustomView; // +0x98
    id /* block */ _tapAction; // +0xa0
    id /* block */ _bubbleTapAction; // +0xa8
    NSString * _shareAuthorNickName; // +0xb0
    id /* block */ _shareCheckboxChangeAction; // +0xb8
    id /* block */ _shareAsyncGetNickNameAction; // +0xc0
    id /* block */ _shareReportParamsBlock; // +0xc8
}
+ (id)configWithIcon:(id)arg1 title:(id)arg2 themeColor:(id)arg3;
+ (id)configWithIcon:(id)arg1 title:(id)arg2 themeColor:(id)arg3 switchOn:(BOOL)arg4;
- (id)init;
- (unsigned long long)cellUIType;
- (void)setCellUIType:(unsigned long long)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)leftIcon;
- (void)setLeftIcon:(id)arg1;
- (id)leftIconUrl;
- (void)setLeftIconUrl:(id)arg1;
- (id)leftIconLightUrl;
- (void)setLeftIconLightUrl:(id)arg1;
- (id)leftIconDarkUrl;
- (void)setLeftIconDarkUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)themeColor;
- (void)setThemeColor:(id)arg1;
- (BOOL)showRightArrow;
- (void)setShowRightArrow:(BOOL)arg1;
- (id)rightTips;
- (void)setRightTips:(id)arg1;
- (id)rightImage;
- (void)setRightImage:(id)arg1;
- (BOOL)showRedDot;
- (void)setShowRedDot:(BOOL)arg1;
- (BOOL)showSwitch;
- (void)setShowSwitch:(BOOL)arg1;
- (BOOL)switchOn;
- (void)setSwitchOn:(BOOL)arg1;
- (BOOL)switchEnabled;
- (void)setSwitchEnabled:(BOOL)arg1;
- (id /* block */)switchChangeAction;
- (void)setSwitchChangeAction:(id /* block */)arg1;
- (id)recommendTips;
- (void)setRecommendTips:(id)arg1;
- (id /* block */)recommendTipsAction;
- (void)setRecommendTipsAction:(id /* block */)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (id)bubbleTexts;
- (void)setBubbleTexts:(id)arg1;
- (id)customSecondRowView;
- (void)setCustomSecondRowView:(id)arg1;
- (double)customSecondRowViewHeight;
- (void)setCustomSecondRowViewHeight:(double)arg1;
- (id)rightCustomView;
- (void)setRightCustomView:(id)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id /* block */)bubbleTapAction;
- (void)setBubbleTapAction:(id /* block */)arg1;
- (BOOL)enableHighlightAnimation;
- (void)setEnableHighlightAnimation:(BOOL)arg1;
- (id)shareAuthorNickName;
- (void)setShareAuthorNickName:(id)arg1;
- (BOOL)shareToCommentSelected;
- (void)setShareToCommentSelected:(BOOL)arg1;
- (id /* block */)shareCheckboxChangeAction;
- (void)setShareCheckboxChangeAction:(id /* block */)arg1;
- (id /* block */)shareAsyncGetNickNameAction;
- (void)setShareAsyncGetNickNameAction:(id /* block */)arg1;
- (id /* block */)shareReportParamsBlock;
- (void)setShareReportParamsBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
