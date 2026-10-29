@interface WCImageFullScreenTagViewModel : NSObject
{
    BOOL _isLivePhoto; // +0x8
    BOOL _showsLivePhotoPlayStyle; // +0x9
    BOOL _showsImageSearching; // +0xa
    BOOL _showDetailEntrance; // +0xb
    BOOL _showLikeCommentCount; // +0xc
    BOOL _showEcsButton; // +0xd
    BOOL _isPinFeed; // +0xe
    int _snsScene; // +0x10
    int _likeCount; // +0x14
    int _commentCount; // +0x18
    NSString * _yuanBaoTemplateId; // +0x20
    NSString * _tid; // +0x28
    WCMomentsTemplateShareInfo * _miaoJianShareInfo; // +0x30
    NSString * _mediaId; // +0x38
    NSString * _snsalbumsid; // +0x40
    unsigned long long _viewMethod; // +0x48
    unsigned long long _snsalbumscene; // +0x50
    NSString * _snsFeedId; // +0x58
}
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)showsLivePhotoPlayStyle;
- (void)setShowsLivePhotoPlayStyle:(BOOL)arg1;
- (id)yuanBaoTemplateId;
- (void)setYuanBaoTemplateId:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)snsScene;
- (void)setSnsScene:(int)arg1;
- (BOOL)showsImageSearching;
- (void)setShowsImageSearching:(BOOL)arg1;
- (BOOL)showDetailEntrance;
- (void)setShowDetailEntrance:(BOOL)arg1;
- (BOOL)showLikeCommentCount;
- (void)setShowLikeCommentCount:(BOOL)arg1;
- (BOOL)showEcsButton;
- (void)setShowEcsButton:(BOOL)arg1;
- (id)miaoJianShareInfo;
- (void)setMiaoJianShareInfo:(id)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (id)snsalbumsid;
- (void)setSnsalbumsid:(id)arg1;
- (unsigned long long)viewMethod;
- (void)setViewMethod:(unsigned long long)arg1;
- (unsigned long long)snsalbumscene;
- (void)setSnsalbumscene:(unsigned long long)arg1;
- (BOOL)isPinFeed;
- (void)setIsPinFeed:(BOOL)arg1;
- (id)snsFeedId;
- (void)setSnsFeedId:(id)arg1;
- (int)likeCount;
- (void)setLikeCount:(int)arg1;
- (int)commentCount;
- (void)setCommentCount:(int)arg1;
- (void).cxx_destruct;
@end
