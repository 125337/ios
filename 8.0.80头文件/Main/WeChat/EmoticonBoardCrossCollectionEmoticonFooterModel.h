@interface EmoticonBoardCrossCollectionEmoticonFooterModel : NSObject
{
    BOOL _showLoading; // +0x8
    BOOL _showErrorTip; // +0x9
    NSString * _errorTip; // +0x10
    id /* block */ _onTap; // +0x18
}
- (id)errorTip;
- (void)setErrorTip:(id)arg1;
- (BOOL)showLoading;
- (void)setShowLoading:(BOOL)arg1;
- (BOOL)showErrorTip;
- (void)setShowErrorTip:(BOOL)arg1;
- (id /* block */)onTap;
- (void)setOnTap:(id /* block */)arg1;
- (void).cxx_destruct;
@end
