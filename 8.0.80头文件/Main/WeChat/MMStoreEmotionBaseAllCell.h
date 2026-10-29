@interface MMStoreEmotionBaseAllCell : MMStoreEmotionStoreListCell <MMEmoticonStoreDownloadLogicDelegate>
{
    BOOL _layoutStaticBtnWidth; // +0x8
    int _type; // +0xc
    int _scene; // +0x10
    EmoticonStoreItem * _storeItem; // +0x18
    MMEmoticonStoreDownloadLogic * _downloadLogic; // +0x20
    unsigned long long _lineStyle; // +0x28
    double _horizontalInset; // +0x30
    MMWebImageView * _linkIconView; // +0x38
    id /* block */ _downloadViewSDKReportSetter; // +0x40
    UIView * _lastCellLineView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)lastCellLineView;
- (id)downloadLogicConfig;
- (void)initDownloadView;
- (id)linkIconView;
- (void)updateStoreItem:(id)arg1;
- (void)updateLinkInfoLayout;
- (void)updateWithLinkInfo:(id)arg1;
- (void)setScene:(int)arg1 andType:(int)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)appendBottomLineForlast;
- (void)setDownloadViewSDKReportSetter:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)layoutBaseViewContainer;
- (void)layoutRightViewContainer;
- (void)updateSpilitLineStyle:(void *)arg1;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)onDownloadFinished;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (id)downloadLogicReportInfo;
- (id)getNameTextWithArrow:(id)arg1;
- (id)getNameTextWithArrow:(id)arg1 foregroundColor:(id)arg2;
- (int)type;
- (void)setType:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (unsigned long long)lineStyle;
- (void)setLineStyle:(unsigned long long)arg1;
- (double)horizontalInset;
- (void)setHorizontalInset:(double)arg1;
- (void)setLinkIconView:(id)arg1;
- (BOOL)layoutStaticBtnWidth;
- (void)setLayoutStaticBtnWidth:(BOOL)arg1;
- (id /* block */)downloadViewSDKReportSetter;
- (void)setLastCellLineView:(id)arg1;
- (void).cxx_destruct;
@end
