@interface NewContactTagTableView : FavTagTableView <ContactsViewTagListCollectionViewDelegate>
{
    ContactsViewTagListCollectionView * m_tagListView; // +0x20
    BOOL _hiddenEditButton; // +0x28
    BOOL _hiddenHeaderView; // +0x29
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)layoutSubviews;
- (void)addTags:(id)arg1 titled:(id)arg2;
- (id)makeHeaderView;
- (void)setButtonHighLight:(BOOL)arg1 named:(id)arg2;
- (void)highLightButtons:(id)arg1;
- (void)highLightButtonsWithTagIdSet:(id)arg1;
- (void)unHighLightAllButtons;
- (id)getArrSelectedTagId;
- (void)setSingleSelectMode:(BOOL)arg1;
- (void)setScrollViewEdgeInset:(UIEdgeInsets)arg1;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(BOOL)arg3;
- (void)didContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (id)getViewController;
- (void)calculateHeight;
- (BOOL)hiddenEditButton;
- (void)setHiddenEditButton:(BOOL)arg1;
- (BOOL)hiddenHeaderView;
- (void)setHiddenHeaderView:(BOOL)arg1;
- (void).cxx_destruct;
@end

