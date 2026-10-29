@interface MMFinderLiveFeedStreamBarrageItemView : UIView
{
    MMFinderLiveFeedStreamBarrageItem * _item; // +0x8
    MMFinderLiveFeedStreamBarrageStyleConfig * _styleConfig; // +0x10
    double _maxWidth; // +0x18
}
- (id)initWithStyleConfig:(id)arg1 maxWidth:(double)arg2;
- (CGRect)presentationFrame;
- (id)item;
- (void)setItem:(id)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
