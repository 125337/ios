@interface MMFinderLiveMicTalkingUsersView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _canShow; // +0x8
    id <MMFinderLiveMicTalkingUsersViewActionDelegate> _actionDelegate; // +0x10
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x18
    NSArray * _micTalkingUsers; // +0x20
    UIView * _noUserTipView; // +0x28
    UIImageView * _noUserTipIcon; // +0x30
    UILabel * _noUserTipLabel; // +0x38
    UICollectionView * _micUsersCollectionView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNoUserTipView;
- (void)layoutUsersCollectionView;
- (void)updateViewHidden;
- (void)setCanShow:(BOOL)arg1;
- (void)updateWithMicTalkingUsers:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)canShow;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)micTalkingUsers;
- (void)setMicTalkingUsers:(id)arg1;
- (id)noUserTipView;
- (void)setNoUserTipView:(id)arg1;
- (id)noUserTipIcon;
- (void)setNoUserTipIcon:(id)arg1;
- (id)noUserTipLabel;
- (void)setNoUserTipLabel:(id)arg1;
- (id)micUsersCollectionView;
- (void)setMicUsersCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

