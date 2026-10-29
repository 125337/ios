@interface WCFinderPushLiteAppOptionalParams : NSObject
{
    NSString * _feedId; // +0x8
    unsigned long long _tagType; // +0x10
    NSString * _tagSecKey; // +0x18
    NSDictionary * _poiInfo; // +0x20
    NSString * _postId; // +0x28
    unsigned long long _enterScene; // +0x30
}
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (id)tagSecKey;
- (void)setTagSecKey:(id)arg1;
- (id)poiInfo;
- (void)setPoiInfo:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
