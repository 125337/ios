@interface MMLiveStarterWeakNetTipView : MMPageSheetBaseView
{
    MMUILabel * _firstTipNumLabel; // +0x8
    MMUILabel * _firstTipTitleLabel; // +0x10
    MMUILabel * _firstTipDetailLabel; // +0x18
    MMUILabel * _clarityTipNumLabel; // +0x20
    MMUILabel * _clarityTipTitleLabel; // +0x28
    MMUILabel * _clarityTipDetailLabel; // +0x30
    MMUILabel * _secTipNumLabel; // +0x38
    MMUILabel * _secTipTitleLabel; // +0x40
    MMUILabel * _secTipDetailLabel; // +0x48
    MMUILabel * _bottomTipTitleLabel; // +0x50
    MMUILabel * _bottomTipDetailLabel; // +0x58
    BOOL _isShowing; // +0x60
    BOOL _showClarityItem; // +0x61
    unsigned long long _type; // +0x68
    id /* block */ _claritySettingBlock; // +0x70
    UIView * _contentView; // +0x78
    MMUILabel * _titleLabel; // +0x80
    MMUILabel * _otherTitleLabel; // +0x88
    MMUIButton * _actionButton; // +0x90
    UIScrollView * _contentScrollView; // +0x98
}
+ (BOOL)isCurrentNetNormal;
+ (BOOL)needTestSpeed;
+ (BOOL)isOverShowInterval;
- (id)initWithType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)layoutLiveWeakNet;
- (void)layoutLiveSilent;
- (void)layoutStaterLiveWeakNet;
- (void)layoutLiveBreakSound;
- (void)layoutLiveWeakNetUI;
- (void)layoutCommentUI;
- (double)caculateBottomDeatilHeightWithText:(id)arg1 font:(id)arg2;
- (double)contentViewHeight;
- (double)calcContentHeight;
- (id)otherTitleLabel;
- (id)titleLabel;
- (id)firstTipNumLabel;
- (id)firstTipTitleLabel;
- (id)firstTipDetailLabel;
- (id)clarityTipNumLabel;
- (id)clarityTipTitleLabel;
- (id)clarityTipDetailLabel;
- (id)secTipNumLabel;
- (id)secTipTitleLabel;
- (id)secTipDetailLabel;
- (id)bottomTipTitleLabel;
- (id)bottomTipDetailLabel;
- (id)actionButton;
- (void)actionButtonClick:(id)arg1;
- (void)onClaritySettingLabelClicked;
- (void)updateClarityTipDetailLabelText;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (unsigned long long)type;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (BOOL)showClarityItem;
- (void)setShowClarityItem:(BOOL)arg1;
- (id /* block */)claritySettingBlock;
- (void)setClaritySettingBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setOtherTitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (void).cxx_destruct;
@end
