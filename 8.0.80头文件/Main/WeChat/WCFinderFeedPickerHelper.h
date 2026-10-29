@interface WCFinderFeedPickerHelper : NSObject <WCFinderFeedPickerViewControllerDelegate>
{
    id /* block */ _onCancel; // +0x8
    id /* block */ _onFinish; // +0x10
    WCFinderFeedPickerViewController * _picker; // +0x18
}
+ (void)pickPostedFeedFromVC:(id)arg1 config:(id /* block */)arg2 onCancel:(id /* block */)arg3 onFinish:(id /* block */)arg4;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (id /* block */)onFinish;
- (void)setOnFinish:(id /* block */)arg1;
- (id)picker;
- (void)setPicker:(id)arg1;
- (void).cxx_destruct;
@end
