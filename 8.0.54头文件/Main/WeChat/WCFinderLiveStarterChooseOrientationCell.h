@interface WCFinderLiveStarterChooseOrientationCell : UITableViewCell
{
    WCFinderLiveStarterLiveModeSubItem * _item; // +0x8
    UIView * _bgView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _stateLabel; // +0x20
    UIImageView * _selectStateImg; // +0x28
    MMUIView * _redDotView; // +0x30
}
+ (id)cellIdentifier;
- (void)updateItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)bgView;
- (id)titleLabel;
- (id)stateLabel;
- (id)selectStateImg;
- (id)redDotView;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setBgView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void)setSelectStateImg:(id)arg1;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end

