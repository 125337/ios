@interface WCCanvasTextAreaComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    RichTextView * _contentLabel; // +0x8
}
+ (id)getRichTextFromSvrResponse:(id)arg1;
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
+ (CGSize)calcContentSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3 width:(double)arg4;
- (void)alignTextToCenter;
- (void)adjustOneLineStyles:(id)arg1 inRect:(CGRect)arg2;
- (void)downloadAllIconImage;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)alignTextWithHorizontalAlign:(long long)arg1 verticalAlign:(long long)arg2;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end

