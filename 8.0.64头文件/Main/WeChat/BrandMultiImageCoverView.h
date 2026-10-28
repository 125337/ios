@interface BrandMultiImageCoverView : UIStackView
{
    UIImageView * _leftCoverImageView; // +0x8
    UIImageView * _middleCoverImageView; // +0x10
    UIImageView * _rightCoverImageView; // +0x18
}
- (id)init;
- (id)createCoverImageView;
- (void)setupUI;
- (void)updateWithImageURLs:(id)arg1 appMsgUrl:(id)arg2;
- (id)leftCoverImageView;
- (void)setLeftCoverImageView:(id)arg1;
- (id)middleCoverImageView;
- (void)setMiddleCoverImageView:(id)arg1;
- (id)rightCoverImageView;
- (void)setRightCoverImageView:(id)arg1;
- (void).cxx_destruct;
@end
