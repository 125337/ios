@interface WCFinderStreamProfileBlankModel : WCFinderStreamProfilePageModel
{
    BOOL _disable; // +0x8
    long long _blankType; // +0x10
    NSString * _displayTips; // +0x18
    UIImage * _tipsIcon; // +0x20
    id /* block */ _tipsClickBlock; // +0x28
    id <WCFinderStreamProfileBlankModelDelegate> _delegate; // +0x30
}
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)reset;
- (void)_reset:(id /* block */)arg1;
- (void)showNoMoreType;
- (void)showTipsType:(id)arg1 retryBlock:(id /* block */)arg2;
- (void)showTipsType:(id)arg1 tipsIcon:(id)arg2 retryBlock:(id /* block */)arg3;
- (void)showLodingType;
- (void)showStoppedType;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (long long)blankType;
- (void)setBlankType:(long long)arg1;
- (id)displayTips;
- (void)setDisplayTips:(id)arg1;
- (id)tipsIcon;
- (void)setTipsIcon:(id)arg1;
- (id /* block */)tipsClickBlock;
- (void)setTipsClickBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
