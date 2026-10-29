@interface StorageUsageDetailFooterView : UIView
{
    UIView * m_backgroundView; // +0x8
    MMUILabel * m_titleLabel; // +0x10
    MMUILabel * m_subTitleLabel; // +0x18
    UILabel * m_actionButton; // +0x20
    MMUIActivityIndicatorView * m_loadingView; // +0x28
    StorageUsageDetailModel * m_model; // +0x30
    BOOL _isLoading; // +0x38
    id <StorageUsageDetailFooterViewDelegate> _delegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubview;
- (void)initTitleLabel;
- (void)initSubTitleLabel;
- (void)initActionButton;
- (void)setModel:(id)arg1;
- (void)updateTitleAndSizeText;
- (void)layoutSubviews;
- (void)layout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)showLoading;
- (void)hideLoading;
- (void)updateSizeAfterCleaning:(unsigned long long)arg1;
- (void)onFooterCleanOtherAccountButtonClicked:(id)arg1;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
