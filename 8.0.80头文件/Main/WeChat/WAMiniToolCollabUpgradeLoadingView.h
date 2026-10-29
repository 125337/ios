@interface WAMiniToolCollabUpgradeLoadingView : NSObject
{
    UIView * _blockView; // +0x8
    MMToastView * _toastView; // +0x10
    NSTimer * _textTimer; // +0x18
    unsigned long long _textIndex; // +0x20
}
- (void)dealloc;
- (void)startInView:(id)arg1;
- (void)stop;
- (id)blockView;
- (void)setBlockView:(id)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (id)textTimer;
- (void)setTextTimer:(id)arg1;
- (unsigned long long)textIndex;
- (void)setTextIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
