@interface WCFinderJumpNativeMJTemplateParams : NSObject
{
    BOOL _fromAuthorViewerScene; // +0x8
    NSString * _tmplTopicId; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _sourceFeedId; // +0x20
    WCFinderFeedContentVM * _sourceFeedContentVM; // +0x28
    long long _childEnterScene; // +0x30
    NSString * _postId; // +0x38
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)tmplTopicId;
- (void)setTmplTopicId:(id)arg1;
- (BOOL)fromAuthorViewerScene;
- (void)setFromAuthorViewerScene:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (id)sourceFeedContentVM;
- (void)setSourceFeedContentVM:(id)arg1;
- (long long)childEnterScene;
- (void)setChildEnterScene:(long long)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (void).cxx_destruct;
@end
