@interface MMStoreEmoticonDesignerPackBaseViewController : MMUIViewController <DesignerPortfolioCollectionViewProviderDelegate>
{
    unsigned int _designerUin; // +0x70
    DesignerPortfolioCollectionViewProvider * _provider; // +0x78
    UILabel * _emptyHintLabel; // +0x80
    EmoticonStoreFootView * _footerView; // +0x88
}
- (id)initWithDesignerUin:(unsigned int)arg1;
- (void)viewDidLoad;
- (void)initNavBar;
- (void)OnCancelModalView:(id)arg1;
- (void)onTapBackBarItem;
- (void)initView;
- (void)viewDidTransitionToNewSize;
- (BOOL)shouldRemoveExpiredPack;
- (void)onGetEmoticonPacksForDisplay:(BOOL)arg1;
- (void)onFetchMoreEmoticonData;
- (void)onFetchDoneEmoticonData;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)emptyHintLabel;
- (void)setEmptyHintLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
