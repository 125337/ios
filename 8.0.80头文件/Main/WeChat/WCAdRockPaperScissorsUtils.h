@interface WCAdRockPaperScissorsUtils : NSObject
+ (double)calcTitleAreaHeight;
+ (double)calcViewHeightWith:(id)arg1 maxWidth:(double)arg2;
+ (double)calcDisplayHeightWith:(id)arg1;
+ (double)calcScaledLengthWith:(double)arg1 maxWidth:(double)arg2;
+ (double)calcScaledLengthWith:(double)arg1 ratio:(double)arg2;
+ (double)calcScaleRatio:(double)arg1;
+ (id)fetchPagViewWithFrame:(CGRect)arg1 pagInfo:(id)arg2 repeated:(BOOL)arg3;
+ (id)fetchImageViewWithUrl:(id)arg1 darkUrl:(id)arg2;
+ (id)fetchLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
@end
