@interface EcsFinderFeedProductFlutterView : UIView <IEcsFinderFeedProductView>
{
    NSString * _trackerSceneId; // +0x8
    id <EcsFinderFeedSingleProductViewDelegate> _delegate; // +0x10
    EcsFinderFeedSingleProductViewModel * _dataVM; // +0x18
    EcsFinderFeedProductFlutterViewController * _flutterVC; // +0x20
    UIViewController * _cachedParentVC; // +0x28
    NSDictionary * _pendingFinderCardInfo; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)trackerSceneId;
- (void)ensureFlutterVCWithSource:(id)arg1;
- (void)createFlutterVCIfNeeded;
- (void)bindFlutterVCIfNeeded;
- (void)setDataVM:(id)arg1;
- (void)setFinderCardInfo:(id)arg1;
- (void)removeFromSuperview;
- (void)clearDataVMCallbacks;
- (void)clearDataVM;
- (void)releaseFlutterVC;
- (void)cleanup;
- (void)dealloc;
- (void)setTrackerSceneId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataVM;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)cachedParentVC;
- (void)setCachedParentVC:(id)arg1;
- (id)pendingFinderCardInfo;
- (void)setPendingFinderCardInfo:(id)arg1;
- (void).cxx_destruct;
@end
