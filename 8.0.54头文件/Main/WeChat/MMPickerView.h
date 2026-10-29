@interface MMPickerView : NSObject <UIPopoverPresentationControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView * m_pickerView; // +0x8
    id <MMPickerViewDelegate> m_delegate; // +0x10
    int m_curSession; // +0x18
    NSMutableArray * m_arrSessions; // +0x20
    NSMutableArray * m_arrRows; // +0x28
    NSMutableDictionary * m_dicSelectionIndex; // +0x30
    double m_fLeftWidth; // +0x38
    UIView * _contentView; // +0x40
    UIView * _transparentView; // +0x48
    UIViewController * _popoverControllerNew; // +0x50
    long long _lastOri; // +0x58
}
+ (CGSize)getPickerViewSize;
- (void)initView;
- (id)initWithRows:(id)arg1;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)showInView:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)setLeftWidth:(double)arg1;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)UIPickerViewDidCancel;
- (void)UIPickerViewDidFinish;
- (void)setSelectedRow:(long long)arg1 atSession:(long long)arg2;
- (void)setSelectedRows:(id)arg1;
- (id)m_pickerView;
- (void)setM_pickerView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_dicSelectionIndex;
- (void)setM_dicSelectionIndex:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)transparentView;
- (void)setTransparentView:(id)arg1;
- (id)popoverControllerNew;
- (void)setPopoverControllerNew:(id)arg1;
- (long long)lastOri;
- (void)setLastOri:(long long)arg1;
- (void).cxx_destruct;
@end

