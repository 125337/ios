@interface DesignerPortfolioCell : MMStoreEmotionBaseAllCell
{
    BOOL _showDownloadView; // +0x8
    id <DesignerPortfolioCellDelegate> _delegate; // +0x10
    EmoticonStoreReportInfo * _reportInfo; // +0x18
    UIColor * _overridingColor; // +0x20
    MMBadgeView * _reddotImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)downloadLogicConfig;
- (BOOL)layoutStaticBtnWidth;
- (void)updateStoreItem:(id)arg1;
- (void)loadPidReddot;
- (void)setShowDownloadView:(BOOL)arg1;
- (BOOL)isRewardEnabled;
- (void)clearReddotIfNeeded;
- (void)handleReward;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (double)downloadViewMaxWidth;
- (BOOL)showDownloadView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)overridingColor;
- (void)setOverridingColor:(id)arg1;
- (id)reddotImageView;
- (void)setReddotImageView:(id)arg1;
- (void).cxx_destruct;
@end

