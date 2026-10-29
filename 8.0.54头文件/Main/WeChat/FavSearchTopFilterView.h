@interface FavSearchTopFilterView : MMUIView
{
    NSArray * m_types; // +0x8
    NSArray * m_tags; // +0x10
    NSMutableArray * m_titles; // +0x18
    id <FavSearchTopFilterViewDelegate> _delegate; // +0x20
}
- (id)initWithWidth:(double)arg1;
- (void)updateWithWidth:(double)arg1;
- (void)setTypes:(id)arg1;
- (void)setTags:(id)arg1;
- (void)updateView;
- (void)onClickBtn:(id)arg1;
- (void)onExtendPanel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

