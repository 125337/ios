@interface ShareTimeLineViewController : UIViewController <MSETimelineShareContentViewDelegate>
{
    MSEShareMainViewLogicController * _mainLogicController; // +0x8
    long long _contentType; // +0x10
    MSETimelineShareContentView * _timelineContainerView; // +0x18
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)updateTimelineContentView;
- (void)onTimelineContentViewBack;
- (void)onTimelineContentViewConfirmToShare:(id)arg1;
- (id)getContainerViewController;
- (id)mainLogicController;
- (void)setMainLogicController:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (id)timelineContainerView;
- (void)setTimelineContainerView:(id)arg1;
- (void).cxx_destruct;
@end

