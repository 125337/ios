@interface NewLifePlugin : NSObject <MMImagePickerManagerDelegate, FlutterStreamHandler, FLTFlowListDataAction, MMFlutterPlugin>
{
    UIViewController * _associateViewController; // +0x8
    FlutterEventChannel * _editPhotosEventChannel; // +0x10
    id /* block */ _editPhotosEventSink; // +0x18
    FLTNewLifeCommonApi * _commonApi; // +0x20
    NSMutableSet * _handlerSet; // +0x28
    NSObject<FlutterTextureRegistry> * _flutterTextureRegistery; // +0x30
    WCFinderDataItem * _detailLiveDataItem; // +0x38
    BrandDirectlyOperateContactLogic * _brandOperateContactLogic; // +0x40
}
+ (void)handleNewLifeFinderLikeFeed:(id)arg1 completion:(id /* block */)arg2;
+ (id)requestFromData:(id)arg1 pbClass:(Class)arg2;
+ (id)plugin;
- (void)handleGetFeedRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleActionWithCommand:(id)arg1 requestData:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)dealloc;
- (id)availableNavigationController;
- (void)fltNewLifeActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)brandOperateContactLogic;
- (void)sendCallback:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)associateViewController;
- (void)setAssociateViewController:(id)arg1;
- (id)editPhotosEventChannel;
- (void)setEditPhotosEventChannel:(id)arg1;
- (id /* block */)editPhotosEventSink;
- (void)setEditPhotosEventSink:(id /* block */)arg1;
- (id)commonApi;
- (void)setCommonApi:(id)arg1;
- (id)handlerSet;
- (void)setHandlerSet:(id)arg1;
- (id)flutterTextureRegistery;
- (void)setFlutterTextureRegistery:(id)arg1;
- (id)detailLiveDataItem;
- (void)setDetailLiveDataItem:(id)arg1;
- (void)setBrandOperateContactLogic:(id)arg1;
- (void).cxx_destruct;
@end
