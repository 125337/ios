@interface MMFinderLiveBulkBuyPromoteContentView : UIView <MMFinderLiveTagsLabelDelegate>
{
    BOOL _isInReplay; // +0x8
    MMFinderLiveTaskId * _taskID; // +0x10
    MMWebImageView * _bulkBuyImageView; // +0x18
    MMFinderLiveProductButton * _actionButton; // +0x20
    id <MMFinderLiveBulkBuyPromoteContentViewDelegate> _delegate; // +0x28
    FinderBulkBuyInfo * _bulkBuyInfo; // +0x30
    UIView * _backgroundView; // +0x38
    MMWebImageView * _imageView; // +0x40
    MMUILabel * _serialNumLabel; // +0x48
    MMFinderLiveTagsLabel * _titleLabel; // +0x50
    UILabel * _descLabel; // +0x58
    UILabel * _discountLabel; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)backgroundView;
- (id)imageView;
- (id)serialNumLabel;
- (id)titleLabel;
- (id)descLabel;
- (id)discountLabel;
- (id)actionButton;
- (void)layoutSubviews;
- (double)imageViewSideLength;
- (void)layoutLeft;
- (void)layoutRightBottom;
- (void)layoutRightTop;
- (void)fillWithBulkBuyInfo:(id)arg1;
- (void)refreshData;
- (void)onActionButtonClicked:(id)arg1;
- (void)onWebImageGetDifferentSize;
- (void)startDisplayAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (void)startHideAnimationWithPart1Duration:(double)arg1 part2Duration:(double)arg2;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (BOOL)isInReplay;
- (void)setIsInReplay:(BOOL)arg1;
- (id)bulkBuyImageView;
- (void)setActionButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bulkBuyInfo;
- (void)setBulkBuyInfo:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSerialNumLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setDiscountLabel:(id)arg1;
- (void).cxx_destruct;
@end
