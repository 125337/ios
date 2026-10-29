@interface MMFinderLiveCDNPlayerMicUserViewInfo : NSObject
{
    MMFinderLiveConnectMicUser * _userInfo; // +0x8
    MMFinderLiveCDNPlayerSingleAudioMicUserView * _userView; // +0x10
    UIImageView * _coverImageView; // +0x18
}
- (void)createOrUpdateCoverImageViewWithUrl:(id)arg1;
- (void)clearAllViews;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)userView;
- (void)setUserView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (void).cxx_destruct;
@end

