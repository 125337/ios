@interface BrandDebugCanvasViewControllerMB : BrandDebugBaseViewControllerMB <MMPageSheetBottomViewDelegate>
{
    BrandDebugCanvasTmplMsg * _tmpMsg; // +0xb0
    MemoryMappedKV * _mappedKV; // +0xb8
    UITextField * _testADInfoTextField; // +0xc0
    UITextField * _testMbAdJsTextField; // +0xc8
    MMPageSheetAdapter * _pageSheetAdapter; // +0xd0
}
- (void)viewDidLoad;
- (void)dealloc;
- (void)initDebugItems;
- (id)mappedKV;
- (void)onOpenAdCanvasDebug;
- (void)onDeleteAdExposeConfig;
- (void)onInsertTemplatelAdMsg;
- (void)__insertTemplateTmplAdMsg;
- (void)onInsertRecommendMsg;
- (id)readFileFromContent:(id)arg1;
- (void)onInsertMbRecommendMsg;
- (void)onInsertMbHorizontalScrollMsg;
- (void)onInsertMbRecPicMsg;
- (void)onInsertEcsMbRecMsg;
- (void)insertMockCanvasModelToRecAtIndex:(long long)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)onInsertMbAdPicAd;
- (void)onInsertMbAdVideoAd;
- (void)onDeleteAllRecommendMsg;
- (void)onDeleteAllAdMsg;
- (void)onOpenAdCardQuotaSetting;
- (void)onDeleteCanvasCacheData;
- (void)onReleaseJsEngine;
- (void)onSetAdTestMode;
- (void)onSetAdTestExtInfo;
- (void)onSetAdTestInfo;
- (void)onCallSendAdTestExtAction;
- (void)onCallInjectMbAdJs;
- (void)onClickPageSheetConfirmButton;
- (void)onCallClearAdExpose;
- (id)tmpMsg;
- (void)setTmpMsg:(id)arg1;
- (void)setMappedKV:(id)arg1;
- (id)testADInfoTextField;
- (void)setTestADInfoTextField:(id)arg1;
- (id)testMbAdJsTextField;
- (void)setTestMbAdJsTextField:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void).cxx_destruct;
@end
