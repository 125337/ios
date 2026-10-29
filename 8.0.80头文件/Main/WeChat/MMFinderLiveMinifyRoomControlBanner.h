@interface MMFinderLiveMinifyRoomControlBanner : UIControl <UIGestureRecognizerDelegate>
{
    BOOL _isTransToFullScreen; // +0x8
    NSData * _minifyLastBuffer; // +0x10
    UIView * _operationView; // +0x18
    id /* block */ _getExtraTopMarginBlock; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    UIView * _containerView; // +0x30
    MMUIImageView * _imageView; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UITapGestureRecognizer * _tapGesture; // +0x48
}
+ (CGSize)viewSizeByBannerInfo:(id)arg1;
+ (CGSize)expendViewSizeByBannerInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initGesture;
- (void)layoutSubviews;
- (id)containerView;
- (id)imageView;
- (id)titleLabel;
- (void)setMinifyLastBuffer:(id)arg1;
- (void)setBannerInfo:(id)arg1;
- (id)bannerInfo;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)requestTransfromLiveRoomState;
- (id)liveTask;
- (id)minifyLastBuffer;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id /* block */)getExtraTopMarginBlock;
- (void)setGetExtraTopMarginBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (BOOL)isTransToFullScreen;
- (void)setIsTransToFullScreen:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
