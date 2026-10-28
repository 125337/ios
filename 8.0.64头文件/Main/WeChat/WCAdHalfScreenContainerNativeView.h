@interface WCAdHalfScreenContainerNativeView : WCAdHalfScreenContainerBaseView <MMPageSheetBottomViewDelegate>
{
    MMPageSheetBaseView * _sheetView; // +0x8
    WCAdURLImageView * _head; // +0x10
    MMUILabel * _title; // +0x18
    MMUILabel * _desc; // +0x20
    MMUILabel * _tips; // +0x28
}
- (id)initWithContainerInfo:(id)arg1;
- (void)initSubview;
- (void)initCommonUI;
- (void)initContainerUI;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (void).cxx_destruct;
@end
