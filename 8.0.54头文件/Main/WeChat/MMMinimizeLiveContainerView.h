@interface MMMinimizeLiveContainerView : UIView
{
    MMLiveTaskId * _liveTaskId; // +0x8
    id /* block */ _onTapClose; // +0x10
    id /* block */ _onTapContainer; // +0x18
    UIImageView * _topShadowView; // +0x20
    UIImageView * _bottomShadowView; // +0x28
    MMMinimizeLiveIndicatorView * _liveEndIndicatorView; // +0x30
    MMMinimizeLiveIndicatorView * _networkFailIndicatorView; // +0x38
    MMMinimizeLiveIndicatorView * _remoteErrorIndicatorView; // +0x40
    MMMinimizeLiveIndicatorView * _gamePauseIndicatorView; // +0x48
    MMMinimizeLiveIndicatorView * _verifyPauseIndicatorView; // +0x50
    MMMinimizeLiveIndicatorView * _payToContinueIndicatorView; // +0x58
    MMMinimizeLiveIndicatorView * _audioOnlyModeIndicatorView; // +0x60
    MMLiveAudioOnlyIndicatorView * _audioOnlyIndicatorDetailView; // +0x68
    MMMinimizeLiveIndicatorView * _ktvIndicatorView; // +0x70
    MMUIButton * _closeButton; // +0x78
    MMUIButton * _bgButton; // +0x80
    UIView * _containerView; // +0x88
}
- (id)initWithTaskId:(id)arg1;
- (void)configBasicAttributes;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutContainerView;
- (void)layoutCloseButton;
- (void)layoutBgButton;
- (void)layoutBottomShadowView;
- (void)layoutTopShadowView;
- (void)layoutEndIndicatorView;
- (void)layoutNetworkFailIndicatorView;
- (void)layoutRemoteErrorIndicatorView;
- (void)layoutGamePauseIndicatorView;
- (void)layoutVerifyPauseIndicatorView;
- (void)layoutPayToContinueIndicatorView;
- (void)layoutAudioOnlyModeIndicatorView;
- (void)layoutKTVIndicatorView;
- (void)createBottomShadowView;
- (void)updateBottomShadowMask;
- (void)createTopShadowView;
- (void)updateTopShadowMask;
- (void)createLiveEndIndicatorView;
- (void)createNetworkFailIndicatorView;
- (void)createRemoteErrorIndicatorView;
- (void)createGamePauseIndicatorView;
- (void)createVerifyPauseIndicatorView;
- (void)createPayToContinueIndicatorView;
- (void)createAudioOnlyModeIndicatorView;
- (void)createKTVIndicatorView;
- (id)closeButton;
- (void)onCloseButtonClicked;
- (void)onSelfTapped;
- (id)indicatorBackgroundViewWithFrame:(CGRect)arg1;
- (void)updateMaskLayerForView:(id)arg1;
- (id)failIndicatorViewWithFrame:(CGRect)arg1 hint:(id)arg2;
- (void)displayCloseButton;
- (void)hideCloseButton;
- (void)displayBottomShadow;
- (void)displayTopShadow;
- (void)displayLiveEndIndicator;
- (void)displayNetworkFailIndicator;
- (void)displayRemoteErrorIndicator;
- (void)displayGamePauseIndicator;
- (void)displayVerifyPauseIndicator;
- (void)displayPayToContinueIndicator;
- (void)displayAudioOnlyModeIndicator:(BOOL)arg1;
- (void)displayKTVIndicator;
- (void)hideIndicators;
- (void)forceRefreshUI;
- (void)hideIndicatorsExcept:(id)arg1;
- (void)removeAllSubViews;
- (void)hideBottomShadow;
- (void)hideTopShadow;
- (void)hideLiveEndIndicator;
- (void)hideNetworkFailIndicator;
- (void)hideRemoteErrorIndicator;
- (void)hideGamePauseIndicator;
- (void)hideVerifyPauseIndicator;
- (void)hidePayToContinueIndicator;
- (void)hideAudioOnlyModeIndicator;
- (void)hideKTVIndicator;
- (void)updateMinimizeDefaultAccessibility;
- (void)updateMinimizeStateAccessibility:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id /* block */)onTapClose;
- (void)setOnTapClose:(id /* block */)arg1;
- (id /* block */)onTapContainer;
- (void)setOnTapContainer:(id /* block */)arg1;
- (id)topShadowView;
- (void)setTopShadowView:(id)arg1;
- (id)bottomShadowView;
- (void)setBottomShadowView:(id)arg1;
- (id)liveEndIndicatorView;
- (void)setLiveEndIndicatorView:(id)arg1;
- (id)networkFailIndicatorView;
- (void)setNetworkFailIndicatorView:(id)arg1;
- (id)remoteErrorIndicatorView;
- (void)setRemoteErrorIndicatorView:(id)arg1;
- (id)gamePauseIndicatorView;
- (void)setGamePauseIndicatorView:(id)arg1;
- (id)verifyPauseIndicatorView;
- (void)setVerifyPauseIndicatorView:(id)arg1;
- (id)payToContinueIndicatorView;
- (void)setPayToContinueIndicatorView:(id)arg1;
- (id)audioOnlyModeIndicatorView;
- (void)setAudioOnlyModeIndicatorView:(id)arg1;
- (id)audioOnlyIndicatorDetailView;
- (void)setAudioOnlyIndicatorDetailView:(id)arg1;
- (id)ktvIndicatorView;
- (void)setKtvIndicatorView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)bgButton;
- (void)setBgButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end

