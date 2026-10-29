@interface BraceletStepScoreViewV2 : UIView
{
    BOOL _alignSelfLikeInfoWithLikeButton; // +0x8
    BOOL _isLike; // +0x9
    BOOL _isSelf; // +0xa
    BOOL _isExpanded; // +0xb
    BOOL _hasTodaySportTitleCenterYInStepView; // +0xc
    unsigned int _score; // +0x10
    unsigned int _likeCount; // +0x14
    id <BraceletStepScoreDelegate> _delegate; // +0x18
    double _todaySportTitleWidth; // +0x20
    double _todaySportTitleCenterYInStepView; // +0x28
    NSArray * _workoutRecords; // +0x30
    NSArray * _arrRecords; // +0x38
    long long _enterScene; // +0x40
    BraceletRankNewLikeButton * _likeButton; // +0x48
    UIControl * _selfLikeInfoView; // +0x50
    UILabel * _likePrefixLabel; // +0x58
    UIImageView * _likeIconView; // +0x60
    UILabel * _likeCountLabel; // +0x68
}
+ (double)calculateHeight:(id)arg1;
+ (double)p_todaySportTitleWidth;
+ (double)p_todaySportTitleWidthForRecords:(id)arg1 font:(id)arg2;
+ (double)p_valueTextWidthWithValue:(id)arg1 unit:(id)arg2;
+ (double)p_maxValueWidthForRecords:(id)arg1 score:(unsigned int)arg2;
+ (unsigned long long)p_lineCountForText:(id)arg1 font:(id)arg2 width:(double)arg3;
+ (BOOL)p_isTextTruncated:(id)arg1 font:(id)arg2 width:(double)arg3;
+ (BOOL)p_hasTruncatedWorkoutRecordNameForRecords:(id)arg1 font:(id)arg2 width:(double)arg3;
+ (double)p_workoutRecordsHeightForRecords:(id)arg1 expanded:(BOOL)arg2 font:(id)arg3 width:(double)arg4;
+ (id)p_workoutDisplayTitleWithRecord:(id)arg1;
+ (id)p_checkInImageUrlForRecord:(id)arg1;
+ (BOOL)p_hasCheckInImageForRecord:(id)arg1;
+ (id)getWorkoutRecords:(id)arg1;
- (id)initWithScore:(unsigned int)arg1 likeCount:(unsigned int)arg2 isLike:(BOOL)arg3 isSelf:(BOOL)arg4 arrRecords:(id)arg5 width:(double)arg6;
- (id)initWithScore:(unsigned int)arg1 likeCount:(unsigned int)arg2 isLike:(BOOL)arg3 isSelf:(BOOL)arg4 arrRecords:(id)arg5 width:(double)arg6 expanded:(BOOL)arg7;
- (id)initWithScore:(unsigned int)arg1 likeCount:(unsigned int)arg2 isLike:(BOOL)arg3 isSelf:(BOOL)arg4 arrRecords:(id)arg5 width:(double)arg6 expanded:(BOOL)arg7 enterScene:(long long)arg8;
- (void)initView;
- (void)p_addImageCountBadgeToImageView:(id)arg1 count:(unsigned long long)arg2;
- (id)p_likeCountText;
- (double)p_todaySportTitleCenterYInStepView;
- (void)p_addSelfLikeInfoView;
- (void)p_layoutSelfLikeInfoContent;
- (void)p_layoutSelfLikeInfoNearTodaySportTitle;
- (void)setTodaySportTitleCenterYInStepView:(double)arg1;
- (void)setAlignSelfLikeInfoWithLikeButton:(BOOL)arg1;
- (void)p_layoutLikeButtonNearHeaderWithTitleWidth:(double)arg1;
- (void)onClickExpandButton;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickSelfLikeInfoView;
- (void)p_updateSelfLikeInfoView;
- (void)clickLikeAnimate:(BOOL)arg1;
- (void)clickUnlikeAnimate:(BOOL)arg1;
- (id)p_hitTestTargetView:(id)arg1 point:(CGPoint)arg2 withEvent:(id)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onCheckInImageTap:(id)arg1;
- (id)p_checkInPreviewImageURLs;
- (id)p_checkInPreviewImageTitles;
- (id)p_checkInPreviewImagesWithFallbackImage:(id)arg1;
- (id)p_hostViewController;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)todaySportTitleWidth;
- (void)setTodaySportTitleWidth:(double)arg1;
- (double)todaySportTitleCenterYInStepView;
- (BOOL)alignSelfLikeInfoWithLikeButton;
- (unsigned int)score;
- (void)setScore:(unsigned int)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)workoutRecords;
- (void)setWorkoutRecords:(id)arg1;
- (id)arrRecords;
- (void)setArrRecords:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)selfLikeInfoView;
- (void)setSelfLikeInfoView:(id)arg1;
- (id)likePrefixLabel;
- (void)setLikePrefixLabel:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)likeCountLabel;
- (void)setLikeCountLabel:(id)arg1;
- (BOOL)hasTodaySportTitleCenterYInStepView;
- (void)setHasTodaySportTitleCenterYInStepView:(BOOL)arg1;
- (void).cxx_destruct;
@end
