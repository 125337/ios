@interface WCPlayLiveWithoutLoginHeadView : UIView
{
    MMWebImageView * _headImageView; // +0x8
    MMUILabel * _nicknameLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setup;
- (void)updateViewModel:(id)arg1;
- (id)headImageView;
- (id)nicknameLabel;
- (void)setHeadImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void).cxx_destruct;
@end
