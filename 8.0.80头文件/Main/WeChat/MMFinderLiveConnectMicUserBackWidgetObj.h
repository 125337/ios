@interface MMFinderLiveConnectMicUserBackWidgetObj : WCPIPAttachWidgetObj
- (void)refresh;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (id)getSnapshotUserBackImage;
- (id)getSnapshotUserBackImageForceUpdate:(BOOL)arg1;
- (void)getSnapshotUserBackImageAsync:(id /* block */)arg1;
- (id)transferUserBackImgToCIImage:(id)arg1;
@end
