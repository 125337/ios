@interface MMFavBaselineComponent : MMComponent <IStrangerContactMgrExt, IFavoritesExt>
{
    UIImageView * m_logoImgView; // +0x10
    FavAttributeCPLabel * m_authorNameLabel; // +0x18
    FavAttributeCPLabel * m_sourceNameLabel; // +0x20
    MMUILabel * m_nameTailLabel; // +0x28
    MMUILabel * m_timeLabel; // +0x30
    MMUILabel * m_dataSizeLabel; // +0x38
    MMUILabel * m_usedTimesLabel; // +0x40
    NSMutableArray * m_tagList; // +0x48
    MMUIButton * m_failButtom; // +0x50
    FavActivityIndicatorView * m_activityIndicator; // +0x58
    BOOL m_uploadStatusShowed; // +0x60
    UIView * m_newPostStatusView; // +0x68
    double m_leftOriginXForTags; // +0x70
    NSMutableArray * m_tagBtnsArray; // +0x78
    NSMutableArray * m_tagBtnTitles; // +0x80
    id <MMFavCellComponentDelegate> _delegate; // +0x88
}
+ (double)calHeightWithComData:(id)arg1;
+ (BOOL)needShowTagList:(id)arg1;
+ (BOOL)shouldUseNewPostStatusStyleForComData:(id)arg1;
+ (double)newPostStatusWidthForItem:(id)arg1;
+ (double)computeHeightWith:(id)arg1 WithOriginX:(double)arg2 MaxOriginX:(double)arg3 ComWidth:(double)arg4 ComHeight:(double)arg5;
- (void)configContentLayout;
- (void)configLabel;
- (id)createNewPostStatusViewForItem:(id)arg1 uploadFail:(BOOL)arg2 rowHeight:(double)arg3;
- (void)refreshNewPostStatusViewWithUploadFail:(BOOL)arg1;
- (void)layoutSeparatorLineWithOriginX:(double *)arg1;
- (void)layoutSeparatorLineWithOriginX:(double *)arg1 withOriginY:(double)arg2;
- (double)layoutTags:(id)arg1 WithOriginX:(double)arg2 MaxOriginX:(double)arg3;
- (double)realLayoutTagButtons:(id)arg1 WithOriginX:(double)arg2 MaxOriginX:(double)arg3;
- (void)onClickBtn:(id)arg1;
- (void)showFTSInfoInTimeLabel:(id)arg1;
- (id)attachAuthorNameLabel:(id)arg1;
- (void)reUpload;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)changeWidth:(double)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
