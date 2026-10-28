@interface WCFinderMJTempInfo : NSObject
{
    BOOL _forbidForward; // +0x8
    WCFinderContact * _finderContact; // +0x10
    long long _originCount; // +0x18
    NSString * _coverUrl; // +0x20
    NSString * _becomeCreatorUrl; // +0x28
    VideoTemplate * _videoTemplate; // +0x30
    NSString * _templateMusicId; // +0x38
    NSString * _topicId; // +0x40
}
+ (id)newWithTemplateListResponse:(id)arg1;
- (long long)usedCount;
- (id)tempTitle;
- (id)templateId;
- (unsigned long long)templateType;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (long long)originCount;
- (void)setOriginCount:(long long)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)becomeCreatorUrl;
- (void)setBecomeCreatorUrl:(id)arg1;
- (BOOL)forbidForward;
- (void)setForbidForward:(BOOL)arg1;
- (id)videoTemplate;
- (void)setVideoTemplate:(id)arg1;
- (id)templateMusicId;
- (void)setTemplateMusicId:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (void).cxx_destruct;
@end
