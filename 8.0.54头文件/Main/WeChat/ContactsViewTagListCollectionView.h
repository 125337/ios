@interface ContactsViewTagListCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ContactTagCreateTagHalfScreenViewControllerDelegate>
{
    BOOL _singleSelectMode; // +0x8
    id <ContactsViewTagListCollectionViewDelegate> _m_delegate; // +0x10
    NSMutableArray * _m_arrSelectedTagId; // +0x18
    UIView * _headerView; // +0x20
    NSMutableArray * _tagList; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)updateWithTags:(id)arg1;
- (id)getTagList;
- (void)setButtonHighLight:(BOOL)arg1 named:(id)arg2;
- (void)highLightButtons:(id)arg1;
- (void)highLightButtonsWithTagIdSet:(id)arg1;
- (void)unHighLightAll;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)onClickCreateTagButton;
- (void)OnNewContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (CGSize)itemSizeForTagName:(id)arg1;
- (CGSize)itemSizeForCreatTagCell;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_arrSelectedTagId;
- (void)setM_arrSelectedTagId:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (BOOL)singleSelectMode;
- (void)setSingleSelectMode:(BOOL)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (void).cxx_destruct;
@end

