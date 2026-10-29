@interface WAPopOverTaskBarView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isNeedBackToChatButton; // +0x8
    id <WAPopOverTaskBarViewDelegate> _taskBarViewDelegate; // +0x10
    MMUIViewController * _containerVC; // +0x18
    UIView * _contentView; // +0x20
    UICollectionView * _taskCollectionView; // +0x28
    WAPopOverTaskBarlogic * _taskBarLogic; // +0x30
}
- (id)initWithPopOverTaskBarLogic:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)moveToLeftMostTaskItem;
- (void)setIsNeedBackToChatButton:(BOOL)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)initContentView;
- (void)initTaskCollectionView;
- (void)reloadData;
- (void)layoutContentView;
- (void)layoutTaskCollectionView;
- (double)calCollectionViewHeight;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)taskItemAtRowIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onMainFrameTaskItemUpdated;
- (id)taskBarViewDelegate;
- (void)setTaskBarViewDelegate:(id)arg1;
- (BOOL)isNeedBackToChatButton;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)taskCollectionView;
- (void)setTaskCollectionView:(id)arg1;
- (id)taskBarLogic;
- (void)setTaskBarLogic:(id)arg1;
- (void).cxx_destruct;
@end

