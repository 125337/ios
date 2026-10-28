@interface MMMultiSelectedContactDisplayView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <MMMultiSelectedContactDisplayViewDelegate> _delegate; // +0x8
    NSMutableArray * _contactList; // +0x10
    UICollectionView * _collectionView; // +0x18
    long long _layoutMode; // +0x20
}
+ (double)getDisplayViewHeight;
- (double)getDisplayItemLen;
- (double)getContentTopOffset;
- (double)getContentRightOffset;
- (double)getContentInterSpacing;
- (double)getContentLineSpacing;
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)initView;
- (BOOL)checkAndUpdateSelfHeightForContactCount:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handleSetExistContacts:(id)arg1;
- (void)handleAddNewContact:(id)arg1;
- (void)handleRemoveContact:(id)arg1;
- (void)reloadData;
- (id)getDisplayViewInNormalState;
- (void)setFrame:(CGRect)arg1;
- (BOOL)isContactExist:(id)arg1;
- (void)resetCollectionView;
- (unsigned long long)findAndRemoveContact:(id)arg1;
- (void)addContactSpecialMode:(id)arg1;
- (void)removeContactSpecialMode:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)genContactItemViewWithContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactList;
- (void)setContactList:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (long long)layoutMode;
- (void)setLayoutMode:(long long)arg1;
- (void).cxx_destruct;
@end
