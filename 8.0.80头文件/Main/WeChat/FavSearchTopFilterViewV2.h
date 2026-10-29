@interface FavSearchTopFilterViewV2 : MMUIView
{
    NSArray * m_types; // +0x8
    NSArray * m_tags; // +0x10
    NSMutableArray * m_titles; // +0x18
    NSMutableArray * m_titleIsTag; // +0x20
    NSSet * m_selectedTypeNames; // +0x28
    NSSet * m_selectedTagNames; // +0x30
    id <FavSearchTopFilterViewDelegate> _delegate; // +0x38
}
- (id)initWithWidth:(double)arg1;
- (void)updateWithWidth:(double)arg1;
- (void)rebuildTitles;
- (void)setTypes:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setSelectedTypeNames:(id)arg1 selectedTagNames:(id)arg2;
- (void)updateView;
- (void)addExtendButton;
- (void)onClickBtn:(id)arg1;
- (void)onExtendPanel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
