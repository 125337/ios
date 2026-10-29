@interface MMFinderLiveConnectMicSelectConnectModePanel : MMPageSheetBaseView
{
    BOOL _canAutoConnect; // +0x8
    id <MMFinderLiveConnectMicSelectConnectModeDelegate> _actionDelegate; // +0x10
    MMFinderLiveConnectMicSelectConnectModeItemView * _anchorConfirmItemView; // +0x18
    MMFinderLiveConnectMicSelectConnectModeItemView * _autoConnectItemView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 canAutoConnect:(BOOL)arg2;
- (void)configAllSubviews;
- (void)setCanAutoConnect:(BOOL)arg1;
- (void)onTapAnchorConfirmItemView;
- (void)onTapAutoConnectItemView;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)canAutoConnect;
- (id)anchorConfirmItemView;
- (void)setAnchorConfirmItemView:(id)arg1;
- (id)autoConnectItemView;
- (void)setAutoConnectItemView:(id)arg1;
- (void).cxx_destruct;
@end

