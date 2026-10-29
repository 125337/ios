@interface WCLabsCommonInfo : MMObject <PBCoding>
{
    BOOL _hasShowNewRedDotInLabEntrance; // +0x8
    BOOL _shouldShowGerneralRedDotInLabEntrance; // +0x9
    unsigned int _uiShowLabTipCnt; // +0xc
}
+ (void)PBArrayAdd_uiShowLabTipCnt;
+ (void)PBArrayAdd_hasShowNewRedDotInLabEntrance;
+ (void)PBArrayAdd_shouldShowGerneralRedDotInLabEntrance;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)uiShowLabTipCnt;
- (void)setUiShowLabTipCnt:(unsigned int)arg1;
- (BOOL)hasShowNewRedDotInLabEntrance;
- (void)setHasShowNewRedDotInLabEntrance:(BOOL)arg1;
- (BOOL)shouldShowGerneralRedDotInLabEntrance;
- (void)setShouldShowGerneralRedDotInLabEntrance:(BOOL)arg1;
@end

