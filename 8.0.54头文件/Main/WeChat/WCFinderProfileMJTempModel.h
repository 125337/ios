@interface WCFinderProfileMJTempModel : NSObject
{
    unsigned long long _topicId; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _coverUrl; // +0x20
    FinderTopicInfo * _topic; // +0x28
    VideoTemplate * _videoTemp; // +0x30
    CGSize _coverSize; // +0x38
}
- (id)initWithTopic:(id)arg1;
- (id)topicIdStr;
- (id)templateId;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (CGSize)coverSize;
- (void)setCoverSize:(CGSize)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)videoTemp;
- (void)setVideoTemp:(id)arg1;
- (void).cxx_destruct;
@end

