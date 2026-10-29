@interface WCBgmInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _isMajorOwned; // +0x8
    unsigned int _bgmType; // +0xc
    NSString * _listenId; // +0x10
}
+ (void)PBArrayAdd_bgmType;
+ (void)PBArrayAdd_listenId;
+ (void)PBArrayAdd_isMajorOwned;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (unsigned int)bgmType;
- (void)setBgmType:(unsigned int)arg1;
- (id)listenId;
- (void)setListenId:(id)arg1;
- (BOOL)isMajorOwned;
- (void)setIsMajorOwned:(BOOL)arg1;
- (void).cxx_destruct;
@end
