@interface WCFinderTemplatePublishParams : NSObject
{
    BOOL _referenceVideoEnabled; // +0x8
    BOOL _hasReferenceVideo; // +0x9
    BOOL _showPostVideoToCommentAreaSwitch; // +0xa
    BOOL _disableShowNoTmpl; // +0xb
    BOOL _disableShowMoreTmpl; // +0xc
    BOOL _disableShowFromAlbum; // +0xd
    unsigned long long _eventId; // +0x10
    NSString * _followFeedId; // +0x18
    unsigned long long _enterScene; // +0x20
    long long _childEnterScene; // +0x28
    NSString * _postId; // +0x30
    NSString * _topicId; // +0x38
    NSString * _followFeedTemplateId; // +0x40
    WCFinderDataItem * _referenceVideoDataItem; // +0x48
    WCFinderPostSourceInfo * _sourceInfo; // +0x50
    NSString * _topicContent; // +0x58
    WCFinderFeedVideoFetcher * _videoFetcher; // +0x60
}
- (id)init;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (id)followFeedId;
- (void)setFollowFeedId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (long long)childEnterScene;
- (void)setChildEnterScene:(long long)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)followFeedTemplateId;
- (void)setFollowFeedTemplateId:(id)arg1;
- (BOOL)referenceVideoEnabled;
- (void)setReferenceVideoEnabled:(BOOL)arg1;
- (BOOL)hasReferenceVideo;
- (void)setHasReferenceVideo:(BOOL)arg1;
- (id)referenceVideoDataItem;
- (void)setReferenceVideoDataItem:(id)arg1;
- (BOOL)showPostVideoToCommentAreaSwitch;
- (void)setShowPostVideoToCommentAreaSwitch:(BOOL)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)topicContent;
- (void)setTopicContent:(id)arg1;
- (id)videoFetcher;
- (void)setVideoFetcher:(id)arg1;
- (BOOL)disableShowNoTmpl;
- (void)setDisableShowNoTmpl:(BOOL)arg1;
- (BOOL)disableShowMoreTmpl;
- (void)setDisableShowMoreTmpl:(BOOL)arg1;
- (BOOL)disableShowFromAlbum;
- (void)setDisableShowFromAlbum:(BOOL)arg1;
- (void).cxx_destruct;
@end
