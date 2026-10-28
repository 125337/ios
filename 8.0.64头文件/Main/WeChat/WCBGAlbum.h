@interface WCBGAlbum : NSObject <NSCoding, PBCoding>
{
    WCBGAuthor * _author; // +0x8
    NSMutableArray * _groupList; // +0x10
}
+ (id)bgAlbumFromServerObject:(id)arg1;
+ (void)PBArrayAdd_author;
+ (void)PBArrayAdd_groupList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)groupList;
- (void)setGroupList:(id)arg1;
- (void).cxx_destruct;
@end
