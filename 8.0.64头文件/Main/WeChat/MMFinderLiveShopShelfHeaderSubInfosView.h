@interface MMFinderLiveShopShelfHeaderSubInfosView : UIView <MMWebImageViewDelegate>
{
    id <MMFinderLiveShopShelfHeaderSubInfosViewLoadDelegate> _delegate; // +0x8
    id /* block */ _onScoreClicked; // +0x10
    NSArray * _tuples; // +0x18
}
- (void)layoutSubviews;
- (id)addLine;
- (void)updateWithShopWindowInfo:(id)arg1;
- (BOOL)isEmpty;
- (void)onLoadImageOK:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)onScoreClicked;
- (void)setOnScoreClicked:(id /* block */)arg1;
- (id)tuples;
- (void)setTuples:(id)arg1;
- (void).cxx_destruct;
@end
