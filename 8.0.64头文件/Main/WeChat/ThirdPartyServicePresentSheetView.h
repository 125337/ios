@interface ThirdPartyServicePresentSheetView : MMAutoLayoutSheetView <ScrollItemSelectionDelegate, IWCLanDeviceMsgForwardMgrExt, ILinkEventExt>
{
    BOOL _isShowingAllWeappItems; // +0x8
    unsigned int _contentType; // +0xc
    id <ThirdPartyServicePresentSheetViewDelegate> _delegate; // +0x10
    NSString * _chatUsername; // +0x18
    unsigned long long _chatType; // +0x20
    NSArray * _dataWraps; // +0x28
    unsigned long long _sheetScene; // +0x30
    NSString * _batchFileExt; // +0x38
    NSArray * _lanDevices; // +0x40
    NSMutableArray * _privateDevices; // +0x48
    NSMutableArray * _publicDevices; // +0x50
    DevicePresentCollectionView * _oldDeviceView; // +0x58
    WAWxMaterialAppInfo * _materialAppInfo; // +0x60
    MMScrollStackCell * _weappTitleStackCell; // +0x68
    MMUIButton * _weappMoreButton; // +0x70
}
- (id)initWithContentType:(unsigned int)arg1 dataWraps:(id)arg2 batchFileExt:(id)arg3 sheetScene:(unsigned long long)arg4;
- (id)getFirstMessageWrap;
- (id)getFirstOpenInfo;
- (void)dealloc;
- (void)initData;
- (void)initConfigs;
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
- (BOOL)withOpenWithOtherAppSection;
- (void)addOpenWithOtherAppSection;
- (void)initDeviceSection;
- (void)addTipsLabel;
- (void)addSpacer:(double)arg1;
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
- (id)weappTitleStackCell;
- (void)setWeappTitleStackCell:(id)arg1;
- (id)weappMoreButton;
- (void)setWeappMoreButton:(id)arg1;
- (void).cxx_destruct;
@end
