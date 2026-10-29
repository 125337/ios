@interface WCFinderCollectionShareItem : NSObject <WCFinderShareItemProtocol>
{
    int _collectionTopicType; // +0x8
    int _paidCollectionType; // +0xc
    unsigned int _feedCount; // +0x10
    unsigned int _price; // +0x14
    int _sourceCommentScene; // +0x18
    unsigned long long _collectionId; // +0x20
    NSString * _authorUsername; // +0x28
    NSString * _title; // +0x30
    NSString * _thumbUrl; // +0x38
    NSString * _collectionDesc; // +0x40
    NSString * _nickname; // +0x48
    NSString * _avatarURL; // +0x50
    NSString * _authIconURL; // +0x58
    unsigned long long _authIconType; // +0x60
    WCFinderContact * _contact; // +0x68
}
+ (id)itemWithCollectionInfo:(id)arg1 authorUsername:(id)arg2 sourceCommentScene:(int)arg3;
+ (id)itemWithPaidCollectionInfo:(id)arg1 authorUsername:(id)arg2 sourceCommentScene:(int)arg3;
+ (void)PBArrayAdd_collectionTopicType;
+ (void)PBArrayAdd_paidCollectionType;
+ (void)PBArrayAdd_collectionId;
+ (void)PBArrayAdd_authorUsername;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_collectionDesc;
+ (void)PBArrayAdd_price;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatarURL;
+ (void)PBArrayAdd_authIconURL;
+ (void)PBArrayAdd_authIconType;
+ (void)PBArrayAdd_sourceCommentScene;
+ (void)initialize;
- (void)_fillContactInfo;
- (id)descString;
- (BOOL)isPaidCollection;
- (id)resolveNickname;
- (id)resolveAvatarURL;
- (id)resolveAuthIconURL;
- (unsigned long long)resolveAuthIconType;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)chatDesc;
- (id)momentsDesc;
- (double)momentsHeightForMedia:(id)arg1;
- (id)momentsSourceText;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(BOOL)arg3;
- (id)titleContainChanel:(BOOL)arg1;
- (id)exposeReportMode;
- (id)contact;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (int)collectionTopicType;
- (void)setCollectionTopicType:(int)arg1;
- (int)paidCollectionType;
- (void)setPaidCollectionType:(int)arg1;
- (unsigned long long)collectionId;
- (void)setCollectionId:(unsigned long long)arg1;
- (id)authorUsername;
- (void)setAuthorUsername:(id)arg1;
- (unsigned int)feedCount;
- (void)setFeedCount:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)collectionDesc;
- (void)setCollectionDesc:(id)arg1;
- (unsigned int)price;
- (void)setPrice:(unsigned int)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg1;
- (id)authIconURL;
- (void)setAuthIconURL:(id)arg1;
- (unsigned long long)authIconType;
- (void)setAuthIconType:(unsigned long long)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
