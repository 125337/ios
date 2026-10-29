@interface WCGameShareCardInfo : NSObject <NSCoding, PBCoding>
{
    unsigned int _isVideo; // +0x8
    unsigned int _duration; // +0xc
    WCGameShareLiteAppExtInfo * _liteAppExtInfo; // +0x10
    WCGameShareAppBrandExtInfo * _appBrandExtInfo; // +0x18
    NSString * _gameShareId; // +0x20
    NSString * _gameShareData; // +0x28
    NSString * _readText; // +0x30
}
+ (void)PBArrayAdd_liteAppExtInfo;
+ (void)PBArrayAdd_gameShareId;
+ (void)PBArrayAdd_gameShareData;
+ (void)PBArrayAdd_isVideo;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_readText;
+ (void)PBArrayAdd_appBrandExtInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)liteAppExtInfo;
- (void)setLiteAppExtInfo:(id)arg1;
- (id)appBrandExtInfo;
- (void)setAppBrandExtInfo:(id)arg1;
- (id)gameShareId;
- (void)setGameShareId:(id)arg1;
- (id)gameShareData;
- (void)setGameShareData:(id)arg1;
- (unsigned int)isVideo;
- (void)setIsVideo:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (id)readText;
- (void)setReadText:(id)arg1;
- (void).cxx_destruct;
@end

