@interface StorageUsageSummaryView : UIView
{
    MMUILabel * m_titleLabel; // +0x8
    MMUILabel * m_sizeLabel; // +0x10
    MMUILabel * m_subTitleLabel; // +0x18
    UILabel * m_percentLabel; // +0x20
    UIView * m_percentView; // +0x28
    BOOL isAvailabled; // +0x30
    StorageUsageSummaryModel * m_model; // +0x38
    float _progressScanner; // +0x40
    float _progressChatlog; // +0x44
    float _progressCache; // +0x48
    float _progressTimer; // +0x4c
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubview;
- (void)initTitleLabel;
- (void)initSizeLabel;
- (void)initSubTitleLabel;
- (void)initPercentView;
- (void)finishScanAndSetProgress;
- (void)setProgress:(float)arg1 isAvailabled:(BOOL)arg2 progressType:(unsigned long long)arg3;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (void)layout:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateLayoutWithAnimation;
- (id)model;
- (float)progressScanner;
- (void)setProgressScanner:(float)arg1;
- (float)progressChatlog;
- (void)setProgressChatlog:(float)arg1;
- (float)progressCache;
- (void)setProgressCache:(float)arg1;
- (float)progressTimer;
- (void)setProgressTimer:(float)arg1;
- (void).cxx_destruct;
@end
