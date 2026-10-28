@interface WCFinderInteractionedBriefCollectionInfo : NSObject <PBCoding>
{
    int _collectionTopicType; // +0x8
    unsigned long long _identifier; // +0x10
    NSString * _name; // +0x18
    NSString * _coverImageURL; // +0x20
    long long _feedCount; // +0x28
}
+ (id)infoWithCollectionInfo:(id)arg1;
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_coverImageURL;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_collectionTopicType;
+ (void)initialize;
- (id)collectionInfo;
- (id)getPBPropertyTable;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)coverImageURL;
- (void)setCoverImageURL:(id)arg1;
- (long long)feedCount;
- (void)setFeedCount:(long long)arg1;
- (int)collectionTopicType;
- (void)setCollectionTopicType:(int)arg1;
- (void).cxx_destruct;
@end
