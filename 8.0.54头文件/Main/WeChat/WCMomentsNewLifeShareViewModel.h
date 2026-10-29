@interface WCMomentsNewLifeShareViewModel : WCMomentsPostShareBaseViewModel
{
    BOOL _hasRecordedDisplay; // +0x8
    BOOL _hasRecordedClick; // +0x9
    NewLifePostInfo * _currentNewLifePostInfo; // +0x10
    long long _newlifePostShareScene; // +0x18
    NSString * _newlifeShareFeedId; // +0x20
}
- (void)dr_bindShareButton:(id)arg1;
- (void)dr_reportView:(id)arg1 action:(long long)arg2 inScene:(long long)arg3;
- (void)setUpReportInfo:(id)arg1 withAction:(long long)arg2;
- (void)setUpJumpFlowReportInfo:(id)arg1 withAction:(long long)arg2;
- (id)svgIconName;
- (id)svgIconColor;
- (id)tips;
- (BOOL)shouldShowShareButton;
- (BOOL)hasActionRecordForShowingShareButton;
- (BOOL)reallyShareFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_goToNewLifeFlutterFlow:(id /* block */)arg1;
- (BOOL)_shareImagesToFinderFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)generateNewLifePhotoInfos;
- (void)processImage:(id)arg1 endAction:(id /* block */)arg2;
- (BOOL)hasPosted;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (id)currentNewLifePostInfo;
- (void)setCurrentNewLifePostInfo:(id)arg1;
- (long long)newlifePostShareScene;
- (void)setNewlifePostShareScene:(long long)arg1;
- (id)newlifeShareFeedId;
- (void)setNewlifeShareFeedId:(id)arg1;
- (void).cxx_destruct;
@end

