@interface WCAdHalfScreenFinderLiveNoticeView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WCAdHalfScreenFinderLiveNoticeViewDelegate> _delegate; // +0x8
    WCAdFinderLiveNoticeInfo * _finderLiveNoticeInfo; // +0x10
    MMUIImageView * _iconView; // +0x18
    MMUILabel * _reservedLabel; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
}
- (id)initWithFinderLiveNoticeInfo:(id)arg1;
- (void)initSubview;
- (void)initCommonUI;
- (void)initDetailUI;
- (void)layoutDetailSubviews;
- (void)pageSheetDidRotation;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderLiveNoticeInfo;
- (void)setFinderLiveNoticeInfo:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)reservedLabel;
- (void)setReservedLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
