@interface WCAdConfirmHalfScreenAdapter : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    id <WCAdConfirmHalfScreenAdapterDelegate> _delegate; // +0x8
    MMPageSheetAdapter * _adapter; // +0x10
    NSString * _requestIcon; // +0x18
    NSString * _requestName; // +0x20
    NSString * _desc; // +0x28
    NSString * _confirmInfo; // +0x30
    NSString * _confirmDesc; // +0x38
    NSString * _confirmEmptyDesc; // +0x40
    NSDictionary * _extInfo; // +0x48
}
- (id)initWithRequestIcon:(id)arg1 requestName:(id)arg2 desc:(id)arg3 confirmInfo:(id)arg4 confirmDesc:(id)arg5 confirmEmptyDesc:(id)arg6 extInfo:(id)arg7;
- (void)genHalfScreenView;
- (void)showHalfScreenView;
- (void)hideHalfScreenView;
- (id)getRequestInfoView;
- (id)getDescInfoView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)requestIcon;
- (void)setRequestIcon:(id)arg1;
- (id)requestName;
- (void)setRequestName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)confirmInfo;
- (void)setConfirmInfo:(id)arg1;
- (id)confirmDesc;
- (void)setConfirmDesc:(id)arg1;
- (id)confirmEmptyDesc;
- (void)setConfirmEmptyDesc:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
