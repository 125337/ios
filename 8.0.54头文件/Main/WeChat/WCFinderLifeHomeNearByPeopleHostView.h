@interface WCFinderLifeHomeNearByPeopleHostView : UIView
{
    BOOL _alreadyCheckLBS; // +0x8
    SeePeopleNearbyViewController * _seePeopleVC; // +0x10
    UIEdgeInsets _edgeInsets; // +0x18
}
- (void)cleanup;
- (void)ensureVC;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (id)seePeopleVC;
- (void)setSeePeopleVC:(id)arg1;
- (UIEdgeInsets)edgeInsets;
- (BOOL)alreadyCheckLBS;
- (void)setAlreadyCheckLBS:(BOOL)arg1;
- (void).cxx_destruct;
@end

