@interface WCAdConfirmHalfScreenBaseView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WCAdConfirmHalfScreenBaseViewDelegate> _delegate; // +0x8
    WCAdConfirmHalfScreenBaseInfo * _confirmInfo; // +0x10
    MMWebImageView * _head; // +0x18
    MMUILabel * _name; // +0x20
    MMUILabel * _title; // +0x28
    MMUILabel * _desc; // +0x30
    MMUILabel * _extraDesc; // +0x38
}
- (id)initWithConfirmInfo:(id)arg1;
- (void)initCommonUI;
- (void)initConfirmUI;
- (void)layoutConfirmUI;
- (id)genLabel:(int)arg1;
- (void)fitLabel:(id)arg1 key:(int)arg2;
- (id)fetchAdContent:(int)arg1;
- (id)fetchFont:(int)arg1;
- (double)fetchLabelMaxWidth:(int)arg1;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)pageSheetDidRotation;
- (void)pageSheetDidDisappear;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)confirmInfo;
- (void)setConfirmInfo:(id)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)extraDesc;
- (void)setExtraDesc:(id)arg1;
- (void).cxx_destruct;
@end
