@interface WCFinderFeedLBSRecommendReasonView : UIView
{
    WCFinderFeedLBSRecommendReasonViewConfig * _config; // +0x8
    UILabel * _label; // +0x10
}
+ (double)heightForReasonItems:(id)arg1 config:(id)arg2 width:(double)arg3;
+ (id)createReasonItemsStr:(id)arg1 config:(id)arg2;
+ (id)createReasonItemStr:(id)arg1 config:(id)arg2;
+ (id)createReasonItemPaddingStr:(id)arg1 config:(id)arg2;
+ (id)createClearPaddingAttrString:(double)arg1 font:(id)arg2;
+ (id)attachmentWithView:(id)arg1 font:(id)arg2;
+ (id)attachmentWithImage:(id)arg1 size:(CGSize)arg2 font:(id)arg3;
+ (id)viewWithImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateWithReasonItems:(id)arg1 config:(id)arg2;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
