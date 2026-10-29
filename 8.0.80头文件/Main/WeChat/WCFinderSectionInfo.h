@interface WCFinderSectionInfo : NSObject
{
    int _sectionType; // +0x8
    int _iconType; // +0xc
    int _moreActionType; // +0x10
    unsigned int _recommendType; // +0x14
    NSString * _sectionTitle; // +0x18
    NSString * _sectionId; // +0x20
    NSString * _sectionDesc; // +0x28
    NSString * _sectionSubTitle; // +0x30
    NSString * _iconUrlLight; // +0x38
    NSString * _iconUrlDark; // +0x40
    FinderGetTopicListResponse * _topicResp; // +0x48
    FinderStreamResponse * _streamResp; // +0x50
    FinderGetRelatedListResp * _relatedResp; // +0x58
    unsigned long long _refreshTime; // +0x60
}
- (id)genPBSectionInfo;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (id)sectionId;
- (void)setSectionId:(id)arg1;
- (id)sectionDesc;
- (void)setSectionDesc:(id)arg1;
- (int)sectionType;
- (void)setSectionType:(int)arg1;
- (int)iconType;
- (void)setIconType:(int)arg1;
- (id)sectionSubTitle;
- (void)setSectionSubTitle:(id)arg1;
- (id)iconUrlLight;
- (void)setIconUrlLight:(id)arg1;
- (id)iconUrlDark;
- (void)setIconUrlDark:(id)arg1;
- (int)moreActionType;
- (void)setMoreActionType:(int)arg1;
- (id)topicResp;
- (void)setTopicResp:(id)arg1;
- (id)streamResp;
- (void)setStreamResp:(id)arg1;
- (id)relatedResp;
- (void)setRelatedResp:(id)arg1;
- (unsigned int)recommendType;
- (void)setRecommendType:(unsigned int)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
