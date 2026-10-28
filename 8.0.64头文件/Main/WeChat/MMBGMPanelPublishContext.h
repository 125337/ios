@interface MMBGMPanelPublishContext : NSObject
{
    int _finderCommentScene; // +0x8
    NSString * _sourceFeedId; // +0x10
    unsigned long long _postEnterScene; // +0x18
    NSString * _editId; // +0x20
    NSString * _postId; // +0x28
    NSString * _templateId; // +0x30
    unsigned long long _currentBgmPanelTabType; // +0x38
    id <MMBGMSelectedMusicDataProtocol> _currentSelectedMusic; // +0x40
}
- (id)init;
- (id)genFixedDataReportDict;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (unsigned long long)postEnterScene;
- (void)setPostEnterScene:(unsigned long long)arg1;
- (id)editId;
- (void)setEditId:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (unsigned long long)currentBgmPanelTabType;
- (void)setCurrentBgmPanelTabType:(unsigned long long)arg1;
- (id)currentSelectedMusic;
- (void)setCurrentSelectedMusic:(id)arg1;
- (int)finderCommentScene;
- (void)setFinderCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
