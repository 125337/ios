@interface WCFinderPatCollectionReusableView : UICollectionReusableView
{
    id <WCFinderPatCollectionReusableViewDelegate> _delegate; // +0x8
}
+ (double)getPatMusicHeightWithBgmInfo:(id)arg1 titleWording:(id)arg2 screenWid:(double)arg3 enablePostFeed:(BOOL)arg4;
- (void)updatePatMusicWithBgmInfo:(id)arg1 patCount:(unsigned long long)arg2 readTotalCount:(unsigned long long)arg3 titleWording:(id)arg4 enablePostFeed:(BOOL)arg5;
- (void)playMusicWith:(id)arg1;
- (void)playMusicWith:(id)arg1 isPlay:(BOOL)arg2;
- (void)stopMusicPlay;
- (void)resumeMusicPlay;
- (BOOL)patPostButtonShow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

