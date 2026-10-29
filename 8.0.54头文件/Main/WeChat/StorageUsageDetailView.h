@interface StorageUsageDetailView : UIView
{
    UIView * m_backgroundView; // +0x8
    MMUILabel * m_titleLabel; // +0x10
    MMUILabel * m_sizeLabel; // +0x18
    MMUILabel * m_subTitleLabel; // +0x20
    UIButton * m_actionButton; // +0x28
    MMUIActivityIndicatorView * m_loadingView; // +0x30
    StorageUsageDetailModel * m_model; // +0x38
    BOOL _isLoading; // +0x40
    id <StorageUsageDetailViewDelegate> _delegate; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubview;
- (void)initTitleLabel;
- (void)initSizeLabel;
- (void)initSubTitleLabel;
- (void)initActionButton;
- (void)initLoadingView;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (void)layout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)showLoading;
- (void)hideLoading;
- (void)updateSizeAfterCleaning:(unsigned long long)arg1;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onDeepCleanButtonClicked:(id)arg1;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

