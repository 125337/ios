@interface WCFinderTemplatePublishParams : NSObject
{
    BOOL _showPostVideoToCommentAreaSwitch; // +0x8
    BOOL _disableShowNoTmpl; // +0x9
    BOOL _disableShowMoreTmpl; // +0xa
    BOOL _disableShowFromAlbum; // +0xb
    unsigned long long _eventId; // +0x10
    NSString * _followFeedId; // +0x18
    unsigned long long _enterScene; // +0x20
    NSString * _topicId; // +0x28
    NSString * _followFeedTemplateId; // +0x30
    WCFinderPostSourceInfo * _sourceInfo; // +0x38
    NSString * _topicContent; // +0x40
    WCFinderFeedVideoFetcher * _videoFetcher; // +0x48
}
- (id)init;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (id)followFeedId;
- (void)setFollowFeedId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)followFeedTemplateId;
- (void)setFollowFeedTemplateId:(id)arg1;
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
