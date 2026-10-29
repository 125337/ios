@interface WCFinderInvalidViewController : MMUIViewController <WCFinderInvalidTipsViewDelegate>
{
    WCFinderInvalidTipsInfo * _tipsInfo; // +0x70
    WCFinderInvalidTipsView * _invalidTipsView; // +0x78
}
- (id)initWithInvalidTipsInfo:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (void)finderInvalidTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)arg1;
- (id)tipsInfo;
- (void)setTipsInfo:(id)arg1;
- (id)invalidTipsView;
- (void)setInvalidTipsView:(id)arg1;
- (void).cxx_destruct;
@end
