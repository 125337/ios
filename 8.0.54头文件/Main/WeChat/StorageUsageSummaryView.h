@interface StorageUsageSummaryView : UIView
{
    MMUILabel * m_titleLabel; // +0x8
    MMUILabel * m_sizeLabel; // +0x10
    MMUILabel * m_subTitleLabel; // +0x18
    UILabel * m_percentLabel; // +0x20
    UIView * m_percentView; // +0x28
    BOOL isAvailabled; // +0x30
    StorageUsageSummaryModel * m_model; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubview;
- (void)initTitleLabel;
- (void)initSizeLabel;
- (void)initSubTitleLabel;
- (void)initPercentView;
- (void)finishScanAndSetProgress;
- (void)setProgress:(float)arg1 isAvailabled:(BOOL)arg2;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (void)layout:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateLayoutWithAnimation;
- (id)model;
- (void).cxx_destruct;
@end

