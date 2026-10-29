@interface WCStoryTimelineEntranceTableViewCell : MMTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    BOOL _canShowDeleteButton; // +0x8
    BOOL _canAdjustInset; // +0x9
    id <WCStoryTimelineEntranceTableViewCellDelegate> _delegate; // +0x10
    NSMutableArray * _unreadStoryDataUnits; // +0x18
    NSMutableArray * _unreadCommentStoryDataUnits; // +0x20
    unsigned long long _timestampUnreadStoryCount; // +0x28
    unsigned long long _unreadCommentCount; // +0x30
    WCStoryReportUtil * _storyReportUtil; // +0x38
    UIButton * _topButton; // +0x40
    UICollectionView * _collectionView; // +0x48
    UILabel * _unreadCommentCountLabel; // +0x50
    UIImageView * _unreadCommentImageview; // +0x58
    UIView * _separatorLine; // +0x60
    WCStoryTimelineEntranceCollectionViewLayout * _layout; // +0x68
    double _lastScrollViewX; // +0x70
    UIButton * _deleteButton; // +0x78
    id /* block */ _showPreviewBlock; // +0x80
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)setupSubviews;
- (BOOL)hasSetupUnreadUserNameArray;
- (void)reloadData;
- (void)clearFriendStoryVideo;
- (void)resetCollectionInset;
- (void)scrollToTop;
- (void)reportExposeData;
- (id)userNameStrFromDataUnits:(id)arg1;
- (void)layoutCustomSubViews;
- (double)cellBaseHeight;
- (BOOL)shouldShowTopButton;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)topButton;
- (id)unreadCommentImageview;
- (id)unreadCommentCountLabel;
- (id)separatorLine;
- (id)collectionView;
- (id)flowLayout;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadCollectionViewInsetWithAnimation:(BOOL)arg1;
- (void)clickDeleteButtonAction;
- (void)setUnreadCommentCount:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)unreadStoryDataUnits;
- (void)setUnreadStoryDataUnits:(id)arg1;
- (id)unreadCommentStoryDataUnits;
- (void)setUnreadCommentStoryDataUnits:(id)arg1;
- (unsigned long long)timestampUnreadStoryCount;
- (void)setTimestampUnreadStoryCount:(unsigned long long)arg1;
- (unsigned long long)unreadCommentCount;
- (id)storyReportUtil;
- (void)setStoryReportUtil:(id)arg1;
- (void)setTopButton:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setUnreadCommentCountLabel:(id)arg1;
- (void)setUnreadCommentImageview:(id)arg1;
- (void)setSeparatorLine:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (double)lastScrollViewX;
- (void)setLastScrollViewX:(double)arg1;
- (BOOL)canShowDeleteButton;
- (void)setCanShowDeleteButton:(BOOL)arg1;
- (BOOL)canAdjustInset;
- (void)setCanAdjustInset:(BOOL)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id /* block */)showPreviewBlock;
- (void)setShowPreviewBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
