@interface WAMenuHeaderTagsView : MMUIView
{
    id <WAMenuHeaderTagsViewDelegate> _delegate; // +0x8
    long long _maxWidth; // +0x10
    NSArray * _tagItemList; // +0x18
    NSMutableArray * _tagButtonList; // +0x20
}
- (void)updateWithTagItemListIfNeeded:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)tagViewMaxWidth;
- (id)generateTagView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)maxWidth;
- (void)setMaxWidth:(long long)arg1;
- (id)tagItemList;
- (void)setTagItemList:(id)arg1;
- (id)tagButtonList;
- (void)setTagButtonList:(id)arg1;
- (void).cxx_destruct;
@end
