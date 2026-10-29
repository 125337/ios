@interface MMFinderLiveNotifyStyleFollowNotifyCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    NSMutableArray * _headImageViewList; // +0x8
}
- (id)initWithCellFrame:(id)arg1;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)updateCommentLabelOrigin;
- (void)layoutHeadImageViews;
- (void)updateHeadImageViewsOrigin;
- (id)headImageViewList;
- (id)followNotifyDataItem;
- (void)setHeadImageViewList:(id)arg1;
- (void).cxx_destruct;
@end

