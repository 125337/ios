@interface MMFinderLiveKTVAudioReverbSettingCell : WCTableViewNormalCellManager <UICollectionViewDataSource, UICollectionViewDelegate>
{
    MMFinderLiveKTVAudioEffectSettingUserInfo * _customUserInfo; // +0x8
    MMUIView * _contentView; // +0x10
    NSArray * _reverbItems; // +0x18
    UICollectionView * _collectionView; // +0x20
}
+ (double)getAspectHeightWithContentW:(double)arg1 itemCnt:(unsigned long long)arg2;
- (id)initWithSize:(CGSize)arg1 userInfo:(id)arg2 reverbItems:(id)arg3;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)arg1 height:(double)arg2;
- (void)initSubviewsWith:(double)arg1 height:(double)arg2;
- (void)layoutUI;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)liveTask;
- (id)customUserInfo;
- (void)setCustomUserInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)reverbItems;
- (void)setReverbItems:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
