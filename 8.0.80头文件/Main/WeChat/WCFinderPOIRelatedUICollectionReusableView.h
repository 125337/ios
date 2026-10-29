@interface WCFinderPOIRelatedUICollectionReusableView : WCFinderCollectionReusableView <ILinkEventExt, WCFinderHeadImageViewDelegate>
{
    BOOL _onlyShowPoiName; // +0x8
    int _addressSubType; // +0xc
    id <WCFinderPOIRelatedUICollectionReusableViewDelegate> _delegate; // +0x10
    SnsPoiDetail * _poiDetail; // +0x18
    RichTextView * _addressMainLabel; // +0x20
    RichTextView * _addressSubLabel; // +0x28
    RichTextView * _addressintroductionLabel; // +0x30
    RichTextView * _addressPriceTipsLabel; // +0x38
    RichTextView * _addressBusinessHourLabel; // +0x40
    RichTextView * _addressPhoneRichText; // +0x48
    MMUILabel * _noticeWordingLabel; // +0x50
    UIView * _navigateView; // +0x58
    WCFinderContact * _contact; // +0x60
    UIView * _bindContactContainerView; // +0x68
    MMUILabel * _bindContactTipsLabel; // +0x70
    UIView * _bindContactView; // +0x78
    UIView * _topLineView; // +0x80
    WCFinderHeadImageView * _avatarImageView; // +0x88
    MMUILabel * _nickNameLabel; // +0x90
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x98
    UIImageView * _contactArrowIconView; // +0xa0
    UIView * _bottomLineView; // +0xa8
    NSString * _noticeWording; // +0xb0
}
+ (double)headerViewHeightWith:(id)arg1 bindContact:(id)arg2 noticeWording:(id)arg3 isDataEmpty:(BOOL)arg4 width:(double)arg5 onlyShowPoiName:(BOOL)arg6 addressSubType:(int)arg7;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubView;
- (id)navigateView;
- (id)bindContactContainerView;
- (id)bindContactView;
- (id)topLineView;
- (id)bottomLineView;
- (id)avatarImageView;
- (id)bindContactTipsLabel;
- (id)nickNameLabel;
- (id)authInfoIconView;
- (id)contactArrowIconView;
- (void)updateBindContactContainerViewMargin;
- (void)updateBindContactViewMargin;
- (void)renderBindContactView;
- (void)updateAuthInfoIconView;
- (void)updateWith:(id)arg1 bindContact:(id)arg2 noticeWording:(id)arg3 isDataEmpty:(BOOL)arg4 onlyShowPoiName:(BOOL)arg5 totalFeedsCount:(long long)arg6 friendLikeCount:(long long)arg7 addressSubType:(int)arg8;
- (id)countInfoString:(BOOL)arg1 feedCount:(long long)arg2 friendLikeCount:(long long)arg3;
- (void)adjustUIMargin:(BOOL)arg1;
- (void)onClickBindContactView:(id)arg1;
- (void)onClickNavigateView:(id)arg1;
- (void)onNavigateAction;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)poiDetail;
- (void)setPoiDetail:(id)arg1;
- (id)addressMainLabel;
- (void)setAddressMainLabel:(id)arg1;
- (id)addressSubLabel;
- (void)setAddressSubLabel:(id)arg1;
- (id)addressintroductionLabel;
- (void)setAddressintroductionLabel:(id)arg1;
- (id)addressPriceTipsLabel;
- (void)setAddressPriceTipsLabel:(id)arg1;
- (id)addressBusinessHourLabel;
- (void)setAddressBusinessHourLabel:(id)arg1;
- (id)addressPhoneRichText;
- (void)setAddressPhoneRichText:(id)arg1;
- (id)noticeWordingLabel;
- (void)setNoticeWordingLabel:(id)arg1;
- (void)setNavigateView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void)setBindContactContainerView:(id)arg1;
- (void)setBindContactTipsLabel:(id)arg1;
- (void)setBindContactView:(id)arg1;
- (void)setTopLineView:(id)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setAuthInfoIconView:(id)arg1;
- (void)setContactArrowIconView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (id)noticeWording;
- (void)setNoticeWording:(id)arg1;
- (BOOL)onlyShowPoiName;
- (void)setOnlyShowPoiName:(BOOL)arg1;
- (int)addressSubType;
- (void)setAddressSubType:(int)arg1;
- (void).cxx_destruct;
@end
