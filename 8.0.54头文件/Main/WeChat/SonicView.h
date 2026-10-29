@interface SonicView : MMScrollView
{
    NSMutableArray * _headImageList; // +0x10
    UIView * m_containView; // +0x18
    NSMutableArray * _firstPageRandomArray; // +0x20
}
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)getFrameByIndex:(int)arg1;
- (int)getRandomNumber;
- (void)popupView:(id)arg1;
- (void)fadeinItems:(id)arg1;
- (void)addHeadImageList:(id)arg1;
- (void)onGetMsg:(id)arg1 PushContact:(id)arg2;
- (void)onVerifyOk:(id)arg1;
- (id)m_containView;
- (void)setM_containView:(id)arg1;
- (void).cxx_destruct;
@end

