@interface GCRecommendTagView : UIView
{
    MMWebImageView * _imgView; // +0x8
    UILabel * _label; // +0x10
    JumpInfo * _jumpInfo; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)handleTap;
- (void)configureWithChatroomTagInfo:(id)arg1 layout:(id)arg2;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
