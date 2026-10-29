@interface BrandSingleAuthHistoryTableViewCell : UITableViewCell
{
    BOOL _isEnd; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _timeLabel; // +0x18
    UIView * _seperatorLine; // +0x20
    UIView * _endLine; // +0x28
    UIView * _spaceView; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)applyRecord:(id)arg1 isEnd:(BOOL)arg2;
- (void)configureLayout;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)formatTime:(int)arg1;
- (id)spaceView;
- (id)endLine;
- (id)seperatorLine;
- (id)titleLabel;
- (id)timeLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setSeperatorLine:(id)arg1;
- (void)setEndLine:(id)arg1;
- (void)setSpaceView:(id)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

