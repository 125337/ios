@interface KidsWatchRegisterFormCardView : UIView <TakeOrSelectHeadImageLogicDelegate, KidsWatchResponsiveView>
{
    id <KidsWatchRegisterFormCardViewDelegate> _delegate; // +0x8
    double _cornerRadius; // +0x10
    NSString * _ISOCode; // +0x18
    UIImage * _headImage; // +0x20
    TakeOrSelectHeadImageLogic * _headImageLogic; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
    MMUILabel * _titleLabel; // +0x38
    UIImageView * _headImageView; // +0x40
    KidsWatchTextFieldItem * _nickNameTextFieldItem; // +0x48
    UIView * _nickNameSeparateView; // +0x50
    KidsWatchTextFieldItem * _phoneNumberTextFieldItem; // +0x58
    UIView * _phoneNumberSeparateView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initGestures;
- (id)defaultHeadImagePlaceHolder;
- (id)nickName;
- (id)rawPhoneNumber;
- (void)makePhoneNumberFirstResponder;
- (id)headImageLogic;
- (void)setCornerRadius:(double)arg1;
- (void)onTapHeadImageView;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)callInfoChangeDelegate;
- (void)makeFirstResponder;
- (void)onGetHeadImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)cornerRadius;
- (id)ISOCode;
- (void)setISOCode:(id)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (void)setHeadImageLogic:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameTextFieldItem;
- (void)setNickNameTextFieldItem:(id)arg1;
- (id)nickNameSeparateView;
- (void)setNickNameSeparateView:(id)arg1;
- (id)phoneNumberTextFieldItem;
- (void)setPhoneNumberTextFieldItem:(id)arg1;
- (id)phoneNumberSeparateView;
- (void)setPhoneNumberSeparateView:(id)arg1;
- (void).cxx_destruct;
@end
