@interface WXGRoamChooseRangeExactUserCell : UITableViewCell
{
    UIImageView * _selectedImage; // +0x8
    UIButton * _rightButton; // +0x10
    MMHeadImageView * _headIcon; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _seperator; // +0x28
}
+ (double)cellHeight;
- (void)setCellWidth:(double)arg1 type:(unsigned long long)arg2 selected:(BOOL)arg3 sessionName:(id)arg4 showSize:(BOOL)arg5 size:(unsigned long long)arg6;
- (void)initView;
- (void)onDetail;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)headIcon;
- (void)setHeadIcon:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (void).cxx_destruct;
@end
