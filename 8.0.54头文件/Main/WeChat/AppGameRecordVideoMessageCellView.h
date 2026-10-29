@interface AppGameRecordVideoMessageCellView : CommonMessageCellView <MMMediaRecorderPlayerDelegate>
{
    MMWebImageView * _imageView; // +0xa8
    MMWebImageView * _maskView; // +0xb0
    UIImageView * _playIconImgView; // +0xb8
    MMUILabel * _titleLabel; // +0xc0
    MMUILabel * _descLabel; // +0xc8
    double _descHeight; // +0xd0
    double _currentY; // +0xd8
    MMUIWindow * _fullScreenWindow; // +0xe0
}
- (id)init;
- (BOOL)canBeReused;
- (void)onTouchUpInside;
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (void)initBgImageView;
- (void)initTitleView;
- (void)initDescView;
- (void)initPageImageView;
- (void)initPlayImageView;
- (void)initMaskImageView;
- (BOOL)isReady;
- (void)checkReady;
- (BOOL)onClickAction:(id)arg1;
- (void)onCreate;
- (void)onStartPlayer;
- (void)onPausePlayer;
- (void)onClosePlayer;
- (void)onEndPlayer;
- (void)onForward;
- (void)onDirect:(id)arg1;
- (id)getMessageWrap;
- (void)openAppBrand:(id)arg1 oMessageWrap:(id)arg2;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)playIconImgView;
- (void)setPlayIconImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (double)descHeight;
- (void)setDescHeight:(double)arg1;
- (double)currentY;
- (void)setCurrentY:(double)arg1;
- (id)fullScreenWindow;
- (void)setFullScreenWindow:(id)arg1;
- (void).cxx_destruct;
@end

