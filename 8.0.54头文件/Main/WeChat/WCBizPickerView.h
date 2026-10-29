@interface WCBizPickerView : NSObject <UIPopoverPresentationControllerDelegate>
{
    UIPickerView * m_pickerView; // +0x8
    id <WCBizPickerViewDelegate> _m_delegate; // +0x10
    UIView * _contentView; // +0x18
    UIView * _transparentView; // +0x20
    UIViewController * _contentVC; // +0x28
    long long _lastOri; // +0x30
}
+ (CGSize)getPickerViewSize;
- (id)initWithDelegate:(id)arg1;
- (void)removeAllPickerViewDelegate;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)showInView:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setSelectedRow:(long long)arg1 Component:(long long)arg2;
- (void)reloadComponent:(long long)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)transparentView;
- (void)setTransparentView:(id)arg1;
- (id)contentVC;
- (void)setContentVC:(id)arg1;
- (long long)lastOri;
- (void)setLastOri:(long long)arg1;
- (void).cxx_destruct;
@end

