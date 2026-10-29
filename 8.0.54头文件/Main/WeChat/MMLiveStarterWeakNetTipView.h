@interface MMLiveStarterWeakNetTipView : MMPageSheetBaseView
{
    MMUILabel * _firstTipNumLabel; // +0x8
    MMUILabel * _firstTipTitleLabel; // +0x10
    MMUILabel * _firstTipDetailLabel; // +0x18
    MMUILabel * _secTipNumLabel; // +0x20
    MMUILabel * _secTipTitleLabel; // +0x28
    MMUILabel * _secTipDetailLabel; // +0x30
    MMUILabel * _bottomTipTitleLabel; // +0x38
    MMUILabel * _bottomTipDetailLabel; // +0x40
    BOOL _isShowing; // +0x48
    unsigned long long _type; // +0x50
    UIView * _contentView; // +0x58
    MMUILabel * _titleLabel; // +0x60
    MMUILabel * _otherTitleLabel; // +0x68
    MMUIButton * _actionButton; // +0x70
    UIScrollView * _contentScrollView; // +0x78
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
- (id)secTipNumLabel;
- (id)secTipTitleLabel;
- (id)secTipDetailLabel;
- (id)bottomTipTitleLabel;
- (id)bottomTipDetailLabel;
- (id)actionButton;
- (void)actionButtonClick:(id)arg1;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)arg1;
- (unsigned long long)type;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setOtherTitleLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (void).cxx_destruct;
@end

