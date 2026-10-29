@interface MainSessionInfoItem : NSObject <PBCoding>
{
    BOOL _showAsRedDot; // +0x8
    unsigned int _mainUnReadCount; // +0xc
    unsigned int _mainMuteUnReadCount; // +0x10
    unsigned int _mainAtMeCount; // +0x14
    unsigned int _mainAtAllCount; // +0x18
    MMSessionInfo * _mainSession; // +0x20
}
+ (void)PBArrayAdd_mainSession;
+ (void)PBArrayAdd_mainUnReadCount;
+ (void)PBArrayAdd_showAsRedDot;
+ (void)PBArrayAdd_mainMuteUnReadCount;
+ (void)PBArrayAdd_mainAtMeCount;
+ (void)PBArrayAdd_mainAtAllCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)mainSession;
- (void)setMainSession:(id)arg1;
- (unsigned int)mainUnReadCount;
- (void)setMainUnReadCount:(unsigned int)arg1;
- (BOOL)showAsRedDot;
- (void)setShowAsRedDot:(BOOL)arg1;
- (unsigned int)mainMuteUnReadCount;
- (void)setMainMuteUnReadCount:(unsigned int)arg1;
- (unsigned int)mainAtMeCount;
- (void)setMainAtMeCount:(unsigned int)arg1;
- (unsigned int)mainAtAllCount;
- (void)setMainAtAllCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
