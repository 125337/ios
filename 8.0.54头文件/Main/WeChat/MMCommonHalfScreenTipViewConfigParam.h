@interface MMCommonHalfScreenTipViewConfigParam : NSObject
{
    unsigned int _m_viewConfigNavigationBarFlag; // +0x8
    NSString * _titleViewWord; // +0x10
    double _titleViewTop; // +0x18
    NSString * _descViewWord; // +0x20
    NSString * _operateButtonTitle; // +0x28
    double _descContentViewTop; // +0x30
    double _descContentViewBottom; // +0x38
    UIButton * _operateButton; // +0x40
    UIButton * _cancelButton; // +0x48
    double _operateButtonBottom; // +0x50
    long long _titleViewTextAlignment; // +0x58
    long long _descViewTextAlignment; // +0x60
    id /* block */ _operateBlock; // +0x68
    id /* block */ _cancelBlock; // +0x70
    NSArray * _arrDescContentTitle; // +0x78
}
- (id)init;
- (unsigned int)m_viewConfigNavigationBarFlag;
- (void)setM_viewConfigNavigationBarFlag:(unsigned int)arg1;
- (id)titleViewWord;
- (void)setTitleViewWord:(id)arg1;
- (double)titleViewTop;
- (void)setTitleViewTop:(double)arg1;
- (id)descViewWord;
- (void)setDescViewWord:(id)arg1;
- (id)operateButtonTitle;
- (void)setOperateButtonTitle:(id)arg1;
- (double)descContentViewTop;
- (void)setDescContentViewTop:(double)arg1;
- (double)descContentViewBottom;
- (void)setDescContentViewBottom:(double)arg1;
- (id)operateButton;
- (void)setOperateButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (double)operateButtonBottom;
- (void)setOperateButtonBottom:(double)arg1;
- (long long)titleViewTextAlignment;
- (void)setTitleViewTextAlignment:(long long)arg1;
- (long long)descViewTextAlignment;
- (void)setDescViewTextAlignment:(long long)arg1;
- (id /* block */)operateBlock;
- (void)setOperateBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id)arrDescContentTitle;
- (void)setArrDescContentTitle:(id)arg1;
- (void).cxx_destruct;
@end

