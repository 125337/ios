@interface MMFinderLiveShowBoxItemsView : MMUIView
{
    MMFinderLiveShowBoxItemsViewConfig * _config; // +0x8
    id /* block */ _onSecKillArriveTime; // +0x10
    id /* block */ _onClickableItemClicked; // +0x18
    NSArray * _items; // +0x20
    NSArray * _tuples; // +0x28
}
+ (double)spacing;
+ (double)borderImageLabelImageToText;
+ (id)filterItems:(id)arg1 withConfig:(id)arg2;
+ (BOOL)canShowAtLeastOneForSize:(CGSize)arg1 config:(id)arg2 items:(id)arg3;
+ (id)createTextItemBy:(id)arg1;
+ (id)basicLabelParamsForTextItem:(id)arg1 withConfig:(id)arg2;
+ (double)widthForTextItem:(id)arg1 withConfig:(id)arg2;
+ (BOOL)canShowTextItem:(id)arg1 withConfig:(id)arg2 inWidth:(double)arg3;
+ (double)widthForImageWithPictureInfo:(id)arg1 height:(double)arg2;
+ (BOOL)canShowImageWithPictureInfo:(id)arg1 inSize:(CGSize)arg2;
+ (double)widthForSecKillLabel:(id)arg1 withConfig:(id)arg2;
+ (BOOL)canShowSecKillLabel:(id)arg1 withConfig:(id)arg2 inWidth:(double)arg3;
+ (double)widthForCountdownWordLabel:(id)arg1 withConfig:(id)arg2;
+ (BOOL)canShowCountdownWordLabel:(id)arg1 withConfig:(id)arg2 inWidth:(double)arg3;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)createViewBy:(id)arg1;
- (id)createCountdownWordViewWithItem:(id)arg1;
- (id)createImageTextLabelWithTextItem:(id)arg1;
- (id)createImageWithPictureInfo:(id)arg1;
- (id)createLineWithInfo:(id)arg1;
- (id)createSecKillLabel:(id)arg1;
- (void)useTuples:(id)arg1;
- (void)updateWithItems:(id)arg1;
- (id)visibleShowBoxItems;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)onSecKillArriveTime;
- (void)setOnSecKillArriveTime:(id /* block */)arg1;
- (id /* block */)onClickableItemClicked;
- (void)setOnClickableItemClicked:(id /* block */)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)tuples;
- (void)setTuples:(id)arg1;
- (void).cxx_destruct;
@end
