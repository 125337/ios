@interface WCFinderProfileOVSectionIdentifier : NSObject
{
    BOOL _showFooterBtn; // +0x8
    WCFinderProfileOverviewBaseSectionCtrl * _section; // +0x10
    NSString * _identifier; // +0x18
    long long _secType; // +0x20
}
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)section;
- (void)setSection:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (BOOL)showFooterBtn;
- (void)setShowFooterBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
