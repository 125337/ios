@interface RadarSearchViewController : MMUIViewController <RadarSearchViewDelegate, IRadarSearchExt>
{
    RadarSearchView * m_radarView; // +0x68
}
- (id)init;
- (BOOL)useBlackStatusbar;
- (void)dealloc;
- (void)onRadarSearchViewClose:(BOOL)arg1;
- (void)initRadarSearchView;
- (id)initForRadarSearch;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (id)getCurViewController;
- (void).cxx_destruct;
@end

