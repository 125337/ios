@interface WCBGGroup : NSObject <NSCoding, PBCoding>
{
    NSString * _name; // +0x8
    NSMutableArray * _mediaList; // +0x10
}
+ (id)bgGroupFromServerObject:(id)arg1;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_mediaList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (void).cxx_destruct;
@end

