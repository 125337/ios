@interface BrandProfileFuwuBaseView : MMUIView
{
    BOOL _shouldHideTopDividingLine; // +0x8
    id <BrandProfileFuwuBaseViewDelegate> _delegate; // +0x10
}
- (void)updateFuwuInfo:(id)arg1;
- (double)calcuteFuwuViewHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldHideTopDividingLine;
- (void)setShouldHideTopDividingLine:(BOOL)arg1;
- (void).cxx_destruct;
@end

