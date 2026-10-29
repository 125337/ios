@interface WCFinderOrderShareCellViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)titleFont;
+ (id)tagFont;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)productsWordingForWidth:(double)arg1 font:(id)arg2;
- (CGSize)defaultContentViewSize;
- (double)estimateWidth;
- (id)item;
- (id)productImageURL;
- (id)stateWording;
- (id)priceWording;
@end

