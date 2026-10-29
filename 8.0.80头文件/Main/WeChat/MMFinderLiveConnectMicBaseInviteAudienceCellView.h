@interface MMFinderLiveConnectMicBaseInviteAudienceCellView : MMFinderLiveConnectedMicBaseAudienceCellView
{
    BOOL _showsFansGroupBadge; // +0x90
    UILabel * _rightLabel; // +0x98
    double _rightButtonWidth; // +0xa0
}
+ (id)ReuseIdentifier;
- (void)resetState;
- (BOOL)shouldHideFansGroupBadges;
- (void)configRightLabel;
- (void)updateRightButton;
- (void)layoutUI;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (BOOL)showsFansGroupBadge;
- (void)setShowsFansGroupBadge:(BOOL)arg1;
- (double)rightButtonWidth;
- (void)setRightButtonWidth:(double)arg1;
- (void).cxx_destruct;
@end
