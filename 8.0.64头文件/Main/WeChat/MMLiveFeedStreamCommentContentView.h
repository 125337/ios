@interface MMLiveFeedStreamCommentContentView : MMFinderLiveCommentBaseContentView
+ (double)commentTableWidth:(id)arg1;
+ (double)commentTableWidthPortrait:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)currentCommentTableWidth:(id)arg1;
- (id)commentDataMgr;
- (void)handleUnReadCountLabelTap:(id)arg1;
- (void)layoutUI;
- (void)layoutCommentTableBackView;
- (void)layoutCommentTableView;
- (CGRect)getCommentTableViewFrame;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(BOOL)arg1;
- (id)createUnReadCountLabel;
@end
