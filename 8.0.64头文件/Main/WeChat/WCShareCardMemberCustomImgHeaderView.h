@interface WCShareCardMemberCustomImgHeaderView : WCShareCardBaseHeaderView
{
    BOOL _hasDetailView; // +0x8
    BOOL _acceptAble; // +0x9
    id <WCShareCardMemberCustomImgHeaderDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    WCShareCardMemberHeaderGiftInfo * _giftInfo; // +0x20
    WCShareCardMemberHeaderCardImageView * _cardImageView; // +0x28
    UIView * _cardImgContentView; // +0x30
}
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 isShareCard:(BOOL)arg3 acceptAble:(BOOL)arg4 cardStatus:(int)arg5 isNeedHideAcceptBtn:(BOOL)arg6 delegate:(id)arg7 isHasDetailView:(BOOL)arg8 giftInfo:(id)arg9 cardImgView:(id)arg10;
- (void)setupView;
- (id)getMemberCardHeaderContentView;
- (void)getInvalidStatusTitle;
- (id)createGiftInfoView;
- (id)createBannerView;
- (id)createCardImgView;
- (BOOL)hasCardNum;
- (id)createSecondaryFieldView;
- (void)setFrame:(CGRect)arg1;
- (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7 needShadow:(BOOL)arg8;
- (id)insertSpaceChar:(id)arg1 hasTransline:(BOOL)arg2;
- (id)getBrandColor;
- (BOOL)hasReceive;
- (void)fieldClicked:(id)arg1;
- (void)onInfoBtnClick:(id)arg1;
- (void)onClickApplyBtn:(id)arg1;
- (void)onBannerTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasDetailView;
- (void)setHasDetailView:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)giftInfo;
- (void)setGiftInfo:(id)arg1;
- (id)cardImageView;
- (void)setCardImageView:(id)arg1;
- (BOOL)acceptAble;
- (void)setAcceptAble:(BOOL)arg1;
- (id)cardImgContentView;
- (void)setCardImgContentView:(id)arg1;
- (void).cxx_destruct;
@end
