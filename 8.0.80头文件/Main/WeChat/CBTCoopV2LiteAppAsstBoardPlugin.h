@interface CBTCoopV2LiteAppAsstBoardPlugin : NSObject <CBTCoopV2AsstBoardPlugin>
+ (id)moduleIdentifier;
+ (id)cellReuseIdentifier;
+ (Class)cellViewClass;
+ (id)viewModelWithCardWrap:(id)arg1 delegate:(id)arg2;
+ (id)cellViewWithViewModel:(id)arg1;
@end
