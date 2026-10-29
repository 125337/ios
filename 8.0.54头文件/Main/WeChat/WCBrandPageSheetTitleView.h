@interface WCBrandPageSheetTitleView : UIView
{
    id <WCBrandPageSheetTitleViewDelegate> _delegate; // +0x8
    CContact * _brandContact; // +0x10
    BizProfileV2Resp * _cacheItem; // +0x18
    MMBrandHeadImageView * _brandAvatarView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _nickNameLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UIButton * _headerButton; // +0x40
}
- (id)init;
- (void)setBrandContact:(id)arg1;
- (void)setCacheItem:(id)arg1;
- (void)updateUICompts;
- (void)initSubviews;
- (void)showTitleWithText:(id)arg1;
- (void)showProfileEntry;
- (void)swithUIStatusWithEntryShowState:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onViewClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)brandContact;
- (id)cacheItem;
- (id)brandAvatarView;
- (void)setBrandAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)headerButton;
- (void)setHeaderButton:(id)arg1;
- (void).cxx_destruct;
@end

