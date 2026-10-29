@interface MMBGMPanelPublishContext : NSObject
{
    BOOL _currentSelectedMusicPlaying; // +0x8
    int _cameraPosition; // +0xc
    int _scene; // +0x10
    int _finderCommentScene; // +0x14
    NSString * _sourceFeedId; // +0x18
    unsigned long long _postEnterScene; // +0x20
    unsigned long long _sourceEnterScene; // +0x28
    NSString * _editId; // +0x30
    NSString * _postId; // +0x38
    long long _childEnterScene; // +0x40
    NSString * _templateId; // +0x48
    unsigned long long _videoDuration; // +0x50
    unsigned long long _currentBgmPanelTabType; // +0x58
    id <MMBGMSelectedMusicDataProtocol> _currentSelectedMusic; // +0x60
    NSString * _searchSessionID; // +0x68
}
- (id)init;
- (id)genFixedDataReportDict;
- (void)newSearchSessionID;
- (void)clearSearchSessionID;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (unsigned long long)postEnterScene;
- (void)setPostEnterScene:(unsigned long long)arg1;
- (unsigned long long)sourceEnterScene;
- (void)setSourceEnterScene:(unsigned long long)arg1;
- (id)editId;
- (void)setEditId:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (long long)childEnterScene;
- (void)setChildEnterScene:(long long)arg1;
- (int)cameraPosition;
- (void)setCameraPosition:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (unsigned long long)currentBgmPanelTabType;
- (void)setCurrentBgmPanelTabType:(unsigned long long)arg1;
- (id)currentSelectedMusic;
- (void)setCurrentSelectedMusic:(id)arg1;
- (BOOL)currentSelectedMusicPlaying;
- (void)setCurrentSelectedMusicPlaying:(BOOL)arg1;
- (int)finderCommentScene;
- (void)setFinderCommentScene:(int)arg1;
- (id)searchSessionID;
- (void).cxx_destruct;
@end
