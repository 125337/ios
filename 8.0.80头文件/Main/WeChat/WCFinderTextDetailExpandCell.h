@interface WCFinderTextDetailExpandCell : UICollectionViewCell
{
    id <WCFinderTextDetailItemDelegate> _delegate; // +0x8
    UIButton * _button; // +0x10
    _WCFinderTextDetailSection * _section; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onClickExpand;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (void).cxx_destruct;
@end
