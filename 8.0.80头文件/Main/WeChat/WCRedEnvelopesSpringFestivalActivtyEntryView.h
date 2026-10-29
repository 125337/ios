@interface WCRedEnvelopesSpringFestivalActivtyEntryView : UIView
{
    WCPayWebImageView * _iconImageView; // +0x8
    UILabel * _titleLabel; // +0x10
    WCRedEnvelopesSpringFestivalActivtyEntryInfo * _viewModel; // +0x18
    UIImageView * _arrowImageView; // +0x20
    id <WCRedEnvelopesSpringFestivalActivtyEntryViewDelegate> _m_delegate; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapActivityEntry:(id)arg1;
- (BOOL)shouldSyncBackgroundColorToExtendedContentView;
- (void)onLongActivityEntry:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
