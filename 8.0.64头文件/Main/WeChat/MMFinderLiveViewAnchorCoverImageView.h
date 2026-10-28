@interface MMFinderLiveViewAnchorCoverImageView : MMUIView
{
    MMLiveTaskId * _taskId; // +0x8
    UIImage * _image; // +0x10
    double _scale; // +0x18
    MMWebImageView * _liveRoomCoverImageViewForAnchor; // +0x20
    MMUIView * _contentView; // +0x28
    MMUIImageView * _midGradientView; // +0x30
    MMUIView * _topMaskView; // +0x38
    CAGradientLayer * _gradientLayer; // +0x40
    NSString * _coverImageURLString; // +0x48
    double _coverImageViewWidth; // +0x50
    double _coverImageViewHeight; // +0x58
    double _coverImageViewScaleRatio; // +0x60
    double _coverImageViewCenterPercent; // +0x68
    UIColor * _mainColor; // +0x70
    UIImageView * _recordLiveBackgroundImageView; // +0x78
}
+ (void)addBottomCorner:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (BOOL)isPortrait;
- (void)layoutUI;
- (id)playerBottomBarBackgroundColor:(id)arg1;
- (void)refreshWitchScale:(double)arg1 coverImageURLString:(id)arg2;
- (void)updateGradientViewWithImage:(id)arg1;
- (void)updateAnchorLiveRoomCoverImageURLString:(id)arg1;
- (void)updateAnchorLiveRoomCoverImage:(id)arg1;
- (void)inner_updateAnchorLiveRoomCoverImage:(id)arg1;
- (void)updateAnchorRecordLiveBackgroundImageViewWithCoverImage:(id)arg1;
- (id)liveRoomCoverImageViewForAnchor;
- (void)createLiveRoomCoverImageViewForAnchor;
- (id)midGradientView;
- (BOOL)isRecordLive;
- (BOOL)showRecordLiveBackgroundImageView;
- (id)finderLiveTask;
- (id)recordLiveBackgroundImageView;
- (id)topMaskView;
- (id)contentView;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (void)setLiveRoomCoverImageViewForAnchor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setMidGradientView:(id)arg1;
- (void)setTopMaskView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)coverImageURLString;
- (void)setCoverImageURLString:(id)arg1;
- (double)coverImageViewWidth;
- (void)setCoverImageViewWidth:(double)arg1;
- (double)coverImageViewHeight;
- (void)setCoverImageViewHeight:(double)arg1;
- (double)coverImageViewScaleRatio;
- (void)setCoverImageViewScaleRatio:(double)arg1;
- (double)coverImageViewCenterPercent;
- (void)setCoverImageViewCenterPercent:(double)arg1;
- (id)mainColor;
- (void)setMainColor:(id)arg1;
- (void)setRecordLiveBackgroundImageView:(id)arg1;
- (void).cxx_destruct;
@end
