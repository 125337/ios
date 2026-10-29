@interface ThirdPartyServicePresentSheetView : MMPageSheetBaseView <ScrollItemSelectionDelegate, IWCLanDeviceMsgForwardMgrExt, ILinkEventExt>
{
    BOOL _isShowingAllWeappItems; // +0x8
    unsigned int _contentType; // +0xc
    id <ThirdPartyServicePresentSheetViewDelegate> _delegate; // +0x10
    NSString * _chatUsername; // +0x18
    unsigned long long _chatType; // +0x20
    UIScrollView * _scrollView; // +0x28
    UIView * _contentView; // +0x30
    double _contentOffsetY; // +0x38
    NSArray * _dataWraps; // +0x40
    unsigned long long _sheetScene; // +0x48
    NSString * _batchFileExt; // +0x50
    NSArray * _lanDevices; // +0x58
    NSMutableArray * _privateDevices; // +0x60
    NSMutableArray * _publicDevices; // +0x68
    DevicePresentCollectionView * _oldDeviceView; // +0x70
    WAWxMaterialAppInfo * _materialAppInfo; // +0x78
    UIView * _weappTitleView; // +0x80
    MMUIButton * _weappMoreButton; // +0x88
}
- (id)initWithContentType:(unsigned int)arg1 dataWraps:(id)arg2 batchFileExt:(id)arg3 sheetScene:(unsigned long long)arg4;
- (id)getFirstMessageWrap;
- (id)getFirstOpenInfo;
- (void)dealloc;
- (void)initData;
- (void)initConfigs;
- (void)initScrollContainer;
- (void)layoutContent;
- (id)currentTitle;
- (BOOL)showAll;
- (BOOL)onlyShowWeapp;
- (BOOL)onlyShowDevice;
- (void)initView;
- (void)initWeappToolSection;
- (void)updateStackViewWithWxaCards:(id)arg1 needWeappMoreButton:(BOOL)arg2;
- (id)makeWeappToolItemView:(id)arg1;
- (void)addWeappMoreButton;
- (void)onWeappMoreButton;
- (void)updateScrollContent;
- (BOOL)withOpenWithOtherAppSection;
- (void)addOpenWithOtherAppSection;
- (void)initDeviceSection;
- (void)addTipsLabel;
- (void)addSpacer:(double)arg1;
- (void)appendViewToContentView:(id)arg1 withNextSpace:(double)arg2;
- (id)appendSubtextToScrollStackWhenShowAll:(id)arg1 withNextSpace:(double)arg2;
- (void)appendCellToScrollStack:(id)arg1 withNextSpace:(double)arg2;
- (id)titleLabel:(id)arg1;
- (id)tipsButton;
- (void)onTipsTapped;
- (id)filteredDevicesOf:(long long)arg1;
- (id)privateDevices;
- (id)publicDevices;
- (id)unfoldedItemsFrom:(id)arg1 maxCount:(long long)arg2;
- (id)foldedItemsFrom:(id)arg1 maxCount:(long long)arg2;
- (id)getToSaveUrl:(id)arg1 filename:(id)arg2;
- (void)onOpenWithOtherAppCell;
- (void)onSelectWeappItem:(id)arg1;
- (void)realOpenAppForMaterials:(id)arg1 wxaCard:(id)arg2 chatUsername:(id)arg3 chatType:(unsigned long long)arg4 sheetScene:(unsigned long long)arg5;
- (void)onSelectItem:(id)arg1;
- (void)onItemAppended:(id)arg1;
- (void)reportDeviceItemExposed:(id)arg1;
- (void)reportDeviceItemClicked:(id)arg1;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (unsigned long long)chatType;
- (void)setChatType:(unsigned long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (double)contentOffsetY;
- (void)setContentOffsetY:(double)arg1;
- (id)dataWraps;
- (void)setDataWraps:(id)arg1;
- (unsigned int)contentType;
- (void)setContentType:(unsigned int)arg1;
- (unsigned long long)sheetScene;
- (void)setSheetScene:(unsigned long long)arg1;
- (id)batchFileExt;
- (void)setBatchFileExt:(id)arg1;
- (id)lanDevices;
- (void)setLanDevices:(id)arg1;
- (void)setPrivateDevices:(id)arg1;
- (void)setPublicDevices:(id)arg1;
- (id)oldDeviceView;
- (void)setOldDeviceView:(id)arg1;
- (id)materialAppInfo;
- (void)setMaterialAppInfo:(id)arg1;
- (BOOL)isShowingAllWeappItems;
- (void)setIsShowingAllWeappItems:(BOOL)arg1;
- (id)weappTitleView;
- (void)setWeappTitleView:(id)arg1;
- (id)weappMoreButton;
- (void)setWeappMoreButton:(id)arg1;
- (void).cxx_destruct;
@end
