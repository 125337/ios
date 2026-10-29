@interface WCFinderMJTempInfo : NSObject
{
    BOOL _forbidForward; // +0x8
    WCFinderContact * _finderContact; // +0x10
    long long _originCount; // +0x18
    NSString * _coverUrl; // +0x20
    NSString * _becomeCreatorUrl; // +0x28
    FinderJumpInfo * _templateCreatorJumpInfo; // +0x30
    VideoTemplate * _videoTemplate; // +0x38
    NSString * _templateMusicId; // +0x40
    NSString * _topicId; // +0x48
}
+ (id)newWithTemplateListResponse:(id)arg1;
- (long long)usedCount;
- (long long)viewCount;
- (id)tempTitle;
- (id)templateId;
- (unsigned long long)templateType;
- (unsigned long long)minimumIOSSDKVersion;
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
- (id)templateCreatorJumpInfo;
- (void)setTemplateCreatorJumpInfo:(id)arg1;
- (id)videoTemplate;
- (void)setVideoTemplate:(id)arg1;
- (id)templateMusicId;
- (void)setTemplateMusicId:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (void).cxx_destruct;
@end
