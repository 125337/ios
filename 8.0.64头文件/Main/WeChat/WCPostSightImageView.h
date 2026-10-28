@interface WCPostSightImageView : UIImageView <WCSightDraftProcessTaskExt>
{
    BOOL _shownError; // +0x8
    BOOL _canReselect; // +0x9
    SightDraft * _sightDraft; // +0x10
    SightIconView * _playIconView; // +0x18
    WCAssetStateView * _stateView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setSightDraft:(id)arg1;
- (id)thumbImageFromSightDraft:(id)arg1;
- (void)updatePlayIconView;
- (void)updateStateView;
- (void)sightDraftProcessTask:(id)arg1 didFinishProcessingSightDraft:(id)arg2;
- (void)sightDraftProcessTask:(id)arg1 didFailToProcessSightDraft:(id)arg2;
- (id)sightDraft;
- (BOOL)shownError;
- (BOOL)canReselect;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)stateView;
- (void)setStateView:(id)arg1;
- (void).cxx_destruct;
@end
