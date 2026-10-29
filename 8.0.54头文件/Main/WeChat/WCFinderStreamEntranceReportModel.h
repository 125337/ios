@interface WCFinderStreamEntranceReportModel : NSObject
{
    BOOL _findEntranceHasRedDot; // +0x8
    BOOL _recommendTabRedDot; // +0x9
    BOOL _followTabRedDot; // +0xa
    BOOL _machineTabRedDot; // +0xb
    BOOL _isChangeByScrollTab; // +0xc
    unsigned long long _lastSelectTabIndex; // +0x10
    unsigned long long _lastTabType; // +0x18
}
- (void)resetDefault;
- (id)description;
- (BOOL)findEntranceHasRedDot;
- (void)setFindEntranceHasRedDot:(BOOL)arg1;
- (BOOL)recommendTabRedDot;
- (void)setRecommendTabRedDot:(BOOL)arg1;
- (BOOL)followTabRedDot;
- (void)setFollowTabRedDot:(BOOL)arg1;
- (BOOL)machineTabRedDot;
- (void)setMachineTabRedDot:(BOOL)arg1;
- (unsigned long long)lastSelectTabIndex;
- (void)setLastSelectTabIndex:(unsigned long long)arg1;
- (unsigned long long)lastTabType;
- (void)setLastTabType:(unsigned long long)arg1;
- (BOOL)isChangeByScrollTab;
- (void)setIsChangeByScrollTab:(BOOL)arg1;
@end

