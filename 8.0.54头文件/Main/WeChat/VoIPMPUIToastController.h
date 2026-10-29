@interface VoIPMPUIToastController : NSObject
{
    UIView * _view; // +0x8
    VoIPMPUIToastTemporaryView * _currentTemporaryView; // +0x10
    id /* block */ _blockDelay; // +0x18
}
+ (double)contentViewHeight;
- (void)clearCurrentTemporaryViewAfterDuration:(double)arg1;
- (void)showContent:(id)arg1 displayDuration:(double)arg2;
- (id)init;
- (id)view;
- (void)setView:(id)arg1;
- (id)currentTemporaryView;
- (void)setCurrentTemporaryView:(id)arg1;
- (id /* block */)blockDelay;
- (void)setBlockDelay:(id /* block */)arg1;
- (void).cxx_destruct;
@end

