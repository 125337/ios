@interface WCPayGPOrderHistoryTableCell : MMTableViewCell
{
    AAListRecord * _recordData; // +0x8
    MMHeadImageView * _headImgView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    MMUILabel * _subLabel; // +0x20
    MMUILabel * _launchDateLabel; // +0x28
    MMUILabel * _moneyLabel; // +0x30
    MMUILabel * _moneyUnitLabel; // +0x38
    MMUILabel * _statusLabel; // +0x40
    UIView * _sepLine; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupContentView;
- (void)updateContentWithRecordData:(id)arg1 recordScene:(unsigned long long)arg2;
- (id)recordData;
- (void)setRecordData:(id)arg1;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)subLabel;
- (void)setSubLabel:(id)arg1;
- (id)launchDateLabel;
- (void)setLaunchDateLabel:(id)arg1;
- (id)moneyLabel;
- (void)setMoneyLabel:(id)arg1;
- (id)moneyUnitLabel;
- (void)setMoneyUnitLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (void).cxx_destruct;
@end
