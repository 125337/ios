@interface CBTMomentUnreadInteractionBanner : MMUIView <ICBTContactGetExt>
{
    id /* block */ _clickHandle; // +0x8
    UILabel * _unreadCountLabel; // +0x10
    SyncMomentInterationResp_InterationSyncInfo * _lastestInfo; // +0x18
    MMHeadImageView * _headImageView; // +0x20
}
+ (CGSize)getBannerSize;
- (id)initWithClickHandle:(id /* block */)arg1;
- (void)addTapGes;
- (BOOL)needShowbanner;
- (BOOL)checkUnreadInteractionInfo;
- (void)layoutWithUnreadCount:(unsigned int)arg1;
- (void)layoutUnreadCountLabel:(unsigned int)arg1;
- (void)layoutHeadImageViewWithHeadImageUrl:(id)arg1;
- (void)onGetContactFromServer:(id)arg1;
- (id /* block */)clickHandle;
- (void)setClickHandle:(id /* block */)arg1;
- (id)unreadCountLabel;
- (void)setUnreadCountLabel:(id)arg1;
- (id)lastestInfo;
- (void)setLastestInfo:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (void).cxx_destruct;
@end
