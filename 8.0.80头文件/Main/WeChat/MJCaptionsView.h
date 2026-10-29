@interface MJCaptionsView : UIView
{
    NSArray * _captionItems; // +0x8
    map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>> _labelsByCaptionItem; // +0x10
    CGRect _currentBounds; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutCaptionLabels;
- (void)updateWithCaptionItems:(id)arg1;
- (id)captionItems;
- (void)setCaptionItems:(id)arg1;
- (map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>>)labelsByCaptionItem;
- (void)setLabelsByCaptionItem:(map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>>)arg1;
- (CGRect)currentBounds;
- (void)setCurrentBounds:(CGRect)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
