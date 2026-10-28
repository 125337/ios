@interface MMMusicMVRecommendTableCell : UITableViewCell
{
    MMWebImageView * _webImageView; // +0x8
    UIView * _lineView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    MMMusicMVModel * _model; // +0x28
    UIView * _likeContainerView; // +0x30
    UIImageView * _likeLogoImageView; // +0x38
    UILabel * _likeCountLabel; // +0x40
    UIImageView * _activedLogoImageView; // +0x48
    UITapGestureRecognizer * _gesture; // +0x50
    id <MMMusicMVRecommendTableCellDelegate> _delegate; // +0x58
}
+ (id)identifier;
+ (double)prefferedHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onClick;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithModel:(id)arg1 songLikeCountIfMvWithBeat:(unsigned long long)arg2;
- (void)onActive;
- (void)onUnactive;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
