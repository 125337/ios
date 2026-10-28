@interface WCFinderProfileFlutterMusicTabPage : WCFinderStreamProfileViewPage <WCFinderTingProfileEventStoreExt>
{
    MMFlutterViewController * _flutterVC; // +0x8
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (id)loadView;
- (void)viewDidAppear;
- (void)viewWillApear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)pageSizeDidChanged;
- (void)updateflutterViewFrameSize;
- (double)originY30percent;
- (id)embedApiPlugin;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onReceiveMusicEventRefreshList;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (void).cxx_destruct;
@end
