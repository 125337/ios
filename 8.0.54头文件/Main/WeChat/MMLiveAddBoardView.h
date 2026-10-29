@interface MMLiveAddBoardView : UIView
{
    MMLiveAddBoardViewItem * _sendLocationItem; // +0x8
    BOOL _isRemainSeeItemEnable; // +0x10
    BOOL _isSendLocationItemEnable; // +0x11
    double _preferHeight; // +0x18
    id /* block */ _addBoardViewItemClickBlock; // +0x20
    MMLiveAddBoardViewItem * _remainSeeItem; // +0x28
    CAShapeLayer * _shapeLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)remainSeeItem;
- (id)sendLocationItem;
- (void)clickFunction:(unsigned long long)arg1;
- (void)setIsRemainSeeItemEnable:(BOOL)arg1;
- (double)preferHeight;
- (void)setPreferHeight:(double)arg1;
- (id /* block */)addBoardViewItemClickBlock;
- (void)setAddBoardViewItemClickBlock:(id /* block */)arg1;
- (BOOL)isRemainSeeItemEnable;
- (BOOL)isSendLocationItemEnable;
- (void)setIsSendLocationItemEnable:(BOOL)arg1;
- (void)setRemainSeeItem:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void).cxx_destruct;
@end

