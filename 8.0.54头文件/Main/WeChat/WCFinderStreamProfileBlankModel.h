@interface WCFinderStreamProfileBlankModel : WCFinderStreamProfilePageModel
{
    long long _blankType; // +0x8
    NSString * _displayTips; // +0x10
    id /* block */ _tipsClickBlock; // +0x18
    id <WCFinderStreamProfileBlankModelDelegate> _delegate; // +0x20
}
- (id)displayName;
- (id)viewPageClassName;
- (void)reset;
- (void)_reset:(id /* block */)arg1;
- (void)showNoMoreType;
- (void)showTipsType:(id)arg1 retryBlock:(id /* block */)arg2;
- (void)showLodingType;
- (void)showStoppedType;
- (long long)blankType;
- (void)setBlankType:(long long)arg1;
- (id)displayTips;
- (void)setDisplayTips:(id)arg1;
- (id /* block */)tipsClickBlock;
- (void)setTipsClickBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

