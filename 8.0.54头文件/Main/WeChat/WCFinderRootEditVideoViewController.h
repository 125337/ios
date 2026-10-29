@interface WCFinderRootEditVideoViewController : WCEditVideoViewController <WCFinderEditDataReportDelegate>
{
    unsigned long long _enterScene; // +0x68
    MJPublisherContext * _publisherContext; // +0x70
    unsigned long long _enterTime; // +0x78
    NSString * _templateId; // +0x80
    NSString * _templateMusicId; // +0x88
    NSString * _templateFollowFeedID; // +0x90
}
- (void)viewDidAppear:(BOOL)arg1;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (void)onClickEditVideoCancelButton;
- (void)onClickEditVideoDoneButton;
- (id)editResultComposition;
- (id)originalUrls;
- (CGPoint)emotionOffset;
- (void)registerYReportSdk;
- (id)getSourceFeedId;
- (unsigned long long)getEnterScene;
- (id)getEditId;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)publisherContext;
- (void)setPublisherContext:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)templateMusicId;
- (void)setTemplateMusicId:(id)arg1;
- (id)templateFollowFeedID;
- (void)setTemplateFollowFeedID:(id)arg1;
- (void).cxx_destruct;
@end

