@interface WCFinderProgressControlPanelConfigParamsModel : NSObject
{
    BOOL _forbidProgressBarMovAnim; // +0x8
    BOOL _isLandscape; // +0x9
    BOOL _hasCompletelyPlay; // +0xa
    WCFinderFeedContentVM * _contentVM; // +0x10
    double _currentPlayPosition; // +0x18
    double _videoDuration; // +0x20
    WCFinderTableViewParamModel * _tableViewParamModel; // +0x28
}
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (double)currentPlayPosition;
- (void)setCurrentPlayPosition:(double)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (BOOL)forbidProgressBarMovAnim;
- (void)setForbidProgressBarMovAnim:(BOOL)arg1;
- (BOOL)isLandscape;
- (void)setIsLandscape:(BOOL)arg1;
- (BOOL)hasCompletelyPlay;
- (void)setHasCompletelyPlay:(BOOL)arg1;
- (id)tableViewParamModel;
- (void)setTableViewParamModel:(id)arg1;
- (void).cxx_destruct;
@end

