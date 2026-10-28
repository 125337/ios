@interface MMFinderLiveGoodsEmptyView : UIView <ILinkEventExt>
{
    BOOL _isLastLayoutOrientationIsPortrait; // +0x8
    BOOL _forceLayoutUI; // +0x9
    id <MMFinderLiveGoodsEmptyViewDelegate> _delegate; // +0x10
    FinderDirectAddPreviousLiveProductsPageInfo * _addPreviousLiveProductsPageInfo; // +0x18
    RichTextView * _textView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setAddPreviousLiveProductsPageInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)textFont;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)addPreviousLiveProductsPageInfo;
- (id)textView;
- (void)setTextView:(id)arg1;
- (BOOL)isLastLayoutOrientationIsPortrait;
- (void)setIsLastLayoutOrientationIsPortrait:(BOOL)arg1;
- (BOOL)forceLayoutUI;
- (void)setForceLayoutUI:(BOOL)arg1;
- (void).cxx_destruct;
@end
