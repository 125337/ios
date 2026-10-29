@interface WCAdConfirmHalfScreenAdapter : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    id <WCAdConfirmHalfScreenAdapterDelegate> _delegate; // +0x8
    MMPageSheetAdapter * _adapter; // +0x10
    MMUIView * _topInfoView; // +0x18
    MMUIView * _descInfoView; // +0x20
    WCAdURLImageView * _iconView; // +0x28
    MMUILabel * _nameView; // +0x30
    MMUILabel * _descTips; // +0x38
    MMUIView * _descCellView; // +0x40
    MMUILabel * _confirmInfoLabel; // +0x48
    MMUILabel * _descExplanin; // +0x50
    UIView * _topLineView; // +0x58
    UIView * _bottomLineView; // +0x60
    NSString * _requestIcon; // +0x68
    NSString * _requestName; // +0x70
    NSString * _desc; // +0x78
    NSString * _confirmInfo; // +0x80
    NSString * _confirmDesc; // +0x88
    NSString * _confirmEmptyDesc; // +0x90
    NSDictionary * _extInfo; // +0x98
}
- (id)initWithRequestIcon:(id)arg1 requestName:(id)arg2 desc:(id)arg3 confirmInfo:(id)arg4 confirmDesc:(id)arg5 confirmEmptyDesc:(id)arg6 extInfo:(id)arg7;
- (void)genHalfScreenView;
- (void)layoutWidthDependentViews;
- (void)showHalfScreenView;
- (void)hideHalfScreenView;
- (id)getRequestInfoView;
- (id)getDescInfoView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetDidRotation:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)topInfoView;
- (void)setTopInfoView:(id)arg1;
- (id)descInfoView;
- (void)setDescInfoView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)nameView;
- (void)setNameView:(id)arg1;
- (id)descTips;
- (void)setDescTips:(id)arg1;
- (id)descCellView;
- (void)setDescCellView:(id)arg1;
- (id)confirmInfoLabel;
- (void)setConfirmInfoLabel:(id)arg1;
- (id)descExplanin;
- (void)setDescExplanin:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
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
