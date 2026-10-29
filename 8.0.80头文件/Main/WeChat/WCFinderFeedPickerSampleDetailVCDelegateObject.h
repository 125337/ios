@interface WCFinderFeedPickerSampleDetailVCDelegateObject : NSObject <WCFinderFeedPickerPreviewViewControllerDelegate>
{
    UIViewController * _hostVC; // +0x8
}
+ (id)delegateObjWithHostVC:(id)arg1;
+ (void)downloadCoverOrThumbImageWithMediaWrap:(id)arg1 completion:(id /* block */)arg2;
- (void)_releaseSelf;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickDoneWithDataItem:(id)arg2;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (void).cxx_destruct;
@end
