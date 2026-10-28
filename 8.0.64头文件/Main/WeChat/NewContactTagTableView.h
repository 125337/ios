@interface NewContactTagTableView : FavTagTableView <ContactsViewTagListCollectionViewDelegate>
{
    ContactsViewTagListCollectionView * m_tagListView; // +0x20
    BOOL _hiddenEditButton; // +0x28
    BOOL _hiddenHeaderView; // +0x29
    double _tagViewCornerRadius; // +0x30
    UIColor * _tagButtonTextColor; // +0x38
    UIFont * _tagButtonTextFont; // +0x40
    NSNumber * _tagImageType; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initData;
- (void)layoutSubviews;
- (void)addTags:(id)arg1 titled:(id)arg2;
- (id)makeHeaderView;
- (void)setButtonHighLight:(BOOL)arg1 named:(id)arg2;
- (void)highLightButtons:(id)arg1;
- (void)highLightButtonsWithTagIdSet:(id)arg1;
- (void)resetUpdateWithTags:(id)arg1;
- (void)triggerCreateTagButton;
- (void)unHighLightAllButtons;
- (id)getArrSelectedTagId;
- (id)gatTagListView;
- (id)getTagNameList;
- (void)setSingleSelectMode:(BOOL)arg1;
- (void)setHiddeCreateTag:(BOOL)arg1;
- (void)setCreateTagSpecifyName:(id)arg1;
- (void)setHandleCreateTagBolck:(id /* block */)arg1;
- (void)setScrollViewEdgeInset:(UIEdgeInsets)arg1;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(BOOL)arg3;
- (void)didContactTagCreateTagWithTagId:(unsigned int)arg1 result:(BOOL)arg2 isRename:(BOOL)arg3;
- (void)didTagButtonWillDisplayWithTagId:(unsigned int)arg1 tagName:(id)arg2;
- (void)onDidClickCreateTagButton;
- (id)getViewController;
- (void)calculateHeight;
- (BOOL)hiddenEditButton;
- (void)setHiddenEditButton:(BOOL)arg1;
- (BOOL)hiddenHeaderView;
- (void)setHiddenHeaderView:(BOOL)arg1;
- (double)tagViewCornerRadius;
- (void)setTagViewCornerRadius:(double)arg1;
- (id)tagButtonTextColor;
- (void)setTagButtonTextColor:(id)arg1;
- (id)tagButtonTextFont;
- (void)setTagButtonTextFont:(id)arg1;
- (id)tagImageType;
- (void)setTagImageType:(id)arg1;
- (void).cxx_destruct;
@end
