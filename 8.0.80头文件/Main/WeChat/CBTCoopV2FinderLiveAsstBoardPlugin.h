@interface CBTCoopV2FinderLiveAsstBoardPlugin : NSObject <CBTCoopV2AsstBoardPlugin>
+ (id)moduleIdentifier;
+ (id)cellReuseIdentifier;
+ (Class)cellViewClass;
+ (id)viewModelWithCardWrap:(id)arg1 delegate:(id)arg2;
+ (id)cellViewWithViewModel:(id)arg1;
+ (id)horizontalCardType;
+ (CGSize)horizontalCardItemSizeForViewModel:(id)arg1 availableWidth:(double)arg2;
@end
