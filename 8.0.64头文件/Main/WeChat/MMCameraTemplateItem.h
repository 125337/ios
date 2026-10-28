@interface MMCameraTemplateItem : NSObject
{
    BOOL _isFav; // +0x8
    BOOL _isFavLatest; // +0x9
    NSString * _id; // +0x10
    NSString * _displayName; // +0x18
    NSString * _authorDisplayName; // +0x20
    NSString * _authorProfilePicURL; // +0x28
    unsigned long long _maasIosMinVersion; // +0x30
    NSString * _templateDescURL; // +0x38
    unsigned long long _templateDescVersion; // +0x40
    unsigned long long _cameraPosition; // +0x48
    NSString * _previewImageURL; // +0x50
    NSData * _sessionBuffer; // +0x58
}
+ (id)itemFromVideoTemplate:(id)arg1;
+ (id)itemFromMJVideoTemplate:(id)arg1;
+ (id)genTempateItemList;
+ (id)emptyItem;
+ (id)hardCodeJsonData;
- (void)setFinderEventName:(id)arg1;
- (id)finderEventName;
- (void)setFinderEventCreateUsrNickname:(id)arg1;
- (id)finderEventCreateUsrNickname;
- (BOOL)isEmptyItem;
- (id)title;
- (id)colorString;
- (id)description;
- (id)id;
- (void)setId:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)authorDisplayName;
- (void)setAuthorDisplayName:(id)arg1;
- (id)authorProfilePicURL;
- (void)setAuthorProfilePicURL:(id)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (BOOL)isFavLatest;
- (void)setIsFavLatest:(BOOL)arg1;
- (unsigned long long)maasIosMinVersion;
- (void)setMaasIosMinVersion:(unsigned long long)arg1;
- (id)templateDescURL;
- (void)setTemplateDescURL:(id)arg1;
- (unsigned long long)templateDescVersion;
- (void)setTemplateDescVersion:(unsigned long long)arg1;
- (unsigned long long)cameraPosition;
- (void)setCameraPosition:(unsigned long long)arg1;
- (id)previewImageURL;
- (void)setPreviewImageURL:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
