@interface MMFinderLiveFansGroupNoticeVisibilityItem : NSObject
{
    BOOL _selected; // +0x8
    BOOL _expandable; // +0x9
    BOOL _expanded; // +0xa
    int _visibility; // +0xc
    NSString * _title; // +0x10
    NSMutableAttributedString * _attrSubtitle; // +0x18
    Class _cellCls; // +0x20
    MMFinderLiveFansGroupNoticeVisibilityItem * _expandLinkedItem; // +0x28
}
+ (id)itemWithTitle:(id)arg1 subtitle:(id)arg2 visibility:(int)arg3 cellCls:(Class)arg4;
- (void)setExpanded:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)attrSubtitle;
- (void)setAttrSubtitle:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)expandable;
- (void)setExpandable:(BOOL)arg1;
- (BOOL)expanded;
- (Class)cellCls;
- (void)setCellCls:(Class)arg1;
- (id)expandLinkedItem;
- (void)setExpandLinkedItem:(id)arg1;
- (int)visibility;
- (void)setVisibility:(int)arg1;
- (void).cxx_destruct;
@end
