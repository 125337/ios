@interface MsgBigFileDeleteSelectView : MMUIButton
{
    BOOL _deleteAfterSend; // +0x8
    id /* block */ _onStatusChanged; // +0x10
    UIImageView * _selectIconView; // +0x18
    MMUILabel * _deleteTipLabel; // +0x20
    MMUILabel * _deleteDescLabel; // +0x28
}
- (id)initWithSelected:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)selectIconImage;
- (void)layoutSubviews;
- (void)onDeleteAfterSendSelect:(id)arg1;
- (BOOL)deleteAfterSend;
- (void)setDeleteAfterSend:(BOOL)arg1;
- (id /* block */)onStatusChanged;
- (void)setOnStatusChanged:(id /* block */)arg1;
- (id)selectIconView;
- (void)setSelectIconView:(id)arg1;
- (id)deleteTipLabel;
- (void)setDeleteTipLabel:(id)arg1;
- (id)deleteDescLabel;
- (void)setDeleteDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
