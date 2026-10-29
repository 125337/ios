@interface WASessionNotifyTableViewCell : MMTableViewCell
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSString * _headImageURL; // +0x18
    MMWebImageView * _headImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UIButton * _openButton; // +0x30
    UIView * _sepreateLine; // +0x38
    id <WASessionNotifyTableViewCellDelegate> _cellViewDelegate; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateDataWithDelegate:(id)arg1 userName:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4 isShowSeperateLine:(BOOL)arg5;
- (id)getUserName;
- (id)getNickName;
- (void)initView;
- (void)initHeadImgeView;
- (void)initTitleLabel;
- (void)initOpenButton;
- (void)initSeperateLine;
- (void)layoutSubviews;
- (void)updateData;
- (void)onClickOpenButton:(id)arg1;
- (id)cellViewDelegate;
- (void)setCellViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end
