@interface ResendFavItem : NSObject <PBCoding>
{
    unsigned int _favId; // +0x8
    unsigned int _localFavId; // +0xc
    unsigned int _itemStatus; // +0x10
    NSMutableArray * _fileIdList; // +0x18
}
+ (void)PBArrayAdd_favId;
+ (void)PBArrayAdd_localFavId;
+ (void)PBArrayAdd_fileIdList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)localFavId;
- (void)setLocalFavId:(unsigned int)arg1;
- (id)fileIdList;
- (void)setFileIdList:(id)arg1;
- (unsigned int)itemStatus;
- (void)setItemStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

