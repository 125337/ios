@interface MMEmotionChartsCell : MMUIView <MMEmoticonStoreDownloadLogicDelegate>
{
    long long _type; // +0x8
    long long _scene; // +0x10
    BOOL m_freeToDownload; // +0x18
    BOOL m_showBlackLine; // +0x19
    NSString * m_storeSession; // +0x20
    EmoticonStoreItem * m_storeItem; // +0x28
    MMWebImageView * m_iconImageView; // +0x30
    UILabel * m_nameLabel; // +0x38
    UILabel * m_inroduceLabel; // +0x40
    double m_cellHeight; // +0x48
    id <MMEmotionChartsCellDelegate> _delegate; // +0x50
    MMEmoticonStoreDownloadLogic * _downloadLogic; // +0x58
}
- (void)setScene:(long long)arg1 andType:(long long)arg2;
- (void)initStoreSession:(id)arg1 StoreItem:(id)arg2 ShouldShowBlackLine:(BOOL)arg3 CellHeight:(double)arg4;
- (void)layoutSubviews;
- (void)loadIconImageView;
- (void)loadNameLabel;
- (void)loadIntroduceLabel;
- (void)loadDownloadView;
- (void)loadSubView;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (id)downloadLogicReportInfo;
- (double)downloadViewMaxWidth;
- (id)m_storeSession;
- (void)setM_storeSession:(id)arg1;
- (id)m_storeItem;
- (void)setM_storeItem:(id)arg1;
- (id)m_iconImageView;
- (void)setM_iconImageView:(id)arg1;
- (id)m_nameLabel;
- (void)setM_nameLabel:(id)arg1;
- (id)m_inroduceLabel;
- (void)setM_inroduceLabel:(id)arg1;
- (BOOL)m_freeToDownload;
- (void)setM_freeToDownload:(BOOL)arg1;
- (double)m_cellHeight;
- (void)setM_cellHeight:(double)arg1;
- (BOOL)m_showBlackLine;
- (void)setM_showBlackLine:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end

