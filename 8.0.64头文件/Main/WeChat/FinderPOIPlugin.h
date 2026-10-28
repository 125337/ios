@interface FinderPOIPlugin : NSObject <POINativeAPI, WCFinderPoiPageViewModelDelegate, MMFlutterPlugin>
{
    BOOL _didScrollToTop; // +0x8
    int _commentScene; // +0xc
    id <FinderPOIPluginDelegate> _delegate; // +0x10
    POIFlutterAPI * _flutterAPI; // +0x18
    POIFlutterDataReport * _dataReportAPI; // +0x20
    WCFinderPOIRelatedStreamViewModel * _relatedStreamViewModel; // +0x28
    NSMutableDictionary * _pageViewModels; // +0x30
    NSMutableDictionary * _exposeTimeDict; // +0x38
}
- (id)initWithCommentScene:(int)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)reloadHeadWithInfo:(id)arg1;
- (void)reloadPOIStream:(id)arg1;
- (void)makePhoneCallPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)onChangeScrollStateIsTop:(BOOL)arg1 error:(id *)arg2;
- (void)onNavigateButtonTapWithError:(id *)arg1;
- (void)onTakeCarButtonTapWithError:(id *)arg1;
- (void)onChangeFavoriteStateSelected:(BOOL)arg1 error:(id *)arg2;
- (void)onForwardButtonTapWithError:(id *)arg1;
- (void)onAddressEntranceTapWithError:(id *)arg1;
- (void)onETATapWeAppId:(id)arg1 weAppUrl:(id)arg2 error:(id *)arg3;
- (void)onFlutterUIParamUpdateKeyIndex:(long long)arg1 value:(double)arg2 error:(id *)arg3;
- (void)showTipsDialogMessage:(id)arg1 btnWording:(id)arg2 error:(id *)arg3;
- (void)showTextToastMessage:(id)arg1 error:(id *)arg2;
- (void)onRequestPOIStreamTabIndex:(long long)arg1 filterIndex:(long long)arg2 isReload:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)onFeedTapItemIndex:(long long)arg1 sectionIndex:(long long)arg2 tabIndex:(long long)arg3 filterIndex:(long long)arg4 visibleCellsInfoJSON:(id)arg5 error:(id *)arg6;
- (void)onFeedExposeItemIndex:(long long)arg1 sectionIndex:(long long)arg2 tabIndex:(long long)arg3 filterIndex:(long long)arg4 isEnd:(BOOL)arg5 x:(double)arg6 y:(double)arg7 width:(double)arg8 height:(double)arg9 error:(id *)arg10;
- (id)streamReportUDFKV:(id)arg1;
- (void)callNativeShowMoreMenuPanelWithError:(id *)arg1;
- (id)getUserLocationInfoFromNativeMapWithError:(id *)arg1;
- (void)showSuccessToastMsg:(id)arg1 error:(id *)arg2;
- (int)getEnterScene;
- (id)getLiveFeedChannelExtraWithContentVM:(id)arg1;
- (id)pageViewModelAtTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2;
- (id)generateUpdateDataWithTabIndex:(unsigned long long)arg1 filterIndex:(unsigned long long)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 isReload:(BOOL)arg5;
- (void)finderPoiReloadAllData:(id)arg1;
- (void)finderPoiAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 viewModel:(id)arg3;
- (void)finderPoiNoMoreData:(id)arg1;
- (void)finderPoiInvalidWithErrorCode:(int)arg1 viewModel:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)didScrollToTop;
- (void)setDidScrollToTop:(BOOL)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (id)dataReportAPI;
- (void)setDataReportAPI:(id)arg1;
- (id)relatedStreamViewModel;
- (void)setRelatedStreamViewModel:(id)arg1;
- (id)pageViewModels;
- (void)setPageViewModels:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)exposeTimeDict;
- (void)setExposeTimeDict:(id)arg1;
- (void).cxx_destruct;
@end
