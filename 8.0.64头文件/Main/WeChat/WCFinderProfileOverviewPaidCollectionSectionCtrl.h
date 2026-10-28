@interface WCFinderProfileOverviewPaidCollectionSectionCtrl : WCFinderProfilePaidCollectionBaseSectionCtrl
{
    BOOL _sectionExposed; // +0x8
}
+ (id)sectionDefines;
- (void)onHeaderWillDisplay:(id)arg1;
- (id)sections;
- (BOOL)sectionExposed;
- (void)setSectionExposed:(BOOL)arg1;
@end
