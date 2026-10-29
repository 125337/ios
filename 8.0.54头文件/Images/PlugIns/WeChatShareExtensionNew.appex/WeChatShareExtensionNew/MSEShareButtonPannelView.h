@interface MSEShareButtonPannelView : UIView
{
    BOOL _bInvalid; // +0x8
    BOOL _isMutiPhotoShare; // +0x9
    id <MSEShareButtonPannelViewDelegate> _delegate; // +0x10
    long long _contentType; // +0x18
    double _videoDuration; // +0x20
    UIButton * _shareToFriendRow; // +0x28
    UIImageView * _friendImgView; // +0x30
    UILabel * _friendlabel; // +0x38
    UIButton * _shareToTimelineRow; // +0x40
    UIImageView * _timelineImgView; // +0x48
    UILabel * _timelinelabel; // +0x50
    UIButton * _shareToStateRow; // +0x58
    UIImageView * _stateImgView; // +0x60
    UILabel * _stateLabel; // +0x68
    UIButton * _shareToFavRow; // +0x70
    UIImageView * _favImgView; // +0x78
    UILabel * _favlabel; // +0x80
    UIButton * _continueToShareRow; // +0x88
}
+ (double)getShareButtonPannelViewHeightWithContentType:(long long)arg1;
+ (BOOL)shouldShowTextState;
- (id)initPannelViewWithContainerWidth:(double)arg1 withContentType:(long long)arg2 isMutiPhotoShare:(BOOL)arg3;
- (id)initPannelViewWithContainerWidth:(double)arg1 withContentType:(long long)arg2 isMutiPhotoShare:(BOOL)arg3 videoDuration:(double)arg4;
- (void)initSubViews;
- (void)initShareFriendRow;
- (void)initShareTimelineRow;
- (void)initShareStateRow;
- (void)initShareFavRow;
- (void)invalidPannel;
- (void)initContinueToShareRow;
- (void)setIsMutiPhotoShare:(BOOL)arg1;
- (void)shareToFriendBtnPress:(id)arg1;
- (void)shareToTimelineBtnPress:(id)arg1;
- (void)shareToStateBtnPress:(id)arg1;
- (void)shareToFavBtnPress:(id)arg1;
- (void)continueToShareBtnPress:(id)arg1;
- (BOOL)bInvalid;
- (void)setBInvalid:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)contentType;
- (void)setContentType:(long long)arg1;
- (BOOL)isMutiPhotoShare;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id)shareToFriendRow;
- (void)setShareToFriendRow:(id)arg1;
- (id)friendImgView;
- (void)setFriendImgView:(id)arg1;
- (id)friendlabel;
- (void)setFriendlabel:(id)arg1;
- (id)shareToTimelineRow;
- (void)setShareToTimelineRow:(id)arg1;
- (id)timelineImgView;
- (void)setTimelineImgView:(id)arg1;
- (id)timelinelabel;
- (void)setTimelinelabel:(id)arg1;
- (id)shareToStateRow;
- (void)setShareToStateRow:(id)arg1;
- (id)stateImgView;
- (void)setStateImgView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)shareToFavRow;
- (void)setShareToFavRow:(id)arg1;
- (id)favImgView;
- (void)setFavImgView:(id)arg1;
- (id)favlabel;
- (void)setFavlabel:(id)arg1;
- (id)continueToShareRow;
- (void)setContinueToShareRow:(id)arg1;
- (void).cxx_destruct;
@end

