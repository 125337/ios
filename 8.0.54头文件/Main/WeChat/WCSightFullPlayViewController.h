@interface WCSightFullPlayViewController : MMUIViewController <WCSightFullPlayViewDelegate>
{
    WCMediaItem * m_mediaData; // +0x68
    WCDataItem * m_dataItem; // +0x70
    UIButton * m_bgButton; // +0x78
    WCSightFullPlayView * m_sightFullPlayView; // +0x80
    id <WCSightFullPlayViewControllerDelegate> m_delegate; // +0x88
}
- (id)initWithMediaData:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)stopPlayWithAnimated:(BOOL)arg1;
- (void)layoutAllSubviews:(BOOL)arg1;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void)onClickFullPlayView;
- (void)onLongPressFullPlayView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onClickFullSightView:(id)arg1;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickDetailButton;
- (void)onFullSightPlayEnd:(BOOL)arg1;
- (id)getDetailButtonTitle;
- (BOOL)shouldShowDetailButton;
- (void)onFullSightDownloadFinished:(id)arg1 downloadType:(long long)arg2;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryRotateOrientation;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_mediaData;
- (void)setM_mediaData:(id)arg1;
- (id)m_dataItem;
- (void)setM_dataItem:(id)arg1;
- (void).cxx_destruct;
@end

