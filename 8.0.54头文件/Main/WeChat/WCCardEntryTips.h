@interface WCCardEntryTips : MMObject <PBCoding>
{
    BOOL _bShowNew; // +0x8
    BOOL _bShowRedDot; // +0x9
    BOOL _bNeedCheck; // +0xa
    BOOL _bShowEntryNew; // +0xb
    BOOL _bShowEntryRedDot; // +0xc
    BOOL _bShowMeRedDot; // +0xd
    NSString * _nsRedDotBuff; // +0x10
    NSString * _nsTipWording; // +0x18
    NSString * _nsTipIconUrl; // +0x20
    NSString * _nsCardId; // +0x28
}
+ (void)PBArrayAdd_bShowNew;
+ (void)PBArrayAdd_bShowRedDot;
+ (void)PBArrayAdd_nsRedDotBuff;
+ (void)PBArrayAdd_nsTipWording;
+ (void)PBArrayAdd_nsTipIconUrl;
+ (void)PBArrayAdd_nsCardId;
+ (void)PBArrayAdd_bNeedCheck;
+ (void)PBArrayAdd_bShowEntryNew;
+ (void)PBArrayAdd_bShowEntryRedDot;
+ (void)PBArrayAdd_bShowMeRedDot;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)saveToCache;
- (void)loadFromCache;
- (id)pathForCache;
- (BOOL)bShowNew;
- (void)setBShowNew:(BOOL)arg1;
- (BOOL)bShowRedDot;
- (void)setBShowRedDot:(BOOL)arg1;
- (id)nsRedDotBuff;
- (void)setNsRedDotBuff:(id)arg1;
- (id)nsTipWording;
- (void)setNsTipWording:(id)arg1;
- (id)nsTipIconUrl;
- (void)setNsTipIconUrl:(id)arg1;
- (id)nsCardId;
- (void)setNsCardId:(id)arg1;
- (BOOL)bNeedCheck;
- (void)setBNeedCheck:(BOOL)arg1;
- (BOOL)bShowEntryNew;
- (void)setBShowEntryNew:(BOOL)arg1;
- (BOOL)bShowEntryRedDot;
- (void)setBShowEntryRedDot:(BOOL)arg1;
- (BOOL)bShowMeRedDot;
- (void)setBShowMeRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end

