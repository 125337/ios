@interface NewLifeCardViewModel : NSObject <WCFinderFeedContentVMExt, NewLifeSyncStatusExt>
{
    BOOL _author; // +0x8
    BOOL _belongSelf; // +0x9
    BOOL _showUserInfo; // +0xa
    BOOL _showProfileInfo; // +0xb
    BOOL _showPostInfo; // +0xc
    BOOL _finderCardStyle; // +0xd
    BOOL _isLikeBeforeClick; // +0xe
    BOOL _showRedPacket; // +0xf
    int _scene; // +0x10
    int _enterScene; // +0x14
    WCFinderFeedContentVM * _finderViewModel; // +0x18
    WCFinderContact * _cachedFinderContact; // +0x20
    NSArray * _titleRichTextStyles; // +0x28
    id /* block */ _postStateHandler; // +0x30
    id /* block */ _postProgressHandler; // +0x38
    id /* block */ _stickyHandler; // +0x40
    id /* block */ _likeHandler; // +0x48
    id /* block */ _redPacketHandler; // +0x50
    NSString * _redPacketLabelTitle; // +0x58
    CGSize _titleSize; // +0x60
}
+ (id)currentUsername;
+ (double)overviewMediaAspectRatio;
- (id)initWithFinderViewModel:(id)arg1;
- (void)initJumpInfo;
- (BOOL)hasJumpInfo:(id)arg1 type:(long long)arg2;
- (id)getJumpInfoWording:(id)arg1 type:(long long)arg2;
- (void)toggleLike;
- (void)toggleFinderLike;
- (void)repost;
- (double)viewHeightFromWidth:(double)arg1;
- (double)overviewHeightFromWidth:(double)arg1;
- (long long)postState;
- (BOOL)isLocal;
- (id)mediaURLForRequesting;
- (id)coverCropInfo;
- (id)mediaURLForIdentification;
- (id)localURL;
- (double)aspectRatio;
- (double)mediaAspectRatio;
- (id)title;
- (id)contact;
- (BOOL)isGlobalFavorite;
- (long long)globalFavoriteCount;
- (long long)readCount;
- (BOOL)isLike;
- (long long)likeCount;
- (BOOL)isFinderLike;
- (long long)finderLikeCount;
- (id)dataItem;
- (id)firstMediaInfo;
- (BOOL)isStickyOrPrivacy;
- (BOOL)isSticky;
- (BOOL)isPrivacy;
- (double)textHorizonPadding;
- (double)cardBottomMargin;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2 progress:(double)arg3;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContentStickyTopStatueChanged:(id)arg1;
- (void)onFeedStatusChangeForFeedId:(unsigned long long)arg1 source:(unsigned int)arg2 components:(unsigned int)arg3 monotonicData:(id)arg4;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onJumpInfoStatusChangeForFeedId:(id)arg1 scene:(unsigned int)arg2 jumpInfos:(id)arg3;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (BOOL)isAuthor;
- (void)setAuthor:(BOOL)arg1;
- (BOOL)belongSelf;
- (void)setBelongSelf:(BOOL)arg1;
- (BOOL)showUserInfo;
- (void)setShowUserInfo:(BOOL)arg1;
- (BOOL)showProfileInfo;
- (void)setShowProfileInfo:(BOOL)arg1;
- (BOOL)showPostInfo;
- (void)setShowPostInfo:(BOOL)arg1;
- (BOOL)finderCardStyle;
- (void)setFinderCardStyle:(BOOL)arg1;
- (id)finderViewModel;
- (void)setFinderViewModel:(id)arg1;
- (id)cachedFinderContact;
- (void)setCachedFinderContact:(id)arg1;
- (id)titleRichTextStyles;
- (void)setTitleRichTextStyles:(id)arg1;
- (CGSize)titleSize;
- (void)setTitleSize:(CGSize)arg1;
- (id /* block */)postStateHandler;
- (void)setPostStateHandler:(id /* block */)arg1;
- (id /* block */)postProgressHandler;
- (void)setPostProgressHandler:(id /* block */)arg1;
- (id /* block */)stickyHandler;
- (void)setStickyHandler:(id /* block */)arg1;
- (id /* block */)likeHandler;
- (void)setLikeHandler:(id /* block */)arg1;
- (id /* block */)redPacketHandler;
- (void)setRedPacketHandler:(id /* block */)arg1;
- (BOOL)isLikeBeforeClick;
- (void)setIsLikeBeforeClick:(BOOL)arg1;
- (BOOL)showRedPacket;
- (void)setShowRedPacket:(BOOL)arg1;
- (id)redPacketLabelTitle;
- (void)setRedPacketLabelTitle:(id)arg1;
- (void).cxx_destruct;
@end

