@interface WCFinderMusicBaseHeaderView : UICollectionReusableView
{
    id <WCFinderMusicHeaderViewDelegate> _delegate; // +0x8
}
+ (double)heightWithMusicTopicInfo:(id)arg1 andViewWidth:(double)arg2;
+ (id)getSongDescByMusicTopicInfo:(id)arg1;
+ (BOOL)hasMusicCopyright:(id)arg1;
+ (BOOL)enablePlayMusicInfo:(id)arg1;
+ (BOOL)enableUseSourceContactByMusicTopicInfo:(id)arg1 contact:(id)arg2;
- (void)updateWithMusicTopicInfo:(id)arg1 fromDataItem:(id)arg2 shareItemInfo:(id)arg3;
- (id)getHeaderTitle;
- (id)getHeaderIconUrl;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
