@interface StorageHardlinkCell : UITableViewCell
{
    BOOL _newStyle; // +0x8
    NSString * _userName; // +0x10
    UIImageView * _resourceIcon; // +0x18
    UILabel * _sourceLabel; // +0x20
    UILabel * _detailLabel; // +0x28
    UILabel * _timeLabel; // +0x30
    UIView * _seperateLine; // +0x38
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateCellWithUserName:(id)arg1 sessionName:(id)arg2 detail:(id)arg3 time:(id)arg4 finalCell:(BOOL)arg5;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)resourceIcon;
- (void)setResourceIcon:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
