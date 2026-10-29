@interface WCBGStorage : NSObject <NSCoding, PBCoding>
{
    unsigned int hash; // +0x8
    NSMutableArray * _albumList; // +0x10
}
+ (id)bgStorageFromServerObject:(id)arg1;
+ (void)PBArrayAdd_hash;
+ (void)PBArrayAdd_albumList;
+ (void)initialize;
+ (id)parseFromXml:(id)arg1 preferLang:(id)arg2;
+ (id)fromBuffer:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXml;
- (id)toBuffer;
- (unsigned int)hash;
- (void)setHash:(unsigned int)arg1;
- (id)albumList;
- (void)setAlbumList:(id)arg1;
- (void).cxx_destruct;
@end
