@interface MMLivePanEnterPreviewParameters : NSObject
{
    int _entryCommentScene; // +0x8
    WCFinderFeedContentVM * _contentVm; // +0x10
    MMLiveCDNPlayerView * _playerView; // +0x18
    id <MMLiveMorphDismissTarget> _morphDismissTarget; // +0x20
    WCFinderFeedLiveCellRouterModel * _routeModel; // +0x28
    MMLivePanEnterPreviewRenderSource * _renderSource; // +0x30
}
- (id)contentVm;
- (void)setContentVm:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)morphDismissTarget;
- (void)setMorphDismissTarget:(id)arg1;
- (int)entryCommentScene;
- (void)setEntryCommentScene:(int)arg1;
- (id)routeModel;
- (void)setRouteModel:(id)arg1;
- (id)renderSource;
- (void)setRenderSource:(id)arg1;
- (void).cxx_destruct;
@end
